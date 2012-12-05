/********************************************************************************
** Form generated from reading UI file 'nastrwidget.ui'
**
** Created: Sun 27. May 13:46:37 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NASTRWIDGET_H
#define UI_NASTRWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NastrTab
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_5;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *NastrTab)
    {
        if (NastrTab->objectName().isEmpty())
            NastrTab->setObjectName(QString::fromUtf8("NastrTab"));
        NastrTab->resize(626, 582);
        gridLayout = new QGridLayout(NastrTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(NastrTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(90, 25));
        pushButton_3->setMaximumSize(QSize(90, 25));

        gridLayout_3->addWidget(pushButton_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(90, 50));
        pushButton_4->setMaximumSize(QSize(90, 25));

        gridLayout_3->addWidget(pushButton_4, 0, 3, 2, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 2, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_3->addWidget(comboBox, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        groupBox = new QGroupBox(NastrTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(90, 25));
        pushButton_2->setMaximumSize(QSize(90, 25));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(90, 25));
        pushButton->setMaximumSize(QSize(90, 25));

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(NastrTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(90, 25));
        pushButton_5->setMaximumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_5, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 1);


        retranslateUi(NastrTab);

        QMetaObject::connectSlotsByName(NastrTab);
    } // setupUi

    void retranslateUi(QWidget *NastrTab)
    {
        NastrTab->setWindowTitle(QApplication::translate("NastrTab", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("NastrTab", "\320\240\320\265\320\267\320\265\321\200\320\262\320\275\320\276\320\265 \320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NastrTab", "\320\245\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("NastrTab", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("NastrTab", "\320\222\320\276\321\201\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214\n"
"\320\270\320\267 \320\272\320\276\320\277\320\270\320\270", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NastrTab", "\320\241\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214 \321\200\320\265\320\267\320\265\321\200\320\262\320\275\321\213\320\265 \320\272\320\276\320\277\320\270\320\270", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("NastrTab", "\320\272\320\276\320\277\320\270\320\271", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("NastrTab", "\320\237\321\200\320\260\320\271\321\201-\320\273\320\270\321\201\321\202", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NastrTab", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\267\320\260\320\263\321\200\321\203\320\266\320\265\320\275\320\275\320\276\320\263\320\276 \320\277\321\200\320\260\320\271\321\201 \320\273\320\270\321\201\321\202\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NastrTab", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\277\321\200\320\260\320\271\321\201-\320\273\320\270\321\201\321\202", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("NastrTab", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("NastrTab", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("NastrTab", "\320\220\321\200\321\205\320\270\320\262\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("NastrTab", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\260\321\200\321\205\320\270\320\262\320\260", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("NastrTab", "\320\220\321\200\321\205\320\270\320\262\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\321\213 \321\201\321\202\320\260\321\200\321\210\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NastrTab: public Ui_NastrTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NASTRWIDGET_H
