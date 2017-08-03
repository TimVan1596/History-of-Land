#ifndef CHOOSELEGENDWIDGET_H
#define CHOOSELEGENDWIDGET_H

#include <QDialog>
#include <QAbstractItemModel>
#include <QStandardItem>
#include <string.h>
#include <string>
#include<QTimer>


namespace Ui {
class ClassicMode;
}

class ClassicMode : public QDialog
{
    Q_OBJECT
public:
    explicit ClassicMode(QWidget *parent = 0);
    ~ClassicMode();
    void setupLegendModel();
    void setupView();
    ClassicMode(bool setEditorVisible, bool setProcessVisible,
                bool setInfoLineVisible, bool setViewEditEnable,
                QStandardItemModel *Legendsmodel);
    bool isBack;
    bool isSelected;
    void GameBegin();


/*
public slots:
    void receiveModelData(QStandardItemModel * );
    //接收从主页面SystemWindow.cpp中发送的QStandardItemModel *legend
*/

signals:
    void sendSelectedLegendData(QList<QString>,QList<QString>);
    //发送 QStandardItemModel *legendData给GamePage

protected:
    Ui::ClassicMode *ui;
    QStandardItemModel *legendData;
    QTimer *timer;
    int secondsCNT; //已经过了多少秒
    int selectedRow;
    QList<QString> selectedHero;
    QList<QString>  enemyHero;

};

#endif // CHOOSELEGENDWIDGET_H
