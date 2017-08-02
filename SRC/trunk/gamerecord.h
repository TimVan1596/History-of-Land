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
    bool win;
    int round_count;

    void initiate(int round_count, bool isWin);
signals:

private slots:
    void on_accept_clicked();


private:
    Ui::GameRecord *ui;
};

#endif // GAMERECORD_H
