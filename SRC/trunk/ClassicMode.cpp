#include "ClassicMode.h"
#include "ui_ClassicMode.h"
#include "LegendsView.h"
#include "Game.h"

#define TIMER_CNTDWN 5 //管理倒计时秒数的宏
#define HERO_NUMS 4  // 保存已有英雄个数的宏


ClassicMode::ClassicMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClassicMode)
{

}

ClassicMode::~ClassicMode()
{
    delete ui;
}

ClassicMode::ClassicMode(bool setEditorVisible, bool setProcessVisible,
                         bool setInfoLineVisible, bool setViewEditEnable,
                         QStandardItemModel *Legendsmodel)
{
    isBack = false;
    LegendsView *chooseLegendsView = new LegendsView(NULL);
    chooseLegendsView->legendData = Legendsmodel;
    chooseLegendsView->setEditorVisible = setEditorVisible;
    chooseLegendsView->setProcessVisible = setProcessVisible;
    chooseLegendsView->setInfoLineVisible = setInfoLineVisible;
    chooseLegendsView->setViewEditEnable = setViewEditEnable;
    chooseLegendsView->setOkButtonVisible = true;
    chooseLegendsView->initiate();
    chooseLegendsView->exec();

    isBack = chooseLegendsView->isBack;
    isSelected = chooseLegendsView->isSelected;
    selectedHero = chooseLegendsView->selectedHero;

    srand((unsigned)time(NULL));
    selectedRow =rand()%HERO_NUMS; //随机获取英雄行
    for(int cache_i = 0 ; cache_i < 5  ; cache_i++ ){
        enemyHero.append(Legendsmodel->item(selectedRow,cache_i)->text()) ;
    }
    //将国家的5个属性存进selectedHero

}


void ClassicMode::GameBegin()
{
    Game *game = new Game(this);
    connect(this,SIGNAL( sendSelectedLegendData(QList<QString>,QList<QString>)),game,SLOT( receiveLegendData(QList<QString>,QList<QString>)));
    emit sendSelectedLegendData(selectedHero,enemyHero);
    game->show();
    close();
}


