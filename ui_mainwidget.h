/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created: Sun 27. May 13:46:37 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include "actwidget.h"
#include "clientwidget.h"
#include "nastrwidget.h"
#include "otchwidget.h"
#include "predwidget.h"
#include "zaywidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *otchButton;
    QStackedWidget *stackedWidget;
    ActTab *ActWidget;
    PredTab *PredWidget;
    ZayTab *ZayWidget;
    ClientTab *ClientWidget;
    OtchTab *OtchWidget;
    NastrTab *NastrWidget;
    QPushButton *commButton;
    QPushButton *zayButton;
    QSpacerItem *verticalSpacer;
    QPushButton *nastrButton;
    QPushButton *actButton;
    QPushButton *clientButton;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(800, 600);
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        otchButton = new QPushButton(MainWidget);
        otchButton->setObjectName(QString::fromUtf8("otchButton"));
        otchButton->setMinimumSize(QSize(150, 75));
        otchButton->setMaximumSize(QSize(150, 75));

        gridLayout->addWidget(otchButton, 4, 0, 1, 1);

        stackedWidget = new QStackedWidget(MainWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        ActWidget = new ActTab();
        ActWidget->setObjectName(QString::fromUtf8("ActWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ActWidget->sizePolicy().hasHeightForWidth());
        ActWidget->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(ActWidget);
        PredWidget = new PredTab();
        PredWidget->setObjectName(QString::fromUtf8("PredWidget"));
        sizePolicy.setHeightForWidth(PredWidget->sizePolicy().hasHeightForWidth());
        PredWidget->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(PredWidget);
        ZayWidget = new ZayTab();
        ZayWidget->setObjectName(QString::fromUtf8("ZayWidget"));
        sizePolicy.setHeightForWidth(ZayWidget->sizePolicy().hasHeightForWidth());
        ZayWidget->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(ZayWidget);
        ClientWidget = new ClientTab();
        ClientWidget->setObjectName(QString::fromUtf8("ClientWidget"));
        stackedWidget->addWidget(ClientWidget);
        OtchWidget = new OtchTab();
        OtchWidget->setObjectName(QString::fromUtf8("OtchWidget"));
        stackedWidget->addWidget(OtchWidget);
        NastrWidget = new NastrTab();
        NastrWidget->setObjectName(QString::fromUtf8("NastrWidget"));
        stackedWidget->addWidget(NastrWidget);

        gridLayout->addWidget(stackedWidget, 0, 1, 8, 1);

        commButton = new QPushButton(MainWidget);
        commButton->setObjectName(QString::fromUtf8("commButton"));
        commButton->setMinimumSize(QSize(150, 75));
        commButton->setMaximumSize(QSize(150, 75));

        gridLayout->addWidget(commButton, 1, 0, 1, 1);

        zayButton = new QPushButton(MainWidget);
        zayButton->setObjectName(QString::fromUtf8("zayButton"));
        zayButton->setMinimumSize(QSize(150, 75));
        zayButton->setMaximumSize(QSize(150, 75));

        gridLayout->addWidget(zayButton, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        nastrButton = new QPushButton(MainWidget);
        nastrButton->setObjectName(QString::fromUtf8("nastrButton"));
        nastrButton->setMinimumSize(QSize(150, 75));
        nastrButton->setMaximumSize(QSize(150, 75));

        gridLayout->addWidget(nastrButton, 7, 0, 1, 1);

        actButton = new QPushButton(MainWidget);
        actButton->setObjectName(QString::fromUtf8("actButton"));
        actButton->setMinimumSize(QSize(150, 75));
        actButton->setMaximumSize(QSize(150, 75));

        gridLayout->addWidget(actButton, 2, 0, 1, 1);

        clientButton = new QPushButton(MainWidget);
        clientButton->setObjectName(QString::fromUtf8("clientButton"));
        clientButton->setMinimumSize(QSize(150, 75));
        clientButton->setMaximumSize(QSize(150, 75));

        gridLayout->addWidget(clientButton, 5, 0, 1, 1);


        retranslateUi(MainWidget);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "Form", 0, QApplication::UnicodeUTF8));
        otchButton->setText(QApplication::translate("MainWidget", "\320\236\321\202\321\207\320\265\321\202\321\213", 0, QApplication::UnicodeUTF8));
        commButton->setText(QApplication::translate("MainWidget", "\320\232\320\276\320\274\320\274\320\265\321\200\321\207\320\265\321\201\320\272\320\270\320\265\n"
"\320\277\321\200\320\265\320\264\320\273\320\276\320\266\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        zayButton->setText(QApplication::translate("MainWidget", "\320\227\320\260\321\217\320\262\320\272\320\270", 0, QApplication::UnicodeUTF8));
        nastrButton->setText(QApplication::translate("MainWidget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        actButton->setText(QApplication::translate("MainWidget", "\320\220\320\272\321\202\321\213", 0, QApplication::UnicodeUTF8));
        clientButton->setText(QApplication::translate("MainWidget", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
