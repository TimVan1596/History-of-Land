#include "SystemWindow.h"
#include "ui_SystemWindow.h"

#include "settingpage.h"
#include "LegendsView.h"

#include "stdlib.h"
#include <string>
#include <string.h>
#define HERO_NUMS 4  // 保存已有英雄个数的宏

SystemWindow::SystemWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SystemWindow)
{
    legends[0].initiate("艾希 Ashe",30,11,15);
    legends[1].initiate("盖伦 Garen",21,35,1);
    legends[2].initiate("希维尔 Sivir",27,13,17);
    legends[3].initiate("提莫 Teemo",22,14,22);

    createLegendModel();
    ui->setupUi(this);


}

SystemWindow::~SystemWindow()
{
    delete ui;
}


void SystemWindow::createLegendModel()
{
    legend = new QStandardItemModel (HERO_NUMS,4,this);
    legend ->setHeaderData(0,Qt::Horizontal,tr("英雄"));
    legend ->setHeaderData(1,Qt::Horizontal,tr("攻击力"));
    legend ->setHeaderData(2,Qt::Horizontal,tr("护甲"));
    legend ->setHeaderData(3,Qt::Horizontal,tr("魔法值"));
    //默认为4X4的表格，一行为一个单位，对应一个英雄
    //默认是四个周免英雄

    //外层循环将英雄数组的数据传输给 QStandardItemModel
    //内存循环将每一个item的字体居中处理
    for(int cache_i = 0 ; cache_i < HERO_NUMS ; ++cache_i){
        legend->setItem(cache_i,0,new QStandardItem(legends[cache_i].name));
        legend->setItem(cache_i,1,new QStandardItem(QString::number(legends[cache_i].ATK,10)));
        legend->setItem(cache_i,2,new QStandardItem(QString::number(legends[cache_i].DFS,10)));
        legend->setItem(cache_i,3,new QStandardItem(QString::number(legends[cache_i].MP,10)));
        for(int cache_j = 0 ; cache_j < 4 ; ++cache_j){
            legend->item(cache_i,cache_j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        }
    }

}


void SystemWindow::on_ClassicGame_clicked()
{

    /*
    ClassicMode(bool setEditorVisible, bool setProcessVisible,
              bool setInfoLineVisible, bool setViewEditEnable,
              QStandardItemModel *Legendsmodel);
*/
    Classic = new ClassicMode(false,true,true,true,legend);
    //创建ClassicMode类对象Classic来运行经典模式
    if(Classic->isBack == false && Classic->isSelected == true){
        Classic->GameBegin();
    }
    //若没有点返回，开始游戏

}

void SystemWindow::on_BrawlGame_clicked()
{
    /*
    BrawlMode(bool setEditorVisible, bool setProcessVisible,
              bool setInfoLineVisible, bool setViewEditEnable,
              QStandardItemModel *Legendsmodel);
*/
    Brawl = new BrawlMode(false,true,true,false,legend);
    //创建BrawlMode类对象Brawl来运行大乱斗模式
    if(Brawl->isBack == false){
        Brawl->GameBegin();
    }
    //若没有点返回，开始游戏

}


void SystemWindow::on_freeLgends_clicked()
{
    /*
    bool setEditorVisible;  //四个编辑菜单是否可见
    bool setProcessVisible; //进度条是否可见
    bool setInfoLineVisible;    //倒计时文字提示是否可见
    bool setViewEditEnable; //英雄表格是否可用
    */
    //展示周免英雄表格，所有可选项均禁用
    LegendsView *freeLegends = new LegendsView(NULL);
    freeLegends->legendData = legend;
    freeLegends->setEditorVisible =false;
    freeLegends->setProcessVisible =false;
    freeLegends->setInfoLineVisible =false;
    freeLegends->setViewEditEnable =false;
    //禁用
    freeLegends->setOkButtonVisible = false;
    freeLegends->initiate();
    freeLegends->show();
}

void SystemWindow::on_Setings_clicked()
{
    SettingPage *setting = new SettingPage(this);
    setting->show();
}


void SystemWindow::on_Quit_clicked()
{
    close();
}
