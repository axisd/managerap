#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include "header.h"

#include "zaywidget.h"
#include "otchwidget.h"
#include "predwidget.h"
#include "actwidget.h"
#include "clientwidget.h"

//namespace Ui {
//    class MainWidget;
//}

// Главное Окно
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();

protected:
    bool init();
    Ui::MainWidget *ui;
    ActTab *act;

public slots:
    void resultMDB(bool);

    void showZay();
    void showAct();
    void showComm();
    void showClient();
    void showOtch();
    void showNastr();
};

#endif // MAINWIDGET_H
