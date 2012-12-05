#include "otchwidget.h"
#include "ui_otchwidget.h"

OtchTab::OtchTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OtchTab)
{
    ui->setupUi(this);
}

void OtchTab::parseAndShowData(QSqlQuery aQuery)
{
}

bool OtchTab::init()
{
}
