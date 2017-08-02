#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QDialog>

namespace Ui {
class gameover;
}

class gameover : public QDialog
{
    Q_OBJECT

public:
    explicit gameover(QWidget *parent = 0);
    ~gameover();

    void initiate(bool isWin);
signals:
   // void sendSIGNAL(bool);

private slots:
    void on_pushButton_clicked();

private:
    Ui::gameover *ui;
};

#endif // GAMEOVER_H
