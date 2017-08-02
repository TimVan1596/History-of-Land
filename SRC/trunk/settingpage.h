#ifndef SETTINGPAGE_H
#define SETTINGPAGE_H

#include <QMainWindow>

namespace Ui {
class SettingPage;
}

class SettingPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingPage(QWidget *parent = 0);
    ~SettingPage();

private slots:
    void on_Quit_clicked();

    void on_startGame_clicked();

private:
    Ui::SettingPage *ui;
};

#endif // SETTINGPAGE_H
