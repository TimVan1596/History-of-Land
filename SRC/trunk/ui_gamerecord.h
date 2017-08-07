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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameRecord
{
public:
    QLabel *OverPic;
    QLabel *WinPic;
    QLabel *label;
    QPushButton *accept;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *RoundLayout;
    QLabel *RoundLabe1;
    QLineEdit *RoundCNTEdit;
    QLabel *RoundLabe2;
    QHBoxLayout *SumATKLayout;
    QLabel *SumATK1;
    QLineEdit *SumATKEdit;
    QLabel *SumATK2;
    QHBoxLayout *SumHurtLayout;
    QLabel *SumHurt1;
    QLineEdit *SumHurtEdit;
    QLabel *SumHurt2;

    void setupUi(QDialog *GameRecord)
    {
        if (GameRecord->objectName().isEmpty())
            GameRecord->setObjectName(QStringLiteral("GameRecord"));
        GameRecord->resize(430, 605);
        OverPic = new QLabel(GameRecord);
        OverPic->setObjectName(QStringLiteral("OverPic"));
        OverPic->setGeometry(QRect(-30, -70, 461, 321));
        WinPic = new QLabel(GameRecord);
        WinPic->setObjectName(QStringLiteral("WinPic"));
        WinPic->setGeometry(QRect(10, -10, 411, 241));
        label = new QLabel(GameRecord);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 220, 131, 61));
        accept = new QPushButton(GameRecord);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setGeometry(QRect(120, 530, 181, 51));
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
        verticalLayoutWidget = new QWidget(GameRecord);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-30, 280, 488, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RoundLayout = new QHBoxLayout();
        RoundLayout->setObjectName(QStringLiteral("RoundLayout"));
        RoundLabe1 = new QLabel(verticalLayoutWidget);
        RoundLabe1->setObjectName(QStringLiteral("RoundLabe1"));
        RoundLabe1->setFrameShape(QFrame::NoFrame);

        RoundLayout->addWidget(RoundLabe1);

        RoundCNTEdit = new QLineEdit(verticalLayoutWidget);
        RoundCNTEdit->setObjectName(QStringLiteral("RoundCNTEdit"));
        RoundCNTEdit->setMinimumSize(QSize(0, 40));
        RoundCNTEdit->setMaximumSize(QSize(60, 16777215));

        RoundLayout->addWidget(RoundCNTEdit);

        RoundLabe2 = new QLabel(verticalLayoutWidget);
        RoundLabe2->setObjectName(QStringLiteral("RoundLabe2"));
        RoundLabe2->setFrameShape(QFrame::NoFrame);

        RoundLayout->addWidget(RoundLabe2);


        verticalLayout->addLayout(RoundLayout);

        SumATKLayout = new QHBoxLayout();
        SumATKLayout->setObjectName(QStringLiteral("SumATKLayout"));
        SumATK1 = new QLabel(verticalLayoutWidget);
        SumATK1->setObjectName(QStringLiteral("SumATK1"));
        SumATK1->setFrameShape(QFrame::NoFrame);

        SumATKLayout->addWidget(SumATK1);

        SumATKEdit = new QLineEdit(verticalLayoutWidget);
        SumATKEdit->setObjectName(QStringLiteral("SumATKEdit"));
        SumATKEdit->setMinimumSize(QSize(0, 40));
        SumATKEdit->setMaximumSize(QSize(100, 16777215));

        SumATKLayout->addWidget(SumATKEdit);

        SumATK2 = new QLabel(verticalLayoutWidget);
        SumATK2->setObjectName(QStringLiteral("SumATK2"));
        SumATK2->setFrameShape(QFrame::NoFrame);

        SumATKLayout->addWidget(SumATK2);


        verticalLayout->addLayout(SumATKLayout);

        SumHurtLayout = new QHBoxLayout();
        SumHurtLayout->setObjectName(QStringLiteral("SumHurtLayout"));
        SumHurt1 = new QLabel(verticalLayoutWidget);
        SumHurt1->setObjectName(QStringLiteral("SumHurt1"));
        SumHurt1->setFrameShape(QFrame::NoFrame);

        SumHurtLayout->addWidget(SumHurt1);

        SumHurtEdit = new QLineEdit(verticalLayoutWidget);
        SumHurtEdit->setObjectName(QStringLiteral("SumHurtEdit"));
        SumHurtEdit->setMinimumSize(QSize(0, 40));
        SumHurtEdit->setMaximumSize(QSize(100, 40));

        SumHurtLayout->addWidget(SumHurtEdit);

        SumHurt2 = new QLabel(verticalLayoutWidget);
        SumHurt2->setObjectName(QStringLiteral("SumHurt2"));
        SumHurt2->setFrameShape(QFrame::NoFrame);

        SumHurtLayout->addWidget(SumHurt2);


        verticalLayout->addLayout(SumHurtLayout);


        retranslateUi(GameRecord);

        QMetaObject::connectSlotsByName(GameRecord);
    } // setupUi

    void retranslateUi(QDialog *GameRecord)
    {
        GameRecord->setWindowTitle(QApplication::translate("GameRecord", "Dialog", Q_NULLPTR));
        OverPic->setText(QApplication::translate("GameRecord", "<html><head/><body><p><img src=\":/gpicon/images/winpage/defeat.png\"/></p></body></html>", Q_NULLPTR));
        WinPic->setText(QApplication::translate("GameRecord", "<html><head/><body><p><img src=\":/gpicon/images/winpage/victory.png\"/></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("GameRecord", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#b30002;\">\346\210\230\347\273\251\347\273\237\350\256\241</span></p></body></html>", Q_NULLPTR));
        accept->setText(QApplication::translate("GameRecord", "\347\241\256\345\256\232", Q_NULLPTR));
        RoundLabe1->setText(QApplication::translate("GameRecord", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600; color:#234e86;\">\346\202\250\344\270\200\345\205\261\345\235\232\346\214\201\344\272\206</span></p></body></html>", Q_NULLPTR));
        RoundLabe2->setText(QApplication::translate("GameRecord", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#234e86;\">\344\270\252\345\233\236\345\220\210\343\200\202</span></p></body></html>", Q_NULLPTR));
        SumATK1->setText(QApplication::translate("GameRecord", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600; color:#234e86;\">\345\257\271\346\225\214\345\206\233\351\200\240\346\210\220\344\272\206</span></p></body></html>", Q_NULLPTR));
        SumATK2->setText(QApplication::translate("GameRecord", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#234e86;\">\347\232\204\344\274\244\345\256\263\343\200\202</span></p></body></html>", Q_NULLPTR));
        SumHurt1->setText(QApplication::translate("GameRecord", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:600; color:#234e86;\">\346\211\277\345\217\227\344\272\206\346\235\245\350\207\252\346\225\214\345\206\233</span></p></body></html>", Q_NULLPTR));
        SumHurt2->setText(QApplication::translate("GameRecord", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#234e86;\">\347\232\204\346\200\273\344\274\244\345\256\263\343\200\202</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameRecord: public Ui_GameRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMERECORD_H
