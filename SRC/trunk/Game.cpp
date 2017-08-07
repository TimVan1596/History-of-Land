#include "Game.h"
#include "ui_Game.h"
#include <QMessageBox>
#include <QPushButton>
#include <QFileDialog>
#include <QTextStream>
#include <QPainter>
#include <QVBoxLayout>
#include <QScrollBar>

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
    //connect(btn,&QPushButton::clicked(true),this,&GamePage::showFindText());
    //connect(btn, QPushButton::clicked, this, GamePage::showFindText());
    ui->History->setReadOnly(true);
    sumHurt = 0;
    sumATK = 0;
    round_count = 0;
    ui->textEdit->setVisible(false);

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




void Game::receiveclose(bool x)
{
    if(x){
        close();
    }
}

void Game::receiveLegendData(QList<QString> receiveData,QList<QString> enemyData)
{

    my.initiate(receiveData.at(0),receiveData.at(1).toInt(), receiveData.at(2).toInt(),receiveData.at(3).toInt(),receiveData.at(4).toInt()+5);
    enemy.initiate(enemyData.at(0),(enemyData.at(1).toInt()),(enemyData.at(2).toInt()+6),(enemyData.at(3).toInt()+6),(enemyData.at(4).toInt()));
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

void Game::endGame()
//结束游戏之后的记录
{
    GameEnd *gg = new GameEnd(this);
    gg->initiate(my.isAlive);
    gg->exec();

    GameRecord *record = new GameRecord(this);
    record->initiate(my.isAlive,round_count,sumATK,sumHurt);
    /*
    bool isWin; //是否胜利
    int SumRound; //总回合数
    int SumATK;    //总造成伤害
    int SumHurt;    //总承受伤害
*/
    record->show();

    close();
}

void Game::MilitaryCourt(Legend &winner,Legend &loser)
//军事法庭，用于处理每回合双方交战之后的结果，对两方属性进行划分
{


    winner.ATK += 5;
    loser.ATK  += 1;

    winner.DFS += 3;
    loser.DFS  -= 1;

    winner.MP += 10;
    loser.MP  -= 1;

    if(loser.HP< 0)  loser.HP = 0;

    if(winner.ATK > winner.HP)  winner.ATK = winner.HP;
    if(loser.ATK > loser.HP)  loser.ATK = loser.HP;
}


void Game::on_DirectATKBTN_clicked()
{
    //普通攻击
    int Origin_MYHP =my.HP;//保存开战前的原领土面积

    tipsBeforeGame();
    if(my.attack(enemy)){
        ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt,10)));
    }
    else {
        ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
    }
    sumATK +=my.round_hurt;

    if(enemy.attack(my)){
        ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt,10)));
    }
    else {
        ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
    }
    sumHurt += enemy.round_hurt;
    endBattle(Origin_MYHP);
}

void Game::on_ThinRedBTN_clicked()
{
    const int THINREDMP = 15;//消耗的民心值
    const int THINREDHP = 30;//增长的领土面积

    if(my.MP < THINREDMP){
        ui->History->insertPlainText(QString("我国人民的幸福度小于%1，请重新选择\n").arg(THINREDMP));
        return;
    }

    int Origin_MYHP =my.HP;//保存开战前的原领土面积
    tipsBeforeGame();

    ui->History->insertPlainText(QString("我国使用“细细的红线”消耗了%1幸福度\n").arg(THINREDMP));
    ui->History->insertPlainText("抢夺了敌方城池"+QString("%1").arg(THINREDHP)+"座\n");

    my.HP += THINREDHP;
    my.MP -= THINREDMP;
    enemy.HP -= THINREDHP;


    if(my.attack(enemy)){
        ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt,10)));
    }
    else {
        ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
    }
    sumATK +=my.round_hurt;

    if(enemy.attack(my)){
        ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt,10)));
    }
    else {
        ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
    }

    sumHurt +=enemy.round_hurt;
    endBattle(Origin_MYHP);
}

void Game::endBattle(int Origin_MYHP)
//交战之后的处理阶段函数
{
    ui->History->insertPlainText(QString("本回合 , "));
    if(my.HP - Origin_MYHP > 0){
        ui->History->insertPlainText(QString("我军大胜！共占领地方%1座城池\n").arg(my.HP - Origin_MYHP));
        MilitaryCourt(my,enemy);
    }
    else if(my.HP - Origin_MYHP == 0){
        ui->History->insertPlainText(QString("贼军和我军不相上下\n"));
    }
    else{
        ui->History->insertPlainText(QString("天不助我！我方城池失陷%1座\n").arg(Origin_MYHP-my.HP));
        MilitaryCourt(enemy,my);
    }
    updateTableWidget();
    QScrollBar *scrollbar = ui->History->verticalScrollBar();
    if (scrollbar)     {
        scrollbar->setSliderPosition(scrollbar->maximum());
    }


    if(my.isAlive == false ||enemy.isAlive ==false ){
        endGame();
    }

}

void Game::tipsBeforeGame()
//游戏开始前的提示语句
{
    QString c = QString::number(++round_count, 10);
    QString cache = QString("\n\n第 %1 轮\n").arg(c);
    ui->History->insertPlainText(cache);

}



void Game::on_ChiBiBTN_clicked()
{
    const int ChiBiMP = 20;
    const int ChiBiATK = 5;


    if(my.MP < ChiBiMP){
        ui->History->insertPlainText(QString("我国人民的幸福度小于%1，请重新选择\n").arg(ChiBiMP));
        return;
    }

    int Origin_MYHP =my.HP;//保存开战前的原领土面积
    tipsBeforeGame();

    ui->History->insertPlainText(QString("我国使用“火烧赤壁”消耗了%1幸福度\n").arg(ChiBiMP));
    ui->History->insertPlainText("将召唤盟军共同伐贼，同时我们军将增加兵力");

    my.MP-=ChiBiMP;
    my.ATK +=ChiBiATK;

    if(my.attack(enemy)){
        ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt,10)));
    }
    else {
        ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
    }
    sumATK +=my.round_hurt;

    if(my.attack(enemy)){
        ui->History->insertPlainText(QString("盟军英勇！助我军攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt,10)));
    }
    else {
        ui->History->insertPlainText("盟军战败，天不助我！\n");
    }
    sumATK +=my.round_hurt;

    if(enemy.attack(my)){
        ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt,10)));
    }
    else {
        ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
    }


    sumHurt +=enemy.round_hurt;
    endBattle(Origin_MYHP);

}

void Game::on_WinterRussiaBTN_clicked()
{
    const int WinterRussiaMP = 20;
    int WinterRussiaROUND = 2; //WinterRussiaROUND 个回合内敌军无法进攻

    if(my.MP < WinterRussiaMP){
        ui->History->insertPlainText(QString("我国人民的幸福度小于%1，请重新选择\n").arg(WinterRussiaMP));
        return;
    }

    ui->History->insertPlainText(QString("我国使用“俄罗斯之冬”消耗了%1幸福度\n").arg(WinterRussiaMP));
    ui->History->insertPlainText("敌军将在两个回合内无法进攻\n");

    while(WinterRussiaROUND--){
        int Origin_MYHP =my.HP;//保存开战前的原领土面积
        tipsBeforeGame();

        my.MP-=WinterRussiaMP;

        if(my.attack(enemy)){
            ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt,10)));
        }
        else {
            ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
        }

        sumATK +=my.round_hurt;

        ui->History->insertPlainText("敌军本回合因大雪封城，无法出击\n");
        sumHurt +=0;
        endBattle(Origin_MYHP);
    }


}
