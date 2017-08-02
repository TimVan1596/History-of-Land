/********************************************************************************
** Form generated from reading UI file 'gamerecord.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMERECORD_H
#define UI_GAMERECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameRecord
{
public:
    QLabel *OverPic;
    QLabel *WinPic;
    QLabel *label;
    QPushButton *accept;
    QLineEdit *RounCountdEdit;
    QLabel *Happylabel;
    QLabel *Happylabel_2;

    void setupUi(QDialog *GameRecord)
    {
        if (GameRecord->objectName().isEmpty())
            GameRecord->setObjectName(QStringLiteral("GameRecord"));
        GameRecord->resize(430, 493);
        OverPic = new QLabel(GameRecord);
        OverPic->setObjectName(QStringLiteral("OverPic"));
        OverPic->setGeometry(QRect(20, -10, 411, 211));
        WinPic = new QLabel(GameRecord);
        WinPic->setObjectName(QStringLiteral("WinPic"));
        WinPic->setGeometry(QRect(80, -10, 281, 241));
        label = new QLabel(GameRecord);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 210, 131, 61));
        accept = new QPushButton(GameRecord);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setGeometry(QRect(120, 430, 181, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        accept->setFont(font);
        accept->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(66, 133, 244); \n"
"border-radius: 8px; \n"
"color:rgb(255, 255, 255); \n"
"} \n"
"\n"
"QPushButton:hover \n"
"{ \n"
"background-color:rgb(42,86,198); \n"
"\n"
"}\n"
""));
        RounCountdEdit = new QLineEdit(GameRecord);
        RounCountdEdit->setObjectName(QStringLiteral("RounCountdEdit"));
        RounCountdEdit->setGeometry(QRect(150, 290, 111, 31));
        Happylabel = new QLabel(GameRecord);
        Happylabel->setObjectName(QStringLiteral("Happylabel"));
        Happylabel->setGeometry(QRect(20, 300, 171, 16));
        Happylabel->setFrameShape(QFrame::NoFrame);
        Happylabel_2 = new QLabel(GameRecord);
        Happylabel_2->setObjectName(QStringLiteral("Happylabel_2"));
        Happylabel_2->setGeometry(QRect(320, 300, 101, 16));
        Happylabel_2->setFrameShape(QFrame::NoFrame);

        retranslateUi(GameRecord);

        QMetaObject::connectSlotsByName(GameRecord);
    } // setupUi

    void retranslateUi(QDialog *GameRecord)
    {
        GameRecord->setWindowTitle(QApplication::translate("GameRecord", "Dialog", Q_NULLPTR));
        OverPic->setText(QApplication::translate("GameRecord", "<html><head/><body><p><img src=\":/gpicon/images/winpage/\345\244\261\350\264\245.png\"/></p></body></html>", Q_NULLPTR));
        WinPic->setText(QApplication::translate("GameRecord", "<html><head/><body><p><img src=\":/gpicon/images/winpage/\350\203\234\345\210\251.png\"/></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("GameRecord", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#000000;\">\346\210\230\347\273\251\347\273\237\350\256\241</span></p></body></html>", Q_NULLPTR));
        accept->setText(QApplication::translate("GameRecord", "\347\241\256\345\256\232", Q_NULLPTR));
        Happylabel->setText(QApplication::translate("GameRecord", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\346\202\250\344\270\200\345\205\261\345\235\232\346\214\201\344\272\206</span></p><p><br/></p></body></html>", Q_NULLPTR));
        Happylabel_2->setText(QApplication::translate("GameRecord", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\344\270\252\345\233\236\345\220\210\343\200\202</span></p><p><br/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameRecord: public Ui_GameRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMERECORD_H
