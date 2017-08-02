/********************************************************************************
** Form generated from reading UI file 'SystemWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMWINDOW_H
#define UI_SYSTEMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *MainTitle;
    QPushButton *ClassicGame;
    QPushButton *BrawlGame;
    QPushButton *freeLgends;
    QHBoxLayout *horizontalLayout;
    QPushButton *Setings;
    QPushButton *Quit;
    QHBoxLayout *hLayout;
    QLabel *Version;
    QLabel *PowerBy;

    void setupUi(QMainWindow *SystemWindow)
    {
        if (SystemWindow->objectName().isEmpty())
            SystemWindow->setObjectName(QStringLiteral("SystemWindow"));
        SystemWindow->resize(1101, 679);
        centralWidget = new QWidget(SystemWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 30, 941, 601));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainTitle = new QLabel(verticalLayoutWidget);
        MainTitle->setObjectName(QStringLiteral("MainTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(MainTitle->sizePolicy().hasHeightForWidth());
        MainTitle->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(MainTitle);

        ClassicGame = new QPushButton(verticalLayoutWidget);
        ClassicGame->setObjectName(QStringLiteral("ClassicGame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(ClassicGame->sizePolicy().hasHeightForWidth());
        ClassicGame->setSizePolicy(sizePolicy1);
        ClassicGame->setMinimumSize(QSize(700, 70));
        ClassicGame->setMaximumSize(QSize(700, 70));
        ClassicGame->setSizeIncrement(QSize(700, 70));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        ClassicGame->setFont(font);
        ClassicGame->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(245,231,211); \n"
"border-radius: 20px; \n"
"color:rgb(0, 0, 0); \n"
"} \n"
"\n"
"QPushButton:hover \n"
"{ \n"
"background-color:rgb(222,176,159); \n"
"color:rgb(185, 40, 35); \n"
"}"));

        verticalLayout->addWidget(ClassicGame, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        BrawlGame = new QPushButton(verticalLayoutWidget);
        BrawlGame->setObjectName(QStringLiteral("BrawlGame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(BrawlGame->sizePolicy().hasHeightForWidth());
        BrawlGame->setSizePolicy(sizePolicy2);
        BrawlGame->setMinimumSize(QSize(700, 70));
        BrawlGame->setMaximumSize(QSize(700, 70));
        BrawlGame->setSizeIncrement(QSize(700, 70));
        BrawlGame->setFont(font);
        BrawlGame->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(245,231,211); \n"
"border-radius: 20px; \n"
"color:rgb(0, 0, 0); \n"
"} \n"
"\n"
"QPushButton:hover \n"
"{ \n"
"background-color:rgb(222,176,159); \n"
"color:rgb(185, 40, 35); \n"
"}"));

        verticalLayout->addWidget(BrawlGame, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        freeLgends = new QPushButton(verticalLayoutWidget);
        freeLgends->setObjectName(QStringLiteral("freeLgends"));
        sizePolicy2.setHeightForWidth(freeLgends->sizePolicy().hasHeightForWidth());
        freeLgends->setSizePolicy(sizePolicy2);
        freeLgends->setMinimumSize(QSize(700, 70));
        freeLgends->setMaximumSize(QSize(700, 70));
        freeLgends->setSizeIncrement(QSize(700, 70));
        freeLgends->setFont(font);
        freeLgends->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(245,231,211); \n"
"border-radius: 20px; \n"
"color:rgb(0, 0, 0); \n"
"} \n"
"\n"
"QPushButton:hover \n"
"{ \n"
"background-color:rgb(222,176,159); \n"
"color:rgb(185, 40, 35); \n"
"}"));

        verticalLayout->addWidget(freeLgends, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 10, -1, 10);
        Setings = new QPushButton(verticalLayoutWidget);
        Setings->setObjectName(QStringLiteral("Setings"));
        sizePolicy1.setHeightForWidth(Setings->sizePolicy().hasHeightForWidth());
        Setings->setSizePolicy(sizePolicy1);
        Setings->setMinimumSize(QSize(400, 60));
        Setings->setMaximumSize(QSize(400, 16777215));
        Setings->setFont(font);
        Setings->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(245,231,211); \n"
"border-radius: 20px; \n"
"color:rgb(0, 0, 0); \n"
"} \n"
"\n"
"QPushButton:hover \n"
"{ \n"
"background-color:rgb(222,176,159); \n"
"color:rgb(185, 40, 35); \n"
"}"));

        horizontalLayout->addWidget(Setings);

        Quit = new QPushButton(verticalLayoutWidget);
        Quit->setObjectName(QStringLiteral("Quit"));
        sizePolicy1.setHeightForWidth(Quit->sizePolicy().hasHeightForWidth());
        Quit->setSizePolicy(sizePolicy1);
        Quit->setMinimumSize(QSize(400, 60));
        Quit->setMaximumSize(QSize(400, 16777215));
        Quit->setFont(font);
        Quit->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(245,231,211); \n"
"border-radius: 20px; \n"
"color:rgb(0, 0, 0); \n"
"} \n"
"\n"
"QPushButton:hover \n"
"{ \n"
"background-color:rgb(222,176,159); \n"
"color:rgb(185, 40, 35); \n"
"}"));

        horizontalLayout->addWidget(Quit);


        verticalLayout->addLayout(horizontalLayout);

        hLayout = new QHBoxLayout();
        hLayout->setSpacing(6);
        hLayout->setObjectName(QStringLiteral("hLayout"));
        Version = new QLabel(verticalLayoutWidget);
        Version->setObjectName(QStringLiteral("Version"));
        Version->setMinimumSize(QSize(0, 30));

        hLayout->addWidget(Version);

        PowerBy = new QLabel(verticalLayoutWidget);
        PowerBy->setObjectName(QStringLiteral("PowerBy"));
        PowerBy->setMinimumSize(QSize(0, 30));

        hLayout->addWidget(PowerBy);


        verticalLayout->addLayout(hLayout);

        SystemWindow->setCentralWidget(centralWidget);

        retranslateUi(SystemWindow);

        QMetaObject::connectSlotsByName(SystemWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SystemWindow)
    {
        SystemWindow->setWindowTitle(QApplication::translate("SystemWindow", "MainPage", Q_NULLPTR));
        MainTitle->setText(QApplication::translate("SystemWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ad0400;\">Age of Empires</span></p><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ad0400;\">\345\270\235\345\233\275\346\227\266\344\273\243</span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#081ead;\">\347\211\271\345\210\253\347\211\210-\350\213\261\351\233\204\350\201\224\347\233\237</span></p></body></html>", Q_NULLPTR));
        ClassicGame->setText(QApplication::translate("SystemWindow", "\347\273\217\345\205\270\346\250\241\345\274\217", Q_NULLPTR));
        BrawlGame->setText(QApplication::translate("SystemWindow", "\345\244\247\344\271\261\346\226\227\346\250\241\345\274\217", Q_NULLPTR));
        freeLgends->setText(QApplication::translate("SystemWindow", "\346\237\245\347\234\213\346\234\254\345\221\250\345\205\215\350\264\271\350\213\261\351\233\204", Q_NULLPTR));
        Setings->setText(QApplication::translate("SystemWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        Quit->setText(QApplication::translate("SystemWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        Version->setText(QApplication::translate("SystemWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">V 0.2.2</span></p></body></html>", Q_NULLPTR));
        PowerBy->setText(QApplication::translate("SystemWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600;\">PowerBy TimVan</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SystemWindow: public Ui_SystemWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMWINDOW_H
