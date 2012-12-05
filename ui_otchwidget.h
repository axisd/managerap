/********************************************************************************
** Form generated from reading UI file 'otchwidget.ui'
**
** Created: Sun 27. May 13:46:37 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTCHWIDGET_H
#define UI_OTCHWIDGET_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtchTab
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QDateEdit *dateEdit_2;
    QRadioButton *radioButton_5;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QComboBox *comboBox_2;
    QLabel *label;
    QLabel *label_4;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *OtchTab)
    {
        if (OtchTab->objectName().isEmpty())
            OtchTab->setObjectName(QString::fromUtf8("OtchTab"));
        OtchTab->resize(626, 582);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OtchTab->sizePolicy().hasHeightForWidth());
        OtchTab->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OtchTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(OtchTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 6, 1, 1);

        label_5 = new QLabel(OtchTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        dateEdit_2 = new QDateEdit(OtchTab);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        sizePolicy1.setHeightForWidth(dateEdit_2->sizePolicy().hasHeightForWidth());
        dateEdit_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dateEdit_2, 0, 9, 1, 1);

        radioButton_5 = new QRadioButton(OtchTab);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 2, 9, 1, 1);

        label_3 = new QLabel(OtchTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 0, 8, 1, 1);

        dateEdit = new QDateEdit(OtchTab);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        sizePolicy1.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dateEdit, 0, 7, 1, 1);

        comboBox_2 = new QComboBox(OtchTab);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 2, 1, 6);

        label = new QLabel(OtchTab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(OtchTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        radioButton_4 = new QRadioButton(OtchTab);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 1, 9, 1, 1);

        pushButton_3 = new QPushButton(OtchTab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(90, 50));
        pushButton_3->setMaximumSize(QSize(90, 50));

        gridLayout->addWidget(pushButton_3, 4, 9, 2, 1);

        textEdit = new QTextEdit(OtchTab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 3, 1, 1, 9);

        pushButton = new QPushButton(OtchTab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(90, 25));
        pushButton->setMaximumSize(QSize(90, 25));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        pushButton_2 = new QPushButton(OtchTab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(90, 25));
        pushButton_2->setMaximumSize(QSize(90, 25));

        gridLayout->addWidget(pushButton_2, 5, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 3, 1, 6);

        comboBox = new QComboBox(OtchTab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(comboBox, 0, 2, 1, 4);

        radioButton = new QRadioButton(OtchTab);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        sizePolicy1.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioButton, 2, 2, 1, 1);

        radioButton_2 = new QRadioButton(OtchTab);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        sizePolicy1.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioButton_2, 2, 3, 1, 1);

        radioButton_3 = new QRadioButton(OtchTab);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        sizePolicy1.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioButton_3, 2, 4, 1, 1);

        lineEdit = new QLineEdit(OtchTab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 5, 1, 3);


        retranslateUi(OtchTab);

        QMetaObject::connectSlotsByName(OtchTab);
    } // setupUi

    void retranslateUi(QWidget *OtchTab)
    {
        OtchTab->setWindowTitle(QApplication::translate("OtchTab", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OtchTab", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\201", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OtchTab", "\320\235\320\260 \321\201\321\203\320\274\320\274\321\203", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("OtchTab", "\320\237\320\276 \320\262\321\201\320\265\320\274 \320\264\320\260\320\275\320\275\321\213\320\274", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OtchTab", "\320\277\320\276", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OtchTab", "\320\232\320\273\320\270\320\265\320\275\321\202", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OtchTab", "\320\242\320\276\320\262\320\260\321\200", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("OtchTab", "\320\237\320\276 \320\267\320\260\321\217\320\262\320\272\320\260\320\274", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("OtchTab", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("OtchTab", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("OtchTab", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("OtchTab", "=", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("OtchTab", ">", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("OtchTab", "<", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OtchTab: public Ui_OtchTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTCHWIDGET_H
