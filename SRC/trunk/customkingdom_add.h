#ifndef CUSTOMKINGDOM_ADD_H
#define CUSTOMKINGDOM_ADD_H

#include <QDialog>
#include "mystate.h"

namespace Ui {
class customKingdom_add;
}

class customKingdom_add : public QDialog
{
    Q_OBJECT

public:
    explicit customKingdom_add(QWidget *parent = 0);
    ~customKingdom_add();
     MyState cache;
signals:
    void sendData (MyState);


private slots:
    void on_accept_clicked();

    void on_DFSEdit_textChanged(const QString &arg1);

    void on_cancel_clicked();

private:
    Ui::customKingdom_add *ui;
};

#endif // CUSTOMKINGDOM_ADD_H
