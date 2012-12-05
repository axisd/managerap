/********************************************************************************
** Form generated from reading UI file 'actdialog.ui'
**
** Created: Sun 27. May 13:46:37 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTDIALOG_H
#define UI_ACTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label;
    QTableWidget *tableWidget;
    QDateEdit *dateEdit;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QWidget *ActDialog)
    {
        if (ActDialog->objectName().isEmpty())
            ActDialog->setObjectName(QString::fromUtf8("ActDialog"));
        ActDialog->resize(800, 600);
        gridLayout = new QGridLayout(ActDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(ActDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        comboBox = new QComboBox(ActDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 3);

        label_3 = new QLabel(ActDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        label = new QLabel(ActDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        tableWidget = new QTableWidget(ActDialog);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 4, 0, 1, 3);

        dateEdit = new QDateEdit(ActDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 1, 5, 1, 1);

        comboBox_2 = new QComboBox(ActDialog);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 3, 1, 2);

        label_4 = new QLabel(ActDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        lineEdit = new QLineEdit(ActDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 0, 1, 2);

        pushButton = new QPushButton(ActDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(90, 25));
        pushButton->setMaximumSize(QSize(90, 25));

        gridLayout->addWidget(pushButton, 6, 2, 1, 1);

        lineEdit_2 = new QLineEdit(ActDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(90, 25));
        lineEdit_2->setMaximumSize(QSize(90, 25));

        gridLayout->addWidget(lineEdit_2, 6, 1, 1, 1);

        tableWidget_2 = new QTableWidget(ActDialog);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        if (tableWidget_2->rowCount() < 5)
            tableWidget_2->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem15);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout->addWidget(tableWidget_2, 4, 3, 1, 3);

        pushButton_2 = new QPushButton(ActDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(90, 50));
        pushButton_2->setMaximumSize(QSize(90, 50));

        gridLayout->addWidget(pushButton_2, 6, 5, 1, 1);

        label_5 = new QLabel(ActDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);


        retranslateUi(ActDialog);

        QMetaObject::connectSlotsByName(ActDialog);
    } // setupUi

    void retranslateUi(QWidget *ActDialog)
    {
        ActDialog->setWindowTitle(QApplication::translate("ActDialog", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ActDialog", "\320\237\321\200\320\270\320\275\320\270\320\274\320\260\321\216\321\211\320\260\321\217 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ActDialog", "\320\232\320\262\320\265\321\201\321\202\320\276\321\200 \320\220\320\271 \320\242\320\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\227\320\262\320\265\320\267\320\264\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\235\320\260\320\264\321\221\320\266\320\275\320\260\321\217 \320\230\320\275\320\266\320\265\320\275\320\265\321\200\320\275\320\260\321\217 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\236\321\200\320\261\320\270\321\202\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\242\320\260\321\200\320\263\320\265\321\202", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("ActDialog", "\320\224\320\260\321\202\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ActDialog", "\320\237\320\265\321\200\320\265\320\264\320\260\321\216\321\211\320\260\321\217 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ActDialog", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ActDialog", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("ActDialog", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("ActDialog", "2", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("ActDialog", "345", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 1);
        ___qtablewidgetitem5->setText(QApplication::translate("ActDialog", "\320\227\320\260\320\263\320\273\321\203\321\210\320\272\320\260 \342\204\22665", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("ActDialog", "546", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("ActDialog", "\320\227\320\260\320\263\320\273\321\203\321\210\320\272\320\260 \342\204\22699", 0, QApplication::UnicodeUTF8));
        tableWidget->setSortingEnabled(__sortingEnabled);

        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ActDialog", "\320\235\320\260\320\264\321\221\320\266\320\275\320\260\321\217 \320\230\320\275\320\266\320\265\320\275\320\265\321\200\320\275\320\260\321\217 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\227\320\262\320\265\320\267\320\264\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\236\321\200\320\261\320\270\321\202\320\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\242\320\260\321\200\320\263\320\265\321\202", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ActDialog", "\320\232\320\262\320\265\321\201\321\202\320\276\321\200 \320\220\320\271 \320\242\320\270", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("ActDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ActDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("ActDialog", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("ActDialog", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("ActDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("ActDialog", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("ActDialog", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("ActDialog", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("ActDialog", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem15->setText(QApplication::translate("ActDialog", "5", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ActDialog", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ActDialog", "\320\237\320\276\320\270\321\201\320\272 \321\202\320\276\320\262\320\260\321\200\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ActDialog: public Ui_ActDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTDIALOG_H
