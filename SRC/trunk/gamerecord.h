#ifndef GAMERECORD_H
#define GAMERECORD_H

#include <QDialog>

namespace Ui {
class GameRecord;
}

class GameRecord : public QDialog
{
    Q_OBJECT

public:
    explicit GameRecord(QWidget *parent = 0);
    ~GameRecord();


    void initiate(bool isWin, int SumRound, int SumATK, int SumHurt);
signals:

private slots:
    void on_accept_clicked();


private:
    Ui::GameRecord *ui;
    bool isWin; //是否胜利
    int SumRound; //总回合数
    int SumATK;    //总造成伤害
    int SumHurt;    //总承受伤害
};

#endif // GAMERECORD_H
