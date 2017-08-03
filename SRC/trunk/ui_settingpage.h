/********************************************************************************
** Form generated from reading UI file 'settingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGPAGE_H
#define UI_SETTINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingPage
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *MainTitle;
    QPushButton *customLand;
    QPushButton *About;
    QPushButton *Quit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SettingPage)
    {
        if (SettingPage->objectName().isEmpty())
            SettingPage->setObjectName(QStringLiteral("SettingPage"));
        SettingPage->resize(510, 507);
        centralwidget = new QWidget(SettingPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 10, 391, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainTitle = new QLabel(verticalLayoutWidget);
        MainTitle->setObjectName(QStringLiteral("MainTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(MainTitle->sizePolicy().hasHeightForWidth());
        MainTitle->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(MainTitle, 0, Qt::AlignHCenter);

        customLand = new QPushButton(verticalLayoutWidget);
        customLand->setObjectName(QStringLiteral("customLand"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(customLand->sizePolicy().hasHeightForWidth());
        customLand->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        customLand->setFont(font);
        customLand->setStyleSheet(QLatin1String("QPushButton {\n"
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

        verticalLayout->addWidget(customLand);

        About = new QPushButton(verticalLayoutWidget);
        About->setObjectName(QStringLiteral("About"));
        sizePolicy1.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy1);
        About->setFont(font);
        About->setStyleSheet(QLatin1String("QPushButton {\n"
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

        verticalLayout->addWidget(About);

        Quit = new QPushButton(verticalLayoutWidget);
        Quit->setObjectName(QStringLiteral("Quit"));
        sizePolicy1.setHeightForWidth(Quit->sizePolicy().hasHeightForWidth());
        Quit->setSizePolicy(sizePolicy1);
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

        verticalLayout->addWidget(Quit);

        SettingPage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SettingPage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SettingPage->setStatusBar(statusbar);

        retranslateUi(SettingPage);

        QMetaObject::connectSlotsByName(SettingPage);
    } // setupUi

    void retranslateUi(QMainWindow *SettingPage)
    {
        SettingPage->setWindowTitle(QApplication::translate("SettingPage", "MainWindow", Q_NULLPTR));
        MainTitle->setText(QApplication::translate("SettingPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ad0400;\">History of Land</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#ad0400;\">\345\215\203\345\217\244\346\261\237\345\261\261</span></p></body></html>", Q_NULLPTR));
        customLand->setText(QApplication::translate("SettingPage", "\350\207\252\345\256\232\344\271\211\350\213\261\351\233\204\345\261\236\346\200\247", Q_NULLPTR));
        About->setText(QApplication::translate("SettingPage", "\345\205\263\344\272\216\346\270\270\346\210\217", Q_NULLPTR));
        Quit->setText(QApplication::translate("SettingPage", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingPage: public Ui_SettingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGE_H
