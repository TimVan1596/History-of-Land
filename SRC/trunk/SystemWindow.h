#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QStandardItem>
#include "BrawlMode.h"
#include "ClassicMode.h"
#include "Legend.h"


namespace Ui {
class SystemWindow;
}

class SystemWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SystemWindow(QWidget *parent = 0);
    Legend legends[4];  //保存四个周免英雄
    ~SystemWindow();

private slots:

    void on_Setings_clicked();

    void on_Quit_clicked();

    void on_BrawlGame_clicked();

    void on_ClassicGame_clicked();

    void on_freeLgends_clicked();

signals:
    void sendModelData(QStandardItemModel *);
private:
    Ui::SystemWindow *ui;
    QStandardItemModel *legend;
    void createLegendModel();

    BrawlMode *Brawl;
    ClassicMode *Classic;

};

#endif // MAINPAGE_H
