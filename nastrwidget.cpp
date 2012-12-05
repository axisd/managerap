#include "nastrwidget.h"
#include "ui_nastrwidget.h"

NastrTab::NastrTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NastrTab)
{
  ui->setupUi(this);
}

void NastrTab::parseAndShowData(QSqlQuery aQuery)
{
}

bool NastrTab::init()
{
}
