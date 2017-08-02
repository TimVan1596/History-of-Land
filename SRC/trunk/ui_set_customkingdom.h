/********************************************************************************
** Form generated from reading UI file 'set_customkingdom.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_CUSTOMKINGDOM_H
#define UI_SET_CUSTOMKINGDOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Set_customKingdom
{
public:
    QPushButton *Quit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Set_customKingdom)
    {
        if (Set_customKingdom->objectName().isEmpty())
            Set_customKingdom->setObjectName(QStringLiteral("Set_customKingdom"));
        Set_customKingdom->resize(640, 480);
        Quit = new QPushButton(Set_customKingdom);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setGeometry(QRect(130, 420, 361, 51));
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
        verticalLayoutWidget = new QWidget(Set_customKingdom);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 60, 601, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/gpicon/images/icon/ListAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(36, 36));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/gpicon/images/icon/ListChange.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(36, 36));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/gpicon/images/icon/ListDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(36, 36));
        pushButton_3->setFlat(true);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/gpicon/images/icon/ListSearch.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(36, 36));
        pushButton_4->setFlat(true);

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font;
        font.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QFont font1;
        font1.setPointSize(16);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        tableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font1);
        tableWidget->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font1);
        tableWidget->setItem(2, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font1);
        tableWidget->setItem(3, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 3, __qtablewidgetitem23);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(Set_customKingdom);

        QMetaObject::connectSlotsByName(Set_customKingdom);
    } // setupUi

    void retranslateUi(QDialog *Set_customKingdom)
    {
        Set_customKingdom->setWindowTitle(QApplication::translate("Set_customKingdom", "Dialog", Q_NULLPTR));
        Quit->setText(QApplication::translate("Set_customKingdom", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Set_customKingdom", "\350\213\261\351\233\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Set_customKingdom", "\346\224\273\345\207\273\345\212\233", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Set_customKingdom", "\346\212\244\347\224\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Set_customKingdom", "\351\255\224\346\263\225\345\200\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Set_customKingdom", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Set_customKingdom", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Set_customKingdom", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("Set_customKingdom", "4", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("Set_customKingdom", "\350\211\276\345\270\214 Ashe", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("Set_customKingdom", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("Set_customKingdom", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("Set_customKingdom", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("Set_customKingdom", "\347\233\226\344\274\246 Garen", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("Set_customKingdom", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("Set_customKingdom", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(1, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("Set_customKingdom", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("Set_customKingdom", "\345\270\214\347\273\264\345\260\224 Sivir", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("Set_customKingdom", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 2);
        ___qtablewidgetitem18->setText(QApplication::translate("Set_customKingdom", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 3);
        ___qtablewidgetitem19->setText(QApplication::translate("Set_customKingdom", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(3, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("Set_customKingdom", "\346\217\220\350\216\253 Teemo", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(3, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("Set_customKingdom", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(3, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("Set_customKingdom", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("Set_customKingdom", "22", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Set_customKingdom: public Ui_Set_customKingdom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_CUSTOMKINGDOM_H
