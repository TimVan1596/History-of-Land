/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gameover
{
public:
    QPushButton *pushButton;
    QLabel *winLabel;
    QLabel *defeatLabel;

    void setupUi(QDialog *gameover)
    {
        if (gameover->objectName().isEmpty())
            gameover->setObjectName(QStringLiteral("gameover"));
        gameover->resize(413, 312);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        gameover->setFont(font);
        pushButton = new QPushButton(gameover);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 230, 281, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(66, 133, 244); \n"
"border-radius: 8px; \n"
"color:rgb(255, 255, 255); \n"
"} \n"
"\n"
"QPushButton:hover \n"
"{ \n"
"background-color:rgb(42,86,198); \n"
"}"));
        pushButton->setIconSize(QSize(155, 50));
        pushButton->setFlat(true);
        winLabel = new QLabel(gameover);
        winLabel->setObjectName(QStringLiteral("winLabel"));
        winLabel->setGeometry(QRect(0, -40, 401, 291));
        defeatLabel = new QLabel(gameover);
        defeatLabel->setObjectName(QStringLiteral("defeatLabel"));
        defeatLabel->setGeometry(QRect(-40, -60, 461, 281));

        retranslateUi(gameover);

        QMetaObject::connectSlotsByName(gameover);
    } // setupUi

    void retranslateUi(QDialog *gameover)
    {
        gameover->setWindowTitle(QApplication::translate("gameover", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gameover", "\347\273\247  \347\273\255  \346\270\270  \346\210\217", Q_NULLPTR));
        winLabel->setText(QApplication::translate("gameover", "<html><head/><body><p><img src=\":/gpicon/images/winpage/victory.png\"/></p></body></html>", Q_NULLPTR));
        defeatLabel->setText(QApplication::translate("gameover", "<html><head/><body><p><img src=\":/gpicon/images/winpage/defeat.png\"/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gameover: public Ui_gameover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
