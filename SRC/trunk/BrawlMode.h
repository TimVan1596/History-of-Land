#ifndef BRAWLMODE_H
#define BRAWLMODE_H
#include "ClassicMode.h"

class BrawlMode : public ClassicMode
{
    Q_OBJECT
public:
    void GameBegin();

    BrawlMode(bool setEditorVisible, bool setProcessVisible,
              bool setInfoLineVisible, bool setViewEditEnable,
              QStandardItemModel *Legendsmodel);
protected:
    int selectedRow;
    QList<QString> selectedHero;
    QList<QString> enemyHero;

    //以QList<QString>类型存储被选中英雄的四种属性

signals:
    void sendRandomLegendData(QList<QString>,QList<QString>);


};

#endif // BRAWLMODE_H
