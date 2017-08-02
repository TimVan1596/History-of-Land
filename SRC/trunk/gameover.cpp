#include "gameover.h"
#include "ui_gameover.h"

gameover::gameover(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameover)
{
}

gameover::~gameover()
{
    delete ui;
}

void gameover::on_pushButton_clicked()
{
   // emit sendSIGNAL(false);
    close();
}

void gameover::initiate(bool isWin){
    if(isWin){

    }
    ui->setupUi(this);
}
