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

void GameRecord::initiate(bool isWin,int SumRound,int SumATK ,int SumHurt)
{

    ui->RoundCNTEdit->setReadOnly(true);  //编辑框只读
    ui->SumHurtEdit->setReadOnly(true);  //编辑框只读
    ui->SumATKEdit->setReadOnly(true);  //编辑框只读


    if(!isWin){
        ui->OverPic->setVisible(false);
    }
    else{
        ui->WinPic->setVisible(false);
    }

    ui->RounCountdEdit->setText(QString::number(SumRound,10));
    ui->SumHurtEdit->setText(QString::number(SumHurt,10));

}
