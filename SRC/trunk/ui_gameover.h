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
    QLabel *label;

    void setupUi(QDialog *gameover)
    {
        if (gameover->objectName().isEmpty())
            gameover->setObjectName(QStringLiteral("gameover"));
        gameover->resize(399, 350);
        pushButton = new QPushButton(gameover);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 270, 281, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/gpicon/images/winpage/\347\273\247\347\273\255\346\270\270\346\210\217.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(155, 50));
        pushButton->setFlat(true);
        label = new QLabel(gameover);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 391, 271));

        retranslateUi(gameover);

        QMetaObject::connectSlotsByName(gameover);
    } // setupUi

    void retranslateUi(QDialog *gameover)
    {
        gameover->setWindowTitle(QApplication::translate("gameover", "Dialog", Q_NULLPTR));
        pushButton->setText(QString());
        label->setText(QApplication::translate("gameover", "<html><head/><body><p><img src=\":/gpicon/images/winpage/\345\244\261\350\264\245.png\"/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gameover: public Ui_gameover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
