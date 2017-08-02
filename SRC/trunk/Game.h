#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include <QMainWindow>
#include <QLineEdit>
#include <QAbstractItemModel>
#include <QTableWidgetItem>
#include <QStandardItem>

#include "Legend.h"



namespace Ui {
class GamePage;
}

class QLineEdit;
class QDialog;

class Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = 0);
    ~Game();

    void newFile();
    bool maybe_save();
    bool save();
    bool save_as();
    bool open(const QString &);
    bool saveFile(const QString &fileName);
    //    MyState my;
    //    Enemy enemy;
    int round_count;
    bool state;
signals:
    void sendRecordData(int,bool);

private slots:
    void on_action_N_triggered();

    void on_action_S_triggered();

    void on_action_A_2_triggered();

    void on_action_quit_triggered();

    void on_action_O_triggered();
    void showFindText();

    void on_actionfind_F_triggered();

    void on_pushButton_clicked();

    void receiveEndGame(bool end);
    void receiveclose(bool end);

    void receiveLegendData(QList<QString>, QList<QString> );

private:
    Ui::GamePage *ui;
    bool isUntitled;
    QString curFile;
    QLineEdit *findLineEdit;
    QDialog *findDlg;
    void paintEvent(QPaintEvent *);
    QAbstractItemModel *Mylegend;
    Legend my;
    Legend enemy;

    QTableWidgetItem *myName ;
    QTableWidgetItem *myHP ;
    QTableWidgetItem *myATK ;
    QTableWidgetItem *myDEF ;
    QTableWidgetItem *myMP;
    //五个QTableWidgetItem *分别对应英雄名字，生命，攻击力，护甲，魔法值
    QTableWidgetItem *enemyName ;
    QTableWidgetItem *enemyHP;
    QTableWidgetItem *enemyATK ;
    QTableWidgetItem *enemyDEF ;
    QTableWidgetItem *enemyMP ;

    void updateTableWidget();
    // 及时更新己方和敌方英雄的数据，节省代码量
    void endGame();
    //当游戏结束后进入
    int sumHurt; // 保存承受敌方的总攻击力
};



#endif // GAMEPAGE_H
