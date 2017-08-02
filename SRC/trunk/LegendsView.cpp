#include "LegendsView.h"
#include "ui_LegendsView.h"
#include <QStandardItemModel>
#define TIMER_CNTDWN 5 //管理倒计时秒数的宏


LegendsView::LegendsView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LegendsView)
{
    isSelected = false;
    isBack = false;

}

LegendsView::~LegendsView()
{
    delete ui;
}

void LegendsView::on_okButton_clicked()
{
    isSelected = true;
    // 点击确定，改变selectedHero，外部页面将通过selectedHero获得所选的英雄
     int selectedRow = ui->LegendsTableView->currentIndex().row(); //获取当前选中行
    for(int cache_i = 0 ; cache_i < 4  ; cache_i++ ){
        selectedHero.append(legendData->item(selectedRow,cache_i)->text());
    }
    close();
}

void LegendsView::on_backButton_clicked()
{
    isBack = true; //返回
    close();
}


void LegendsView::upadateLineEdit()
{
    secondsCNT++;
    ui->timerProgressBar->setValue(secondsCNT);
    if(secondsCNT <= TIMER_CNTDWN && setViewEditEnable == true){
        ui->infoLine->setText(QString("请在 %1 秒内选择英雄，否则将自动返回主菜单！").arg(TIMER_CNTDWN-secondsCNT));
    }
    else if(secondsCNT <= TIMER_CNTDWN && setViewEditEnable == false){
        ui->infoLine->setText(QString("将在 %1 秒后自动进入游戏").arg(TIMER_CNTDWN-secondsCNT));
    }
    else if(setViewEditEnable == false){
        isBack =false; //若表格禁止点击，过时未点
        isSelected = true;
        close();
    }
    else if(setViewEditEnable == true){
        isBack =true;
        isSelected =false; //若表格可以点击，过时未点击
        close();
    }
}

void LegendsView::initiate(){
    ui->setupUi(this);

    if(setProcessVisible == false){
        ui->timerProgressBar->setVisible(false);
    }
    if(setInfoLineVisible == false){
        ui->infoLine->setVisible(false);
    }
    if(setEditorVisible == false){
        //不可见编辑菜单，含有4个按钮
        ui->editButton->setVisible(false);
        ui->addButton->setVisible(false);
        ui->deleteButton->setVisible(false);
        ui->findButton->setVisible(false);
    }
    if(setOkButtonVisible == false){
        ui->okButton->setVisible(false);
    }

    ui->LegendsTableView->setModel(legendData);
    ui->LegendsTableView->setSelectionBehavior(QAbstractItemView::SelectRows); // 行为单位
    ui->LegendsTableView->setSelectionMode(QAbstractItemView::SingleSelection); //禁止选中
    if(setViewEditEnable == false){
        ui->LegendsTableView->setSelectionMode(QAbstractItemView::NoSelection); //禁止选中
    }
    ui->LegendsTableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止编辑
    ui->LegendsTableView->horizontalHeader()->setDefaultAlignment(Qt::AlignHCenter);

    if(setProcessVisible && setInfoLineVisible){
        timerFun();
    }
}

void LegendsView::timerFun(){

    secondsCNT = 0;
    ui->timerProgressBar->setMaximum(TIMER_CNTDWN);
    timer = new QTimer(this);//设置一个倒计时变量
    connect(timer,SIGNAL(timeout()),this,SLOT(upadateLineEdit()));
    timer->start(1000);//每1000ms = 1s 触发一次slots，刷新一下lineEdit上的文字
}


