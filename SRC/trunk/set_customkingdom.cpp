#include "set_customkingdom.h"
#include "ui_set_customkingdom.h"



Set_customKingdom::Set_customKingdom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Set_customKingdom)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式
    ui->tableWidget->horizontalHeader()->setResizeContentsPrecision(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setResizeContentsPrecision(QHeaderView::Stretch);
}

Set_customKingdom::~Set_customKingdom()
{
    delete ui;
}

void Set_customKingdom::on_Quit_clicked()
{
    close();
}

void Set_customKingdom::on_pushButton_clicked()
{



}

void Set_customKingdom::receiveData( )
{


}

void Set_customKingdom::receiveChangeData(){



}


void Set_customKingdom::on_pushButton_2_clicked()
{

}

void Set_customKingdom::on_pushButton_3_clicked()
{

}

void Set_customKingdom::on_pushButton_4_clicked()
{

}
