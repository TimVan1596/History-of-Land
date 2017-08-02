#ifndef GAMEEND_H
#define GAMEEND_H

#include <QDialog>

namespace Ui {
class GameEnd;
}

class GameEnd : public QDialog
{
    Q_OBJECT

public:
    explicit GameEnd(QWidget *parent = 0);
    ~GameEnd();

    void initiate(bool isWin);
private slots:
    void on_pushButton_clicked();

private:
    Ui::GameEnd *ui;
};

#endif // GAMEEND_H
