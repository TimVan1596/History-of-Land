/********************************************************************************
** Form generated from reading UI file 'ClassicMode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSICMODE_H
#define UI_CLASSICMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassicMode
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QProgressBar *progressBar;
    QTableView *tableView;
    QPushButton *Quit;
    QPushButton *Quit_2;

    void setupUi(QDialog *ClassicMode)
    {
        if (ClassicMode->objectName().isEmpty())
            ClassicMode->setObjectName(QStringLiteral("ClassicMode"));
        ClassicMode->resize(678, 478);
        verticalLayoutWidget = new QWidget(ClassicMode);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 30, 611, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(lineEdit);

        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(0, 30));
        progressBar->setMaximum(20);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        Quit = new QPushButton(ClassicMode);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setGeometry(QRect(140, 350, 381, 61));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(Quit->sizePolicy().hasHeightForWidth());
        Quit->setSizePolicy(sizePolicy);
        Quit->setStyleSheet(QLatin1String("QPushButton {\n"
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
        Quit_2 = new QPushButton(ClassicMode);
        Quit_2->setObjectName(QStringLiteral("Quit_2"));
        Quit_2->setGeometry(QRect(240, 430, 171, 41));
        sizePolicy.setHeightForWidth(Quit_2->sizePolicy().hasHeightForWidth());
        Quit_2->setSizePolicy(sizePolicy);
        Quit_2->setStyleSheet(QLatin1String("QPushButton {\n"
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

        retranslateUi(ClassicMode);

        QMetaObject::connectSlotsByName(ClassicMode);
    } // setupUi

    void retranslateUi(QDialog *ClassicMode)
    {
        ClassicMode->setWindowTitle(QApplication::translate("ClassicMode", "Dialog", Q_NULLPTR));
        Quit->setText(QApplication::translate("ClassicMode", "\347\241\256  \345\256\232", Q_NULLPTR));
        Quit_2->setText(QApplication::translate("ClassicMode", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClassicMode: public Ui_ClassicMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSICMODE_H
