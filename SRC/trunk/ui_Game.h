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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *MyHLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QLabel *my_TTY_3;
    QLabel *my_TTY;
    QLabel *my_MIT;
    QLabel *my_DFS;
    QLabel *my_Happy;
    QLabel *ProcessStatus;
    QTextEdit *History;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *MyHLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *my_TTY_4;
    QLabel *my_TTY_2;
    QLabel *my_MIT_2;
    QLabel *my_DFS_2;
    QLabel *my_Happy_2;
    QListWidget *listWidget_2;
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
        GamePage->resize(740, 542);
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
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(640, 340, 115, 124));
        MyHLayout = new QHBoxLayout(horizontalLayoutWidget);
        MyHLayout->setObjectName(QStringLiteral("MyHLayout"));
        MyHLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(horizontalLayoutWidget);
        QBrush brush(QColor(170, 85, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font;
        font.setPointSize(20);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setBackground(brush);
        QFont font1;
        font1.setPointSize(18);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font1);
        QFont font2;
        font2.setPointSize(13);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font2);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font2);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFont(font2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMaximumSize(QSize(130, 16777215));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setFrameShadow(QFrame::Sunken);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setWordWrap(false);
        listWidget->setSortingEnabled(false);

        MyHLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        my_TTY_3 = new QLabel(horizontalLayoutWidget);
        my_TTY_3->setObjectName(QStringLiteral("my_TTY_3"));
        my_TTY_3->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(my_TTY_3);

        my_TTY = new QLabel(horizontalLayoutWidget);
        my_TTY->setObjectName(QStringLiteral("my_TTY"));

        verticalLayout->addWidget(my_TTY);

        my_MIT = new QLabel(horizontalLayoutWidget);
        my_MIT->setObjectName(QStringLiteral("my_MIT"));

        verticalLayout->addWidget(my_MIT);

        my_DFS = new QLabel(horizontalLayoutWidget);
        my_DFS->setObjectName(QStringLiteral("my_DFS"));

        verticalLayout->addWidget(my_DFS);

        my_Happy = new QLabel(horizontalLayoutWidget);
        my_Happy->setObjectName(QStringLiteral("my_Happy"));

        verticalLayout->addWidget(my_Happy);


        MyHLayout->addLayout(verticalLayout);

        ProcessStatus = new QLabel(centralwidget);
        ProcessStatus->setObjectName(QStringLiteral("ProcessStatus"));
        ProcessStatus->setGeometry(QRect(310, 170, 81, 41));
        History = new QTextEdit(centralwidget);
        History->setObjectName(QStringLiteral("History"));
        History->setGeometry(QRect(80, 320, 541, 131));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(650, 390, 41, 31));
        MyHLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        MyHLayout_2->setObjectName(QStringLiteral("MyHLayout_2"));
        MyHLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        my_TTY_4 = new QLabel(horizontalLayoutWidget_2);
        my_TTY_4->setObjectName(QStringLiteral("my_TTY_4"));
        my_TTY_4->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(my_TTY_4);

        my_TTY_2 = new QLabel(horizontalLayoutWidget_2);
        my_TTY_2->setObjectName(QStringLiteral("my_TTY_2"));

        verticalLayout_2->addWidget(my_TTY_2);

        my_MIT_2 = new QLabel(horizontalLayoutWidget_2);
        my_MIT_2->setObjectName(QStringLiteral("my_MIT_2"));

        verticalLayout_2->addWidget(my_MIT_2);

        my_DFS_2 = new QLabel(horizontalLayoutWidget_2);
        my_DFS_2->setObjectName(QStringLiteral("my_DFS_2"));

        verticalLayout_2->addWidget(my_DFS_2);

        my_Happy_2 = new QLabel(horizontalLayoutWidget_2);
        my_Happy_2->setObjectName(QStringLiteral("my_Happy_2"));

        verticalLayout_2->addWidget(my_Happy_2);


        MyHLayout_2->addLayout(verticalLayout_2);

        listWidget_2 = new QListWidget(horizontalLayoutWidget_2);
        QBrush brush1(QColor(170, 85, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem5->setFont(font);
        __qlistwidgetitem5->setBackground(brush1);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem6->setFont(font1);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem7->setFont(font2);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem8->setFont(font2);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem9->setFont(font2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setMaximumSize(QSize(130, 16777215));
        listWidget_2->setFrameShape(QFrame::NoFrame);
        listWidget_2->setFrameShadow(QFrame::Sunken);
        listWidget_2->setProperty("isWrapping", QVariant(false));
        listWidget_2->setWordWrap(false);
        listWidget_2->setSortingEnabled(false);

        MyHLayout_2->addWidget(listWidget_2);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(710, 380, 16, 16));
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
        cache->raise();
        pushButton->raise();
        horizontalLayoutWidget->raise();
        ProcessStatus->raise();
        History->raise();
        horizontalLayoutWidget_2->raise();
        textEdit->raise();
        listWidget->raise();
        myTableWidget->raise();
        enemyTableWidget->raise();
        menubar = new QMenuBar(GamePage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 740, 23));
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

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("GamePage", "\345\244\247\347\247\246\345\270\235\345\233\275", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("GamePage", "\351\242\206\345\234\237\351\235\242\347\247\257\357\274\232", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("GamePage", "\346\210\230\346\226\227\345\212\233\357\274\232", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("GamePage", "\351\230\262\345\276\241\345\212\233\357\274\232", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("GamePage", "\345\271\270\347\246\217\345\272\246\357\274\232", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        my_TTY_3->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\"><br/></p><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        my_TTY->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">100</span></p></body></html>", Q_NULLPTR));
        my_MIT->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\">10</p></body></html>", Q_NULLPTR));
        my_DFS->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\">0</p></body></html>", Q_NULLPTR));
        my_Happy->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\">50</p></body></html>", Q_NULLPTR));
        ProcessStatus->setText(QApplication::translate("GamePage", "\350\277\233\350\241\214\346\210\230\346\226\227", Q_NULLPTR));
        my_TTY_4->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\"><br/></p><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        my_TTY_2->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">100</span></p></body></html>", Q_NULLPTR));
        my_MIT_2->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\">20</p></body></html>", Q_NULLPTR));
        my_DFS_2->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\">10</p></body></html>", Q_NULLPTR));
        my_Happy_2->setText(QApplication::translate("GamePage", "<html><head/><body><p align=\"center\">60</p></body></html>", Q_NULLPTR));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(0);
        ___qlistwidgetitem5->setText(QApplication::translate("GamePage", "\344\272\232\350\277\260\345\270\235\345\233\275", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_2->item(1);
        ___qlistwidgetitem6->setText(QApplication::translate("GamePage", "\357\274\232\351\242\206\345\234\237\351\235\242\347\247\257", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_2->item(2);
        ___qlistwidgetitem7->setText(QApplication::translate("GamePage", "\357\274\232\346\210\230\346\226\227\345\212\233", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_2->item(3);
        ___qlistwidgetitem8->setText(QApplication::translate("GamePage", "\357\274\232\351\230\262\345\276\241\345\212\233", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_2->item(4);
        ___qlistwidgetitem9->setText(QApplication::translate("GamePage", "\357\274\232\345\271\270\347\246\217\345\272\246", Q_NULLPTR));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem = myTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GamePage", "\350\213\261\351\233\204\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = myTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GamePage", "\347\224\237\345\221\275\345\200\274\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = myTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GamePage", "\346\224\273\345\207\273\345\212\233\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = myTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GamePage", "\346\212\244\347\224\262\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = myTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GamePage", "\351\255\224\346\263\225\345\200\274\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = enemyTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("GamePage", "\350\213\261\351\233\204\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = enemyTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("GamePage", "\347\224\237\345\221\275\345\200\274\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = enemyTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("GamePage", "\346\224\273\345\207\273\345\212\233\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = enemyTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("GamePage", "\346\212\244\347\224\262\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = enemyTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("GamePage", "\351\255\224\346\263\225\345\200\274\357\274\232", Q_NULLPTR));
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
