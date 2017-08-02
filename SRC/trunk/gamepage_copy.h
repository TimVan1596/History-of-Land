#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include <QMainWindow>
#include <QLineEdit>
#include "enemy.h"
#include "mystate.h"
#include <QAbstractItemModel>
#include <QStandardItem>


namespace Ui {
class GamePage;
}

class QLineEdit;
class QDialog;

class Classic : public QMainWindow
{
    Q_OBJECT

public:
    explicit Classic(QWidget *parent = 0);
    ~Classic();

    void newFile();
    bool maybe_save();
    bool save();
    bool save_as();
    bool open(const QString &);
    bool saveFile(const QString &fileName);
    MyState me;
    Enemy ene;
    int round_count;
    bool state;
signals:
    void sendRecordData(int,bool);

private slots:
    void on_action_N_triggered();

    void on_action_S_triggered();

    void on_action_A_2_triggered();

    void on_action_quit_triggered();

    void on_action_O_triggered();
    void showFindText();

    void on_actionfind_F_triggered();

    void on_pushButton_clicked();

    void receiveEndGame(bool end);
    void receiveclose(bool end);

    void receiveLegendData(QList<QString>);

private:
    Ui::GamePage *ui;
    bool isUntitled;
    QString curFile;
    QLineEdit *findLineEdit;
    QDialog *findDlg;
    void paintEvent(QPaintEvent *);
    QAbstractItemModel *Mylegend;
};



#endif // GAMEPAGE_H
