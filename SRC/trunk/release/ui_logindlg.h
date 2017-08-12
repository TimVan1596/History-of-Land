/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

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

class Ui_LoginDlg
{
public:
    QPushButton *login;
    QPushButton *quit;
    QLabel *Namelabel;
    QLineEdit *NameEdit;
    QLineEdit *PsdEdit;
    QLabel *Psdlabel;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->resize(334, 226);
        login = new QPushButton(LoginDlg);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(20, 180, 101, 31));
        login->setStyleSheet(QLatin1String("QPushButton {\n"
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
        quit = new QPushButton(LoginDlg);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setGeometry(QRect(210, 180, 101, 31));
        quit->setStyleSheet(QLatin1String("QPushButton {\n"
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
        Namelabel = new QLabel(LoginDlg);
        Namelabel->setObjectName(QStringLiteral("Namelabel"));
        Namelabel->setGeometry(QRect(20, 30, 51, 16));
        Namelabel->setFrameShape(QFrame::NoFrame);
        NameEdit = new QLineEdit(LoginDlg);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));
        NameEdit->setGeometry(QRect(20, 50, 133, 20));
        PsdEdit = new QLineEdit(LoginDlg);
        PsdEdit->setObjectName(QStringLiteral("PsdEdit"));
        PsdEdit->setGeometry(QRect(20, 110, 231, 31));
        PsdEdit->setEchoMode(QLineEdit::Password);
        Psdlabel = new QLabel(LoginDlg);
        Psdlabel->setObjectName(QStringLiteral("Psdlabel"));
        Psdlabel->setGeometry(QRect(20, 90, 51, 16));
        Psdlabel->setFrameShape(QFrame::NoFrame);

        retranslateUi(LoginDlg);
        QObject::connect(quit, SIGNAL(clicked()), LoginDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "Dialog", Q_NULLPTR));
        login->setText(QApplication::translate("LoginDlg", "\347\231\273\345\275\225", Q_NULLPTR));
        quit->setText(QApplication::translate("LoginDlg", "\351\200\200\345\207\272", Q_NULLPTR));
        Namelabel->setText(QApplication::translate("LoginDlg", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", Q_NULLPTR));
        NameEdit->setPlaceholderText(QApplication::translate("LoginDlg", "admin", Q_NULLPTR));
        PsdEdit->setPlaceholderText(QApplication::translate("LoginDlg", "123", Q_NULLPTR));
        Psdlabel->setText(QApplication::translate("LoginDlg", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\345\257\206\347\240\201</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
