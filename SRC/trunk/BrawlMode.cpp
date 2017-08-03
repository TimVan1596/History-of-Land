#include "BrawlMode.h"
#include "LegendsView.h"
#include "Game.h"

#define HERO_NUMS 4  // 保存已有英雄个数的宏


BrawlMode::BrawlMode(bool setEditorVisible, bool setProcessVisible,
                     bool setInfoLineVisible, bool setViewEditEnable,
                     QStandardItemModel *Legendsmodel)
{
    srand((unsigned)time(NULL));
    selectedRow =rand()%HERO_NUMS; //随机获取英雄行
    for(int cache_i = 0 ; cache_i < 5  ; cache_i++ ){
        enemyHero.append(Legendsmodel->item(selectedRow,cache_i)->text()) ;
    }
    //将国家的5个属性存进selectedHero


    isBack = false;
    LegendsView *chooseLegendsView = new LegendsView(NULL);
    chooseLegendsView->legendData = Legendsmodel;
    chooseLegendsView->setEditorVisible = setEditorVisible;
    chooseLegendsView->setProcessVisible = setProcessVisible;
    chooseLegendsView->setInfoLineVisible = setInfoLineVisible;
    chooseLegendsView->setViewEditEnable = setViewEditEnable;
    chooseLegendsView->setOkButtonVisible = false;
    chooseLegendsView->initiate();
    chooseLegendsView->exec();

    selectedRow =rand()%HERO_NUMS; //随机获取英雄行

    for(int cache_i = 0 ; cache_i < 5  ; cache_i++ ){
        selectedHero.append(Legendsmodel->item(selectedRow,cache_i)->text()) ;
    }
    //将国家的5个属性存进selectedHero

    isBack = chooseLegendsView->isBack;
    isSelected = chooseLegendsView->isSelected;

}



void BrawlMode::GameBegin()
{
    Game *game = new Game(this);
    connect(this,SIGNAL( sendRandomLegendData(QList<QString>,QList<QString>)),game,SLOT( receiveLegendData(QList<QString>,QList<QString>)));
    emit sendRandomLegendData(selectedHero,enemyHero);
    game->show();
    close();
}


