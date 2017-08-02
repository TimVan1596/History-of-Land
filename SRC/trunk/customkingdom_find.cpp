#include "customkingdom_find.h"
#include "ui_customkingdom_find.h"

customkingdom_find::customkingdom_find(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customkingdom_find)
{
    ui->setupUi(this);
}

customkingdom_find::~customkingdom_find()
{
    delete ui;
}

void customkingdom_find::on_accept_clicked()
{/*
    int count=items.count();
    for(int i=0;i<count;i++)
    {
        int row=ui->TableWidget->row(items.at(i));//获取选中的行
        QTableWidgetItem *item=items.at(i);
        QString name=item->text();//获取内容
    }
    close();
*/
}

void customkingdom_find::on_cancel_clicked()
{
    close();
}
