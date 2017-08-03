#include "customkingdom_add.h"
#include "ui_customkingdom_add.h"

customKingdom_add::customKingdom_add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customKingdom_add)
{
    ui->setupUi(this);

}

customKingdom_add::~customKingdom_add()
{
    delete ui;
}

void customKingdom_add::on_accept_clicked()
{
//    if(ui->NameEdit->text() != "DYQ"){
//        this->cache.name = ui->NameEdit->text();
//    }
//    else{
//        this->cache.name = "笨蛋";
//    }
//    this->cache.MIT = ui->MITEdit->text().toInt();
//    this->cache.DFS = ui->DFSEdit->text().toInt();
//    int cache_MIT = ui->MITEdit->text().toInt();
//    int cache_DFS = ui->DFSEdit->text().toInt();
//    int cache_Happy = (6000-120*cache_MIT-100*cache_DFS)/83;
//    this->cache.Happy = cache_Happy;
//    ui->HappyEdit->setText(QString::number(cache_Happy, 10));
//    emit sendData(cache);
//    close();
//}

void customKingdom_add::on_DFSEdit_textChanged(const QString &arg1)
{
//    int cache_MIT = ui->MITEdit->text().toInt();
//    int cache_DFS = ui->DFSEdit->text().toInt();
//    int cache_Happy = (6000-120*cache_MIT-100*cache_DFS)/83;
//    ui->HappyEdit->setText(QString::number(cache_Happy, 10));
}

void customKingdom_add::on_cancel_clicked()
{
    close();
}
