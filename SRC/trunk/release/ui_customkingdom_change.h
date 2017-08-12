/********************************************************************************
** Form generated from reading UI file 'customkingdom_change.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMKINGDOM_CHANGE_H
#define UI_CUSTOMKINGDOM_CHANGE_H

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

class Ui_customkingdom_Change
{
public:
    QLabel *label;
    QLabel *Happylabel;
    QLabel *MITlabel;
    QLineEdit *MITEdit;
    QLineEdit *HappyEdit;
    QPushButton *cancel;
    QLineEdit *NameEdit;
    QLabel *DFSlabel;
    QPushButton *accept;
    QLineEdit *DFSEdit;
    QLabel *Namelabel;

    void setupUi(QDialog *customkingdom_Change)
    {
        if (customkingdom_Change->objectName().isEmpty())
            customkingdom_Change->setObjectName(QStringLiteral("customkingdom_Change"));
        customkingdom_Change->resize(741, 359);
        label = new QLabel(customkingdom_Change);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 10, 221, 191));
        Happylabel = new QLabel(customkingdom_Change);
        Happylabel->setObjectName(QStringLiteral("Happylabel"));
        Happylabel->setGeometry(QRect(320, 180, 171, 16));
        Happylabel->setFrameShape(QFrame::NoFrame);
        MITlabel = new QLabel(customkingdom_Change);
        MITlabel->setObjectName(QStringLiteral("MITlabel"));
        MITlabel->setGeometry(QRect(190, 90, 141, 16));
        MITlabel->setFrameShape(QFrame::NoFrame);
        MITEdit = new QLineEdit(customkingdom_Change);
        MITEdit->setObjectName(QStringLiteral("MITEdit"));
        MITEdit->setGeometry(QRect(140, 120, 231, 31));
        MITEdit->setEchoMode(QLineEdit::Normal);
        HappyEdit = new QLineEdit(customkingdom_Change);
        HappyEdit->setObjectName(QStringLiteral("HappyEdit"));
        HappyEdit->setGeometry(QRect(320, 200, 231, 31));
        cancel = new QPushButton(customkingdom_Change);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(620, 300, 81, 31));
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
        NameEdit = new QLineEdit(customkingdom_Change);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));
        NameEdit->setGeometry(QRect(140, 40, 231, 31));
        NameEdit->setEchoMode(QLineEdit::Normal);
        DFSlabel = new QLabel(customkingdom_Change);
        DFSlabel->setObjectName(QStringLiteral("DFSlabel"));
        DFSlabel->setGeometry(QRect(10, 180, 141, 16));
        DFSlabel->setFrameShape(QFrame::NoFrame);
        accept = new QPushButton(customkingdom_Change);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setGeometry(QRect(190, 260, 181, 51));
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
        DFSEdit = new QLineEdit(customkingdom_Change);
        DFSEdit->setObjectName(QStringLiteral("DFSEdit"));
        DFSEdit->setGeometry(QRect(10, 200, 231, 31));
        DFSEdit->setEchoMode(QLineEdit::Normal);
        Namelabel = new QLabel(customkingdom_Change);
        Namelabel->setObjectName(QStringLiteral("Namelabel"));
        Namelabel->setGeometry(QRect(190, 10, 151, 20));
        Namelabel->setFrameShape(QFrame::NoFrame);

        retranslateUi(customkingdom_Change);

        QMetaObject::connectSlotsByName(customkingdom_Change);
    } // setupUi

    void retranslateUi(QDialog *customkingdom_Change)
    {
        customkingdom_Change->setWindowTitle(QApplication::translate("customkingdom_Change", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("customkingdom_Change", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">\345\244\251\350\265\213\347\202\271\346\225\260\357\274\23260</span></p><p>\346\257\2171.2\347\202\271\346\225\260 \345\242\236\345\212\240 1 \346\210\230\346\226\227\345\212\233 </p><p>\346\257\2171\347\202\271\346\225\260 \345\242\236\345\212\240 1 \351\230\262\345\276\241\345\212\233</p><p>\346\262\2410.83\347\202\271\346\225\260 \345\242\236\345\212\240 1 \345\271\270\347\246\217\345\272\246</p><p>\346\217\220\347\244\272\357\274\232\346\210\230\346\226\227\345\212\233\345\222\214\351\230\262\345\276\241\345\212\233\345\257\271\346\210\230\344\272\211\347\233\264\346\216\245\345\275\261\345\223\215\345\244\247</p><p>\344\275\206\345\271\270\347\246\217\345\272\246\345\260\206\344\274\232\345\205\263\347\263\273\345\210\260\346\230\257\345\220\246\345\217\257\344\273\245\344\275\277\347\224\250\346\224\277\347\255\226</p><p><br/></p></body></html>", Q_NULLPTR));
        Happylabel->setText(QApplication::translate("customkingdom_Change", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\345\270\235\345\233\275\344\272\272\346\260\221\347\232\204\345\210\235\345\247\213\345\271\270\347\246\217\345\272\246</span></p><p><br/></p></body></html>", Q_NULLPTR));
        MITlabel->setText(QApplication::translate("customkingdom_Change", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\345\270\235\345\233\275\347\232\204\345\210\235\345\247\213\346\210\230\346\226\227\345\212\233</span></p></body></html>", Q_NULLPTR));
        MITEdit->setPlaceholderText(QApplication::translate("customkingdom_Change", "10 ", Q_NULLPTR));
        cancel->setText(QApplication::translate("customkingdom_Change", "\350\277\224\345\233\236", Q_NULLPTR));
        NameEdit->setPlaceholderText(QApplication::translate("customkingdom_Change", "\346\263\242\346\226\257\345\270\235\345\233\275 ", Q_NULLPTR));
        DFSlabel->setText(QApplication::translate("customkingdom_Change", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\345\270\235\345\233\275\347\232\204\345\210\235\345\247\213\351\230\262\345\276\241\345\212\233</span></p><p><br/></p></body></html>", Q_NULLPTR));
        accept->setText(QApplication::translate("customkingdom_Change", "\347\241\256\345\256\232\344\277\256\346\224\271", Q_NULLPTR));
        DFSEdit->setPlaceholderText(QApplication::translate("customkingdom_Change", "0", Q_NULLPTR));
        Namelabel->setText(QApplication::translate("customkingdom_Change", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\344\277\256\346\224\271\345\270\235\345\233\275\347\232\204\345\233\275\345\217\267</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customkingdom_Change: public Ui_customkingdom_Change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMKINGDOM_CHANGE_H
