/********************************************************************************
** Form generated from reading UI file 'customkingdom_add.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMKINGDOM_ADD_H
#define UI_CUSTOMKINGDOM_ADD_H

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

class Ui_customKingdom_add
{
public:
    QPushButton *cancel;
    QLabel *Namelabel;
    QLineEdit *NameEdit;
    QPushButton *accept;
    QLabel *MITlabel;
    QLineEdit *MITEdit;
    QLabel *DFSlabel;
    QLineEdit *DFSEdit;
    QLabel *Happylabel;
    QLineEdit *HappyEdit;
    QLabel *label;

    void setupUi(QDialog *customKingdom_add)
    {
        if (customKingdom_add->objectName().isEmpty())
            customKingdom_add->setObjectName(QStringLiteral("customKingdom_add"));
        customKingdom_add->resize(734, 348);
        cancel = new QPushButton(customKingdom_add);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(630, 300, 81, 31));
        cancel->setStyleSheet(QLatin1String("QPushButton {\n"
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
        Namelabel = new QLabel(customKingdom_add);
        Namelabel->setObjectName(QStringLiteral("Namelabel"));
        Namelabel->setGeometry(QRect(210, 10, 101, 16));
        Namelabel->setFrameShape(QFrame::NoFrame);
        NameEdit = new QLineEdit(customKingdom_add);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));
        NameEdit->setGeometry(QRect(150, 40, 231, 31));
        NameEdit->setEchoMode(QLineEdit::Normal);
        accept = new QPushButton(customKingdom_add);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setGeometry(QRect(200, 260, 181, 51));
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
        MITlabel = new QLabel(customKingdom_add);
        MITlabel->setObjectName(QStringLiteral("MITlabel"));
        MITlabel->setGeometry(QRect(200, 90, 141, 16));
        MITlabel->setFrameShape(QFrame::NoFrame);
        MITEdit = new QLineEdit(customKingdom_add);
        MITEdit->setObjectName(QStringLiteral("MITEdit"));
        MITEdit->setGeometry(QRect(150, 120, 231, 31));
        MITEdit->setEchoMode(QLineEdit::Normal);
        DFSlabel = new QLabel(customKingdom_add);
        DFSlabel->setObjectName(QStringLiteral("DFSlabel"));
        DFSlabel->setGeometry(QRect(20, 180, 141, 16));
        DFSlabel->setFrameShape(QFrame::NoFrame);
        DFSEdit = new QLineEdit(customKingdom_add);
        DFSEdit->setObjectName(QStringLiteral("DFSEdit"));
        DFSEdit->setGeometry(QRect(20, 200, 231, 31));
        DFSEdit->setEchoMode(QLineEdit::Normal);
        Happylabel = new QLabel(customKingdom_add);
        Happylabel->setObjectName(QStringLiteral("Happylabel"));
        Happylabel->setGeometry(QRect(330, 180, 171, 16));
        Happylabel->setFrameShape(QFrame::NoFrame);
        HappyEdit = new QLineEdit(customKingdom_add);
        HappyEdit->setObjectName(QStringLiteral("HappyEdit"));
        HappyEdit->setGeometry(QRect(330, 200, 231, 31));
        label = new QLabel(customKingdom_add);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 10, 221, 191));

        retranslateUi(customKingdom_add);

        QMetaObject::connectSlotsByName(customKingdom_add);
    } // setupUi

    void retranslateUi(QDialog *customKingdom_add)
    {
        customKingdom_add->setWindowTitle(QApplication::translate("customKingdom_add", "Dialog", Q_NULLPTR));
        cancel->setText(QApplication::translate("customKingdom_add", "\350\277\224\345\233\236", Q_NULLPTR));
        Namelabel->setText(QApplication::translate("customKingdom_add", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\346\226\260\345\270\235\345\233\275\347\232\204\345\233\275\345\217\267</span></p></body></html>", Q_NULLPTR));
        NameEdit->setPlaceholderText(QApplication::translate("customKingdom_add", "\346\263\242\346\226\257\345\270\235\345\233\275 ", Q_NULLPTR));
        accept->setText(QApplication::translate("customKingdom_add", "\347\241\256\345\256\232", Q_NULLPTR));
        MITlabel->setText(QApplication::translate("customKingdom_add", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\345\270\235\345\233\275\347\232\204\345\210\235\345\247\213\346\210\230\346\226\227\345\212\233</span></p></body></html>", Q_NULLPTR));
        MITEdit->setPlaceholderText(QApplication::translate("customKingdom_add", "10 ", Q_NULLPTR));
        DFSlabel->setText(QApplication::translate("customKingdom_add", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\345\270\235\345\233\275\347\232\204\345\210\235\345\247\213\351\230\262\345\276\241\345\212\233</span></p><p><br/></p></body></html>", Q_NULLPTR));
        DFSEdit->setPlaceholderText(QApplication::translate("customKingdom_add", "0", Q_NULLPTR));
        Happylabel->setText(QApplication::translate("customKingdom_add", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\345\270\235\345\233\275\344\272\272\346\260\221\347\232\204\345\210\235\345\247\213\345\271\270\347\246\217\345\272\246</span></p><p><br/></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("customKingdom_add", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">\345\244\251\350\265\213\347\202\271\346\225\260\357\274\23260</span></p><p>\346\257\2171.2\347\202\271\346\225\260 \345\242\236\345\212\240 1 \346\210\230\346\226\227\345\212\233 </p><p>\346\257\2171\347\202\271\346\225\260 \345\242\236\345\212\240 1 \351\230\262\345\276\241\345\212\233</p><p>\346\262\2410.83\347\202\271\346\225\260 \345\242\236\345\212\240 1 \345\271\270\347\246\217\345\272\246</p><p>\346\217\220\347\244\272\357\274\232\346\210\230\346\226\227\345\212\233\345\222\214\351\230\262\345\276\241\345\212\233\345\257\271\346\210\230\344\272\211\347\233\264\346\216\245\345\275\261\345\223\215\345\244\247</p><p>\344\275\206\345\271\270\347\246\217\345\272\246\345\260\206\344\274\232\345\205\263\347\263\273\345\210\260\346\230\257\345\220\246\345\217\257\344\273\245\344\275\277\347\224\250\346\224\277\347\255\226</p><p><br/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customKingdom_add: public Ui_customKingdom_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMKINGDOM_ADD_H
