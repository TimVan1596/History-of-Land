#include "settingpage.h"
#include "ui_settingpage.h"
#include "set_customkingdom.h"

SettingPage::SettingPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingPage)
{
    ui->setupUi(this);
}

SettingPage::~SettingPage()
{
    delete ui;
}

void SettingPage::on_Quit_clicked()
{
    close();
}

void SettingPage::on_startGame_clicked()
{

    Set_customKingdom *customPage = new Set_customKingdom(this);
    customPage->show();
}
