/********************************************************************************
** Form generated from reading UI file 'actwidget.ui'
**
** Created: Sun 27. May 13:46:37 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTWIDGET_H
#define UI_ACTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActTab
{
public:
    QGridLayout *gridLayout;
    QPushButton *createButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ActTab)
    {
        if (ActTab->objectName().isEmpty())
            ActTab->setObjectName(QString::fromUtf8("ActTab"));
        ActTab->resize(626, 582);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ActTab->sizePolicy().hasHeightForWidth());
        ActTab->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ActTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        createButton = new QPushButton(ActTab);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
        createButton->setSizePolicy(sizePolicy1);
        createButton->setMinimumSize(QSize(90, 25));
        createButton->setMaximumSize(QSize(90, 25));

        gridLayout->addWidget(createButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(ActTab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(90, 25));
        pushButton_2->setMaximumSize(QSize(90, 25));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(ActTab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(90, 25));
        pushButton_3->setMaximumSize(QSize(90, 25));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        label = new QLabel(ActTab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(ActTab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 0, 1, 3);

        label_2 = new QLabel(ActTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        tableWidget = new QTableWidget(ActTab);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 4, 0, 1, 4);

        pushButton_4 = new QPushButton(ActTab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_4, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);


        retranslateUi(ActTab);

        QMetaObject::connectSlotsByName(ActTab);
    } // setupUi

    void retranslateUi(QWidget *ActTab)
    {
        ActTab->setWindowTitle(QApplication::translate("ActTab", "Form", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("ActTab", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ActTab", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ActTab", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ActTab", "\320\221\321\213\321\201\321\202\321\200\321\213\320\271 \320\277\320\276\320\270\321\201\320\272", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ActTab", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\277\320\276\320\270\321\201\320\272\320\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ActTab", "\320\232\320\273\320\270\320\265\320\275\321\202", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ActTab", "\320\224\320\260\321\202\320\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ActTab", "\320\232\320\276\320\273-\320\262\320\276", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ActTab", "\320\241\321\202\320\260\321\202\321\203\321\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ActTab", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ActTab", "2", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ActTab", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\n"
"\320\237\320\265\321\207\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ActTab: public Ui_ActTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTWIDGET_H
