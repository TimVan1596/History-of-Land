#include "Game.h"
#include "ui_Game.h"
#include <QMessageBox>
#include <QPushButton>
#include <QFileDialog>
#include <QTextStream>
#include <QPainter>
#include <QVBoxLayout>

//#include "gameover.h"
//#include "gamewin.h"
#include "gamerecord.h"
#include "GameEnd.h"


Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GamePage)
{


    ui->setupUi(this);
    isUntitled = true;
    curFile = tr("新游戏");
    setWindowTitle(curFile);
    findDlg = new QDialog(this);
    findDlg->setWindowTitle("查找");
    findLineEdit = new QLineEdit(findDlg);
    QPushButton *btn =new QPushButton(tr("查找下一个"),findDlg);
    QVBoxLayout *layout = new QVBoxLayout(findDlg);
    layout->addWidget(findLineEdit);
    layout->addWidget(btn);
    round_count = 0;
    //connect(btn,&QPushButton::clicked(true),this,&GamePage::showFindText());
    //connect(btn, QPushButton::clicked, this, GamePage::showFindText());
    ui->History->setReadOnly(true);
    sumHurt = 0;
}

Game::~Game()
{
    delete ui;
}

void Game::newFile(){
    if(maybe_save()){
        isUntitled = true;
        curFile = tr("新游戏");
        setWindowTitle(curFile);
        ui->textEdit->clear();
        ui->textEdit->setVisible(true);
    }
}

bool Game::open(const QString &fileName){
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,tr("帝国时代"),tr("无法读取存档 %1:\n%2.")
                             .arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream in(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    ui->textEdit->setPlainText(in.readAll());
    QApplication::restoreOverrideCursor();
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}


bool Game::save(){
    if(isUntitled){
        return save_as();
    }
    else {
        return saveFile(curFile);
    }
}

bool Game::maybe_save(){
    if(ui->textEdit->document()->isModified()){

        QMessageBox box;
        box.setWindowTitle(tr("进度已更改"));
        box.setIcon(QMessageBox::Information);
        box.setText(curFile+tr("  进度尚未保存，是否保存?"));
        QPushButton *yes = box.addButton(tr("保存(&Y)"),QMessageBox::YesRole);
        QPushButton *no = box.addButton(tr("销毁(&N)"),QMessageBox::NoRole);

        box.exec();
        if(box.clickedButton()==yes){
            return save();
        }
        else if(box.clickedButton() == no){
            return false;
        }
    }
    return true;
}

bool Game::save_as(){
    QString fileName = QFileDialog::getSaveFileName(this,tr("另存为"),curFile);
    if(fileName.isEmpty()) return false;
    return saveFile(fileName);
}

bool Game::saveFile(const QString &fileName){
    QFile file(fileName);

    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,tr("帝国时代"),tr("无法保存游戏 %1: /n %2")
                             .arg(fileName).arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    out<<ui->textEdit->toPlainText();
    QApplication::restoreOverrideCursor();
    isUntitled = false;
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}

void Game::on_action_N_triggered()
{
    newFile();
}

void Game::on_action_S_triggered()
{
    save();
}

void Game::on_action_A_2_triggered()
{
    save_as();
}

void Game::on_action_quit_triggered()
{
    if(maybe_save()){
        ui->textEdit->setVisible(false);
    }
    qApp->quit();

}

void Game::on_action_O_triggered()
{
    if(maybe_save()){
        QString fileName = QFileDialog::getOpenFileName(this);
        if(!fileName.isEmpty()){
            open(fileName);
            ui->textEdit->setVisible(true);
        }
    }
}

void Game::showFindText()
{
    QString str= findLineEdit->text();
    ui->textEdit->find(str,QTextDocument::FindBackward);
    if(!ui->textEdit->find(str,QTextDocument::FindBackward)){
        QMessageBox::warning(this,tr("查找"),
                             tr("找不到%1").arg(str));

    }
}

void Game::on_actionfind_F_triggered()
{
    findDlg->show();
}

void Game::paintEvent(QPaintEvent *)
{
    QPainter painter (this);
    QPixmap me1;
    me1.load(":/gpicon/images/icon/me.BMP");
    painter.drawPixmap(20,20,80,45,me1);
    //    qreal me1h = me1.height();
    //    qreal me1w = me1.width();
}


void Game::on_pushButton_clicked()
{


    QString c = QString::number(++round_count, 10);
    QString cache = QString("第 %1 轮\n").arg(c);
    ui->History->insertPlainText(cache);
    if(my.attack(enemy)){
        ui->History->insertPlainText("己方胜利！\n");
    }
    else {
        ui->History->insertPlainText("可恶，敌人胜利！\n");
    }

    if(enemy.attack(my)){
        ui->History->insertPlainText("可恶，敌人胜利！\n\n");
    }
    else {
        ui->History->insertPlainText("己方胜利！\n\n");
    }

    sumHurt +=my.round_hurt;
    ui->History->insertPlainText("总伤害为 :"+QString::number(sumHurt,10));

    updateTableWidget();
    if(my.isAlive == false ||enemy.isAlive ==false ){
        endGame();
    }
}

void Game::receiveEndGame(bool end)
{
    emit sendRecordData(round_count,end);
    GameRecord *record = new GameRecord(this);
    record->win = end;
    record->round_count = this->round_count;
    record->show();
}

void Game::receiveclose(bool x)
{
    if(x){
        close();
    }
}

void Game::receiveLegendData(QList<QString> receiveData,QList<QString> enemyData)
{

    my.initiate(receiveData.at(0),receiveData.at(1).toInt(),my.DFS = receiveData.at(2).toInt(),receiveData.at(3).toInt());
    enemy.initiate(enemyData.at(0),enemyData.at(1).toInt(),my.DFS = enemyData.at(2).toInt(),enemyData.at(3).toInt());
    //Legend类的my和enemy接收从外部发过来的数据

    myName = new QTableWidgetItem(my.name);
    myHP = new QTableWidgetItem(QString::number(my.HP,10));
    myATK = new QTableWidgetItem(QString::number(my.ATK,10));
    myDEF = new QTableWidgetItem(QString::number(my.DFS,10));
    myMP = new QTableWidgetItem(QString::number(my.MP,10));
    //五个QTableWidgetItem *分别对应英雄名字，生命，攻击力，护甲，魔法值
    enemyName = new QTableWidgetItem(enemy.name);
    enemyHP = new QTableWidgetItem(QString::number(enemy.HP,10));
    enemyATK = new QTableWidgetItem(QString::number(enemy.ATK,10));
    enemyDEF = new QTableWidgetItem(QString::number(enemy.DFS,10));
    enemyMP = new QTableWidgetItem(QString::number(enemy.MP,10));


    updateTableWidget();
}


void Game::updateTableWidget(){
    //及时更新己方和敌方英雄的数据，节省代码量

    myHP->setText(QString::number(my.HP,10));
    myATK->setText(QString::number(my.ATK,10));
    myDEF->setText(QString::number(my.DFS,10));
    myMP->setText(QString::number(my.MP,10));

    enemyHP->setText(QString::number(enemy.HP,10));
    enemyATK->setText(QString::number(enemy.ATK,10));
    enemyDEF->setText(QString::number(enemy.DFS,10));
    enemyMP->setText(QString::number(enemy.MP,10));


    ui->myTableWidget->setItem(0,0,myName);
    ui->myTableWidget->setItem(1,0,myHP);
    ui->myTableWidget->setItem(2,0,myATK);
    ui->myTableWidget->setItem(3,0,myDEF);
    ui->myTableWidget->setItem(4,0,myMP);

    ui->enemyTableWidget->setItem(0,0,enemyName);
    ui->enemyTableWidget->setItem(1,0,enemyHP);
    ui->enemyTableWidget->setItem(2,0,enemyATK);
    ui->enemyTableWidget->setItem(3,0,enemyDEF);
    ui->enemyTableWidget->setItem(4,0,enemyMP);

}

void Game::endGame(){
    GameEnd *gg = new GameEnd(this);
    gg->initiate(my.isAlive);
    gg->exec();

    GameRecord *record = new GameRecord(this);
    record->initiate(round_count,my.isAlive);
    record->show();

    close();
}

