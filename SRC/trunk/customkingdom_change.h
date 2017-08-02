#ifndef CUSTOMKINGDOM_CHANGE_H
#define CUSTOMKINGDOM_CHANGE_H

#include <QDialog>
#include "mystate.h"


namespace Ui {
class customkingdom_Change;
}

class customkingdom_Change : public QDialog
{
    Q_OBJECT

public:
    explicit customkingdom_Change(QWidget *parent = 0);
    ~customkingdom_Change();
    MyState cache;

signals:
    void sendData (MyState);

private slots:
    void on_cancel_clicked();

    void on_accept_clicked();

    void on_DFSEdit_textChanged(const QString &arg1);

private:
    Ui::customkingdom_Change *ui;
};

#endif // CUSTOMKINGDOM_CHANGE_H
