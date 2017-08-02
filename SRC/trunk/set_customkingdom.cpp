#include "set_customkingdom.h"
#include "ui_set_customkingdom.h"

#include "customkingdom_add.h"
#include "customkingdom_change.h"
#include "customkingdom_find.h"


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
    customKingdom_add *addPage = new customKingdom_add(this);
    connect(addPage,SIGNAL(sendData(MyState)),this,SLOT(receiveData(MyState)));
    addPage->show();


}

void Set_customKingdom::receiveData(MyState x)
{

    int row_count = ui->tableWidget->rowCount(); //获取表单行数
    ui->tableWidget->insertRow(row_count); //插入新行
    QTableWidgetItem *item = new QTableWidgetItem();
    QTableWidgetItem *item1 = new QTableWidgetItem();
    QTableWidgetItem *item2 = new QTableWidgetItem();
    QTableWidgetItem *item3 = new QTableWidgetItem();
    QTableWidgetItem *item4 = new QTableWidgetItem();

    //设置对应的图标、文件名称、最后更新时间、对应的类型、文件大小
    item->setText(x.name);
    item1->setText( QString::number(x.TTY, 10));
    item2->setText( QString::number(x.MIT, 10));
    item3->setText(QString::number(x.DFS, 10));
    item4->setText(QString::number(x.Happy, 10));

    ui->tableWidget->setItem(row_count, 0, item);
    ui->tableWidget->setItem(row_count, 1, item2);
    ui->tableWidget->setItem(row_count, 2, item3);
    ui->tableWidget->setItem(row_count, 3, item4);
    //    ui->tableWidget->setItem(row_count, 4, item3);
}

void Set_customKingdom::receiveChangeData(MyState x){

    //   bool focus = ui->tableWidget->isItemSelected(tableWidget->currentItem()); // 判断是否选中一行
    int row1 = ui->tableWidget->currentItem()->row(); // 当前选中行

    QTableWidgetItem *item = new QTableWidgetItem();
    QTableWidgetItem *item1 = new QTableWidgetItem();
    QTableWidgetItem *item2 = new QTableWidgetItem();
    QTableWidgetItem *item3 = new QTableWidgetItem();
    QTableWidgetItem *item4 = new QTableWidgetItem();
    item->setText(x.name);
    item1->setText( QString::number(x.TTY, 10));
    item2->setText( QString::number(x.MIT, 10));
    item3->setText(QString::number(x.DFS, 10));
    item4->setText(QString::number(x.Happy, 10));

    ui->tableWidget->setItem(row1,0,item);
    ui->tableWidget->setItem(row1, 1, item2);
    ui->tableWidget->setItem(row1, 2, item3);
    ui->tableWidget->setItem(row1, 3, item4);

}


void Set_customKingdom::on_pushButton_2_clicked()
{
    customkingdom_Change *changePage = new customkingdom_Change(this);
    connect(changePage,SIGNAL(sendData(MyState)),this,SLOT(receiveChangeData(MyState)));
    changePage->show();
}

void Set_customKingdom::on_pushButton_3_clicked()
{
    int rowIndex = ui->tableWidget->currentRow();
    if (rowIndex != -1)
        ui->tableWidget->removeRow(rowIndex);
}

void Set_customKingdom::on_pushButton_4_clicked()
{
    customkingdom_find *finfPage = new customkingdom_find(this);
    finfPage->show();
}
