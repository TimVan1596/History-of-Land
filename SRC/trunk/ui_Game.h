/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamePage
{
public:
    QAction *action_revert;
    QAction *action_quit;
    QAction *action_GG;
    QAction *medal;
    QAction *attack;
    QAction *action_S;
    QAction *action_R;
    QAction *action_A;
    QAction *action_O;
    QAction *action_N;
    QAction *action_A_2;
    QAction *actionfind_F;
    QWidget *centralwidget;
    QLabel *cache;
    QPushButton *pushButton;
    QLabel *ProcessStatus;
    QTextEdit *History;
    QTextEdit *textEdit;
    QTableWidget *myTableWidget;
    QTableWidget *enemyTableWidget;
    QMenuBar *menubar;
    QMenu *menu_help;
    QMenu *menu_menu;
    QMenu *menu_record;
    QMenu *menu_S;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GamePage)
    {
        if (GamePage->objectName().isEmpty())
            GamePage->setObjectName(QStringLiteral("GamePage"));
        GamePage->resize(743, 542);
        action_revert = new QAction(GamePage);
        action_revert->setObjectName(QStringLiteral("action_revert"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/gpicon/images/icon/GamePage_revert.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_revert->setIcon(icon);
        action_quit = new QAction(GamePage);
        action_quit->setObjectName(QStringLiteral("action_quit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gpicon/images/icon/GamePage_quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_quit->setIcon(icon1);
        action_GG = new QAction(GamePage);
        action_GG->setObjectName(QStringLiteral("action_GG"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gpicon/images/icon/GamePage_GG.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_GG->setIcon(icon2);
        medal = new QAction(GamePage);
        medal->setObjectName(QStringLiteral("medal"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gpicon/images/icon/GamePage_Medal.png"), QSize(), QIcon::Normal, QIcon::Off);
        medal->setIcon(icon3);
        attack = new QAction(GamePage);
        attack->setObjectName(QStringLiteral("attack"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/gpicon/images/icon/GamePage_attack.png"), QSize(), QIcon::Normal, QIcon::Off);
        attack->setIcon(icon4);
        action_S = new QAction(GamePage);
        action_S->setObjectName(QStringLiteral("action_S"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/gpicon/images/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon5);
        action_R = new QAction(GamePage);
        action_R->setObjectName(QStringLiteral("action_R"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/gpicon/images/icon/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_R->setIcon(icon6);
        action_A = new QAction(GamePage);
        action_A->setObjectName(QStringLiteral("action_A"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/gpicon/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_A->setIcon(icon7);
        action_O = new QAction(GamePage);
        action_O->setObjectName(QStringLiteral("action_O"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/gpicon/images/icon/OPEN.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon8);
        action_N = new QAction(GamePage);
        action_N->setObjectName(QStringLiteral("action_N"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/gpicon/images/icon/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon9);
        action_A_2 = new QAction(GamePage);
        action_A_2->setObjectName(QStringLiteral("action_A_2"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/gpicon/images/icon/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_A_2->setIcon(icon10);
        actionfind_F = new QAction(GamePage);
        actionfind_F->setObjectName(QStringLiteral("actionfind_F"));
        centralwidget = new QWidget(GamePage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        cache = new QLabel(centralwidget);
        cache->setObjectName(QStringLiteral("cache"));
        cache->setGeometry(QRect(9, 380, 622, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 70, 131, 111));
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(64, 64));
        pushButton->setFlat(true);
        ProcessStatus = new QLabel(centralwidget);
        ProcessStatus->setObjectName(QStringLiteral("ProcessStatus"));
        ProcessStatus->setGeometry(QRect(310, 170, 81, 41));
        History = new QTextEdit(centralwidget);
        History->setObjectName(QStringLiteral("History"));
        History->setGeometry(QRect(80, 320, 541, 131));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(650, 370, 16, 16));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setFrameShadow(QFrame::Plain);
        myTableWidget = new QTableWidget(centralwidget);
        if (myTableWidget->columnCount() < 1)
            myTableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        myTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (myTableWidget->rowCount() < 5)
            myTableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        myTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        myTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        myTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        myTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        myTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        myTableWidget->setObjectName(QStringLiteral("myTableWidget"));
        myTableWidget->setGeometry(QRect(40, 30, 181, 261));
        enemyTableWidget = new QTableWidget(centralwidget);
        if (enemyTableWidget->columnCount() < 1)
            enemyTableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        enemyTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        if (enemyTableWidget->rowCount() < 5)
            enemyTableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        enemyTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        enemyTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        enemyTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        enemyTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        enemyTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        enemyTableWidget->setObjectName(QStringLiteral("enemyTableWidget"));
        enemyTableWidget->setGeometry(QRect(520, 30, 181, 261));
        GamePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GamePage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 743, 23));
        menu_help = new QMenu(menubar);
        menu_help->setObjectName(QStringLiteral("menu_help"));
        menu_menu = new QMenu(menubar);
        menu_menu->setObjectName(QStringLiteral("menu_menu"));
        menu_record = new QMenu(menubar);
        menu_record->setObjectName(QStringLiteral("menu_record"));
        menu_S = new QMenu(menubar);
        menu_S->setObjectName(QStringLiteral("menu_S"));
        GamePage->setMenuBar(menubar);
        statusbar = new QStatusBar(GamePage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GamePage->setStatusBar(statusbar);
        toolBar = new QToolBar(GamePage);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GamePage->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menu_menu->menuAction());
        menubar->addAction(menu_S->menuAction());
        menubar->addAction(menu_record->menuAction());
        menubar->addAction(menu_help->menuAction());
        menu_help->addAction(action_R);
        menu_help->addAction(action_A);
        menu_menu->addSeparator();
        menu_menu->addAction(action_revert);
        menu_menu->addAction(action_quit);
        menu_menu->addAction(action_GG);
        menu_record->addAction(actionfind_F);
        menu_S->addAction(action_N);
        menu_S->addAction(action_S);
        menu_S->addAction(action_A_2);
        menu_S->addAction(action_O);
        toolBar->addAction(attack);
        toolBar->addAction(medal);

        retranslateUi(GamePage);

        QMetaObject::connectSlotsByName(GamePage);
    } // setupUi

    void retranslateUi(QMainWindow *GamePage)
    {
        GamePage->setWindowTitle(QApplication::translate("GamePage", "MainWindow", Q_NULLPTR));
        action_revert->setText(QApplication::translate("GamePage", "\351\207\215\346\226\260\345\274\200\345\247\213\344\273\273\345\212\241(&R)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_revert->setShortcut(QApplication::translate("GamePage", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_quit->setText(QApplication::translate("GamePage", "\351\200\200\345\207\272\344\273\273\345\212\241(&Q)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_quit->setShortcut(QApplication::translate("GamePage", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_GG->setText(QApplication::translate("GamePage", "\350\277\224\345\233\236Windows(&Q)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_GG->setShortcut(QApplication::translate("GamePage", "Ctrl+G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        medal->setText(QApplication::translate("GamePage", "\346\216\222\350\241\214\346\246\234(&C)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        medal->setStatusTip(QApplication::translate("GamePage", "\346\211\223\345\274\200\346\216\222\350\241\214\346\246\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        medal->setShortcut(QApplication::translate("GamePage", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        attack->setText(QApplication::translate("GamePage", "\346\224\273\345\207\273", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        attack->setStatusTip(QApplication::translate("GamePage", "\346\231\256\351\200\232\346\224\273\345\207\273", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        action_S->setText(QApplication::translate("GamePage", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_S->setShortcut(QApplication::translate("GamePage", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_R->setText(QApplication::translate("GamePage", "\350\247\204\345\210\231\350\257\264\346\230\216(&R)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_R->setShortcut(QApplication::translate("GamePage", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_A->setText(QApplication::translate("GamePage", "\345\205\263\344\272\216(&A)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_A->setShortcut(QApplication::translate("GamePage", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_O->setText(QApplication::translate("GamePage", "\350\257\273\345\217\226(&O)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_O->setShortcut(QApplication::translate("GamePage", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_N->setText(QApplication::translate("GamePage", "\346\226\260\345\273\272\345\255\230\346\241\243(&N)", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_N->setShortcut(QApplication::translate("GamePage", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_A_2->setText(QApplication::translate("GamePage", "\345\217\246\345\255\230\344\270\272(&A)", Q_NULLPTR));
        actionfind_F->setText(QApplication::translate("GamePage", "find(&F)", Q_NULLPTR));
        cache->setText(QString());
        pushButton->setText(QString());
        ProcessStatus->setText(QApplication::translate("GamePage", "\350\277\233\350\241\214\346\210\230\346\226\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = myTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GamePage", "\345\270\235\345\233\275\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = myTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GamePage", "\351\242\206\345\234\237\351\235\242\347\247\257\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = myTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GamePage", "\345\206\233\351\230\237\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = myTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GamePage", "\345\256\210\345\244\207\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = myTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GamePage", "\345\233\275\346\260\221\345\271\270\347\246\217\345\272\246\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = enemyTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("GamePage", "\345\270\235\345\233\275\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = enemyTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("GamePage", "\351\242\206\345\234\237\351\235\242\347\247\257\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = enemyTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("GamePage", "\345\206\233\351\230\237\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = enemyTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("GamePage", "\345\256\210\345\244\207\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = enemyTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("GamePage", "\345\233\275\346\260\221\345\271\270\347\246\217\345\272\246\357\274\232", Q_NULLPTR));
        menu_help->setTitle(QApplication::translate("GamePage", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
        menu_menu->setTitle(QApplication::translate("GamePage", "\350\217\234\345\215\225(&M)", Q_NULLPTR));
        menu_record->setTitle(QApplication::translate("GamePage", "\350\256\260\345\275\225(&R)", Q_NULLPTR));
        menu_S->setTitle(QApplication::translate("GamePage", "\345\255\230\346\241\243(&S)", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("GamePage", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GamePage: public Ui_GamePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
