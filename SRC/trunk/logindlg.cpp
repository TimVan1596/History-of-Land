#include "logindlg.h"
#include "ui_logindlg.h"
#include <QMessageBox>

LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);
}

LoginDlg::~LoginDlg()
{
    delete ui;
}

void LoginDlg::on_login_clicked()
{
    if(ui->NameEdit->text().trimmed()==tr("admin") && ui->PsdEdit->text()==tr("123")){
        accept();
    }
    else{
        QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误"),QMessageBox::Yes);
        ui->NameEdit->clear();
        ui->PsdEdit->clear();
        ui->NameEdit->setFocus();
    }
}
