/********************************************************************************
** Form generated from reading UI file 'gamewin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWIN_H
#define UI_GAMEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameWin
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *GameWin)
    {
        if (GameWin->objectName().isEmpty())
            GameWin->setObjectName(QStringLiteral("GameWin"));
        GameWin->resize(320, 240);
        label = new QLabel(GameWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 321, 181));
        pushButton = new QPushButton(GameWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 190, 221, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/gpicon/images/winpage/\347\273\247\347\273\255\346\270\270\346\210\217.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(155, 50));
        pushButton->setFlat(true);

        retranslateUi(GameWin);

        QMetaObject::connectSlotsByName(GameWin);
    } // setupUi

    void retranslateUi(QDialog *GameWin)
    {
        GameWin->setWindowTitle(QApplication::translate("GameWin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GameWin", "<html><head/><body><p>123<img src=\":/gpicon/images/winpage/\350\203\234\345\210\251.png\"/></p></body></html>", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWin: public Ui_GameWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWIN_H
