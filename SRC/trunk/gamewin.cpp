#include "gamewin.h"
#include "ui_gamewin.h"

GameWin::GameWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWin)
{
    ui->setupUi(this);
}

GameWin::~GameWin()
{
    delete ui;
}

void GameWin::on_pushButton_clicked()
{
    emit sendSIGNAL(true);
    close();
}
