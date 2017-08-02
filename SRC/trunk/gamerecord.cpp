#include "gamerecord.h"
#include "ui_gamerecord.h"

GameRecord::GameRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameRecord)
{
    ui->setupUi(this);

}

GameRecord::~GameRecord()
{
    delete ui;
}

void GameRecord::on_accept_clicked()
{
    close();
}

void GameRecord::initiate(int round_count ,bool isWin)
{
    this->round_count = round_count;
    this->win = win;

    ui->RounCountdEdit->setReadOnly(true);
    ui->RounCountdEdit->setText(QString::number(this->round_count,10));
    if(!win){
        ui->OverPic->setVisible(false);
    }
    else{
        ui->WinPic->setVisible(false);
    }
}
