#ifndef CUSTOMKINGDOM_FIND_H
#define CUSTOMKINGDOM_FIND_H

#include <QDialog>

namespace Ui {
class customkingdom_find;
}

class customkingdom_find : public QDialog
{
    Q_OBJECT

public:
    explicit customkingdom_find(QWidget *parent = 0);
    ~customkingdom_find();

private slots:
    void on_accept_clicked();

    void on_cancel_clicked();

private:
    Ui::customkingdom_find *ui;
};

#endif // CUSTOMKINGDOM_FIND_H
