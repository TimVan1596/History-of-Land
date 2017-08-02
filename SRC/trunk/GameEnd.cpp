#include "GameEnd.h"
#include "ui_GameEnd.h"

GameEnd::GameEnd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameEnd)
{
    ui->setupUi(this);

}

GameEnd::~GameEnd()
{
    delete ui;
}

void GameEnd::initiate(bool isWin){
    if(isWin){
        ui->winLabel->setVisible(true);
        ui->defeatLabel->setVisible(false);
    }
    else{
        ui->winLabel->setVisible(false);
        ui->defeatLabel->setVisible(true);
    }
}

void GameEnd::on_pushButton_clicked()
{
    close();
}
