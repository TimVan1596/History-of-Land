/********************************************************************************
** Form generated from reading UI file 'GameEnd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEEND_H
#define UI_GAMEEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameEnd
{
public:
    QPushButton *pushButton;
    QLabel *winLabel;
    QLabel *defeatLabel;

    void setupUi(QDialog *GameEnd)
    {
        if (GameEnd->objectName().isEmpty())
            GameEnd->setObjectName(QStringLiteral("GameEnd"));
        GameEnd->resize(454, 371);
        pushButton = new QPushButton(GameEnd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 290, 281, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
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
        winLabel = new QLabel(GameEnd);
        winLabel->setObjectName(QStringLiteral("winLabel"));
        winLabel->setGeometry(QRect(40, 20, 401, 291));
        defeatLabel = new QLabel(GameEnd);
        defeatLabel->setObjectName(QStringLiteral("defeatLabel"));
        defeatLabel->setGeometry(QRect(-20, -10, 481, 281));

        retranslateUi(GameEnd);

        QMetaObject::connectSlotsByName(GameEnd);
    } // setupUi

    void retranslateUi(QDialog *GameEnd)
    {
        GameEnd->setWindowTitle(QApplication::translate("GameEnd", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GameEnd", "\347\273\247  \347\273\255  \346\270\270  \346\210\217", Q_NULLPTR));
        winLabel->setText(QApplication::translate("GameEnd", "<html><head/><body><p><img src=\":/gpicon/images/winpage/victory.png\"/></p></body></html>", Q_NULLPTR));
        defeatLabel->setText(QApplication::translate("GameEnd", "<html><head/><body><p><img src=\":/gpicon/images/winpage/defeat.png\"/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameEnd: public Ui_GameEnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEEND_H
