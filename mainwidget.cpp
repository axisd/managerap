#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("ManagerAP"));
    ui->stackedWidget->setCurrentIndex(2);
    ui->zayButton->setDown(true);

    connect(ui->zayButton,SIGNAL(clicked()),this,SLOT(showZay()));
    connect(ui->actButton,SIGNAL(clicked()),this,SLOT(showAct()));
    connect(ui->clientButton,SIGNAL(clicked()),this,SLOT(showClient()));
    connect(ui->commButton,SIGNAL(clicked()),this,SLOT(showComm()));
    connect(ui->nastrButton,SIGNAL(clicked()),this,SLOT(showNastr()));
    connect(ui->otchButton,SIGNAL(clicked()),this,SLOT(showOtch()));
}

MainWidget::~MainWidget()
{
    delete ui;
}

bool MainWidget::init()
{
}

void MainWidget::resultMDB(bool)
{
}

void MainWidget::showZay()
{
    ui->stackedWidget->setCurrentIndex(2);

    ui->zayButton->setDown(true);
    ui->actButton->setDown(false);
    ui->commButton->setDown(false);
    ui->nastrButton->setDown(false);
    ui->otchButton->setDown(false);
    ui->clientButton->setDown(false);
}

void MainWidget::showAct()
{
    ui->stackedWidget->setCurrentIndex(0);

    ui->zayButton->setDown(false);
    ui->actButton->setDown(true);
    ui->commButton->setDown(false);
    ui->nastrButton->setDown(false);
    ui->otchButton->setDown(false);
    ui->clientButton->setDown(false);
}

void MainWidget::showComm()
{
    ui->stackedWidget->setCurrentIndex(1);

    ui->zayButton->setDown(false);
    ui->actButton->setDown(false);
    ui->commButton->setDown(true);
    ui->nastrButton->setDown(false);
    ui->otchButton->setDown(false);
    ui->clientButton->setDown(false);
}

void MainWidget::showClient()
{
    ui->stackedWidget->setCurrentIndex(3);

    ui->zayButton->setDown(false);
    ui->actButton->setDown(false);
    ui->commButton->setDown(false);
    ui->nastrButton->setDown(false);
    ui->otchButton->setDown(false);
    ui->clientButton->setDown(true);
}

void MainWidget::showOtch()
{
    ui->stackedWidget->setCurrentIndex(4);

    ui->zayButton->setDown(false);
    ui->actButton->setDown(false);
    ui->commButton->setDown(false);
    ui->nastrButton->setDown(false);
    ui->otchButton->setDown(true);
    ui->clientButton->setDown(false);
}

void MainWidget::showNastr()
{
    ui->stackedWidget->setCurrentIndex(5);

    ui->zayButton->setDown(false);
    ui->actButton->setDown(false);
    ui->commButton->setDown(false);
    ui->nastrButton->setDown(true);
    ui->otchButton->setDown(false);
    ui->clientButton->setDown(false);
}
