/********************************************************************************
** Form generated from reading UI file 'customkingdom_find.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMKINGDOM_FIND_H
#define UI_CUSTOMKINGDOM_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customkingdom_find
{
public:
    QLineEdit *FindEdit;
    QPushButton *cancel;
    QPushButton *accept;
    QLabel *DFSlabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *DFSlabel_2;
    QLineEdit *nameEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *DFSlabel_3;
    QLineEdit *DFSEdit;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *DFSlabel_4;
    QLineEdit *HappyEdit;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *DFSlabel_5;
    QLineEdit *MITEdit;

    void setupUi(QDialog *customkingdom_find)
    {
        if (customkingdom_find->objectName().isEmpty())
            customkingdom_find->setObjectName(QStringLiteral("customkingdom_find"));
        customkingdom_find->resize(436, 452);
        FindEdit = new QLineEdit(customkingdom_find);
        FindEdit->setObjectName(QStringLiteral("FindEdit"));
        FindEdit->setGeometry(QRect(30, 50, 231, 41));
        FindEdit->setEchoMode(QLineEdit::Normal);
        cancel = new QPushButton(customkingdom_find);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(180, 410, 81, 31));
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
        accept = new QPushButton(customkingdom_find);
        accept->setObjectName(QStringLiteral("accept"));
        accept->setGeometry(QRect(30, 110, 181, 51));
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
        DFSlabel = new QLabel(customkingdom_find);
        DFSlabel->setObjectName(QStringLiteral("DFSlabel"));
        DFSlabel->setGeometry(QRect(30, 20, 181, 16));
        DFSlabel->setFrameShape(QFrame::NoFrame);
        verticalLayoutWidget = new QWidget(customkingdom_find);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 190, 191, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        DFSlabel_2 = new QLabel(verticalLayoutWidget);
        DFSlabel_2->setObjectName(QStringLiteral("DFSlabel_2"));
        DFSlabel_2->setMinimumSize(QSize(0, 30));
        DFSlabel_2->setMaximumSize(QSize(16777215, 30));
        DFSlabel_2->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(DFSlabel_2);

        nameEdit = new QLineEdit(verticalLayoutWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(nameEdit);

        verticalLayoutWidget_2 = new QWidget(customkingdom_find);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 300, 191, 86));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        DFSlabel_3 = new QLabel(verticalLayoutWidget_2);
        DFSlabel_3->setObjectName(QStringLiteral("DFSlabel_3"));
        DFSlabel_3->setMinimumSize(QSize(0, 20));
        DFSlabel_3->setMaximumSize(QSize(16777215, 20));
        DFSlabel_3->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(DFSlabel_3);

        DFSEdit = new QLineEdit(verticalLayoutWidget_2);
        DFSEdit->setObjectName(QStringLiteral("DFSEdit"));
        DFSEdit->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(DFSEdit);

        verticalLayoutWidget_3 = new QWidget(customkingdom_find);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(230, 300, 191, 86));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        DFSlabel_4 = new QLabel(verticalLayoutWidget_3);
        DFSlabel_4->setObjectName(QStringLiteral("DFSlabel_4"));
        DFSlabel_4->setMinimumSize(QSize(0, 20));
        DFSlabel_4->setMaximumSize(QSize(16777215, 20));
        DFSlabel_4->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(DFSlabel_4);

        HappyEdit = new QLineEdit(verticalLayoutWidget_3);
        HappyEdit->setObjectName(QStringLiteral("HappyEdit"));
        HappyEdit->setMinimumSize(QSize(0, 35));

        verticalLayout_3->addWidget(HappyEdit);

        verticalLayoutWidget_4 = new QWidget(customkingdom_find);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(230, 200, 191, 86));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        DFSlabel_5 = new QLabel(verticalLayoutWidget_4);
        DFSlabel_5->setObjectName(QStringLiteral("DFSlabel_5"));
        DFSlabel_5->setMinimumSize(QSize(0, 20));
        DFSlabel_5->setMaximumSize(QSize(16777215, 20));
        DFSlabel_5->setFrameShape(QFrame::NoFrame);

        verticalLayout_4->addWidget(DFSlabel_5);

        MITEdit = new QLineEdit(verticalLayoutWidget_4);
        MITEdit->setObjectName(QStringLiteral("MITEdit"));
        MITEdit->setMinimumSize(QSize(0, 35));

        verticalLayout_4->addWidget(MITEdit);


        retranslateUi(customkingdom_find);

        QMetaObject::connectSlotsByName(customkingdom_find);
    } // setupUi

    void retranslateUi(QDialog *customkingdom_find)
    {
        customkingdom_find->setWindowTitle(QApplication::translate("customkingdom_find", "Dialog", Q_NULLPTR));
        FindEdit->setPlaceholderText(QString());
        cancel->setText(QApplication::translate("customkingdom_find", "\350\277\224\345\233\236", Q_NULLPTR));
        accept->setText(QApplication::translate("customkingdom_find", "\346\237\245\346\211\276", Q_NULLPTR));
        DFSlabel->setText(QApplication::translate("customkingdom_find", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\350\276\223\345\205\245\351\234\200\350\246\201\346\237\245\346\211\276\347\232\204\345\233\275\345\217\267</span></p><p><br/></p></body></html>", Q_NULLPTR));
        DFSlabel_2->setText(QApplication::translate("customkingdom_find", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">\345\233\275\345\217\267</span></p><p><span style=\" font-size:14pt;\"><br/></span></p></body></html>", Q_NULLPTR));
        DFSlabel_3->setText(QApplication::translate("customkingdom_find", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\351\230\262\345\276\241\345\212\233</span></p><p><br/></p></body></html>", Q_NULLPTR));
        DFSlabel_4->setText(QApplication::translate("customkingdom_find", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\344\272\272\346\260\221\345\271\270\347\246\217\345\272\246</span></p><p><br/></p></body></html>", Q_NULLPTR));
        DFSlabel_5->setText(QApplication::translate("customkingdom_find", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#448efc;\">\346\210\230\346\226\227\345\212\233</span></p><p><br/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customkingdom_find: public Ui_customkingdom_find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMKINGDOM_FIND_H
