#ifndef SET_CUSTOMKINGDOM_H
#define SET_CUSTOMKINGDOM_H

#include <QDialog>
#include "mystate.h"
namespace Ui {
class Set_customKingdom;
}

class Set_customKingdom : public QDialog
{
    Q_OBJECT

public:
    explicit Set_customKingdom(QWidget *parent = 0);
    ~Set_customKingdom();
private slots:
    void on_Quit_clicked();
    void receiveData(MyState x);
    void receiveChangeData(MyState x);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Set_customKingdom *ui;
};

#endif // SET_CUSTOMKINGDOM_H
