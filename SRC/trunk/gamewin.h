#ifndef GAMEWIN_H
#define GAMEWIN_H

#include <QDialog>

namespace Ui {
class GameWin;
}

class GameWin : public QDialog
{
    Q_OBJECT

public:
    explicit GameWin(QWidget *parent = 0);
    ~GameWin();
signals:
    void sendSIGNAL(bool);

private slots:
    void on_pushButton_clicked();

private:
    Ui::GameWin *ui;
};

#endif // GAMEWIN_H
