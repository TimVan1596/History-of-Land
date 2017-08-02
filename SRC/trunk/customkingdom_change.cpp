#include "customkingdom_change.h"
#include "ui_customkingdom_change.h"

customkingdom_Change::customkingdom_Change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customkingdom_Change)
{
    ui->setupUi(this);
}

customkingdom_Change::~customkingdom_Change()
{
    delete ui;
}

void customkingdom_Change::on_cancel_clicked()
{
    close();
}

void customkingdom_Change::on_accept_clicked()
{
    this->cache.name = ui->NameEdit->text();
    this->cache.MIT = ui->MITEdit->text().toInt();
    this->cache.DFS = ui->DFSEdit->text().toInt();
    int cache_MIT = ui->MITEdit->text().toInt();
    int cache_DFS = ui->DFSEdit->text().toInt();
    int cache_Happy = (6000-120*cache_MIT-100*cache_DFS)/83;
    this->cache.Happy = cache_Happy;
    ui->HappyEdit->setText(QString::number(cache_Happy, 10));
    emit sendData(cache);
    close();


}

void customkingdom_Change::on_DFSEdit_textChanged(const QString &arg1)
{
    int cache_MIT = ui->MITEdit->text().toInt();
    int cache_DFS = ui->DFSEdit->text().toInt();
    int cache_Happy = (6000-120*cache_MIT-100*cache_DFS)/83;
    ui->HappyEdit->setText(QString::number(cache_Happy, 10));
}
