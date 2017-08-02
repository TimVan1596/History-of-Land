#ifndef LEGENDSVIEW_H
#define LEGENDSVIEW_H

#include <QDialog>
#include <QStandardItemModel>
#include<QTimer>


namespace Ui {
class LegendsView;
}

class LegendsView : public QDialog
{
    Q_OBJECT

public:
    explicit LegendsView(QWidget *parent = 0);
    ~LegendsView();
    bool setEditorVisible;  //四个编辑菜单是否可见
    bool setProcessVisible; //进度条是否可见
    bool setInfoLineVisible;    //倒计时文字提示是否可见
    bool setViewEditEnable; //英雄表格是否可用
    bool setOkButtonVisible; //确定按钮是否可用
    bool setBackButtonVisible; //返回按钮是否可用

    QStandardItemModel *legendData;
    void initiate();
    bool isSelected;  //若已经选择了表格的一项即为真
    bool isBack;     //若点击了返回即为真
    QList<QString> selectedHero;
    //以QList<QString>类型存储被选中英雄的四种属性

protected:
    void timerFun();
private slots:
    void on_okButton_clicked();
    void on_backButton_clicked();
    void upadateLineEdit();


private:
    Ui::LegendsView *ui;
    QTimer *timer;
    int secondsCNT; //已经过了多少秒

};

#endif // LEGENDSVIEW_H
