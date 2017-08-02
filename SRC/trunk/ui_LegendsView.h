/********************************************************************************
** Form generated from reading UI file 'LegendsView.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGENDSVIEW_H
#define UI_LEGENDSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LegendsView
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *EditorlLayout;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *findButton;
    QVBoxLayout *selectLayout;
    QLineEdit *infoLine;
    QProgressBar *timerProgressBar;
    QTableView *LegendsTableView;
    QPushButton *backButton;
    QPushButton *okButton;

    void setupUi(QDialog *LegendsView)
    {
        if (LegendsView->objectName().isEmpty())
            LegendsView->setObjectName(QStringLiteral("LegendsView"));
        LegendsView->resize(741, 568);
        verticalLayoutWidget = new QWidget(LegendsView);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 50, 611, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        EditorlLayout = new QHBoxLayout();
        EditorlLayout->setObjectName(QStringLiteral("EditorlLayout"));
        addButton = new QPushButton(verticalLayoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/gpicon/images/icon/ListAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);
        addButton->setIconSize(QSize(36, 36));
        addButton->setFlat(true);

        EditorlLayout->addWidget(addButton);

        editButton = new QPushButton(verticalLayoutWidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gpicon/images/icon/ListChange.png"), QSize(), QIcon::Normal, QIcon::Off);
        editButton->setIcon(icon1);
        editButton->setIconSize(QSize(36, 36));
        editButton->setFlat(true);

        EditorlLayout->addWidget(editButton);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gpicon/images/icon/ListDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(36, 36));
        deleteButton->setFlat(true);

        EditorlLayout->addWidget(deleteButton);

        findButton = new QPushButton(verticalLayoutWidget);
        findButton->setObjectName(QStringLiteral("findButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gpicon/images/icon/ListSearch.png"), QSize(), QIcon::Normal, QIcon::Off);
        findButton->setIcon(icon3);
        findButton->setIconSize(QSize(36, 36));
        findButton->setFlat(true);

        EditorlLayout->addWidget(findButton);


        verticalLayout->addLayout(EditorlLayout);

        selectLayout = new QVBoxLayout();
        selectLayout->setObjectName(QStringLiteral("selectLayout"));
        infoLine = new QLineEdit(verticalLayoutWidget);
        infoLine->setObjectName(QStringLiteral("infoLine"));
        infoLine->setEnabled(false);
        infoLine->setMinimumSize(QSize(0, 45));

        selectLayout->addWidget(infoLine);

        timerProgressBar = new QProgressBar(verticalLayoutWidget);
        timerProgressBar->setObjectName(QStringLiteral("timerProgressBar"));
        timerProgressBar->setMinimumSize(QSize(0, 30));
        timerProgressBar->setMaximum(20);
        timerProgressBar->setValue(0);

        selectLayout->addWidget(timerProgressBar);


        verticalLayout->addLayout(selectLayout);

        LegendsTableView = new QTableView(verticalLayoutWidget);
        LegendsTableView->setObjectName(QStringLiteral("LegendsTableView"));

        verticalLayout->addWidget(LegendsTableView);

        backButton = new QPushButton(LegendsView);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(280, 520, 171, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        okButton = new QPushButton(LegendsView);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(180, 440, 381, 61));
        sizePolicy.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy);
        okButton->setStyleSheet(QLatin1String("QPushButton {\n"
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

        retranslateUi(LegendsView);

        QMetaObject::connectSlotsByName(LegendsView);
    } // setupUi

    void retranslateUi(QDialog *LegendsView)
    {
        LegendsView->setWindowTitle(QApplication::translate("LegendsView", "Dialog", Q_NULLPTR));
        addButton->setText(QString());
        editButton->setText(QString());
        deleteButton->setText(QString());
        findButton->setText(QString());
        backButton->setText(QApplication::translate("LegendsView", "\350\277\224\345\233\236", Q_NULLPTR));
        okButton->setText(QApplication::translate("LegendsView", "\347\241\256  \345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LegendsView: public Ui_LegendsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGENDSVIEW_H
