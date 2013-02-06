#include "zaywidget.h"
#include "ui_zaywidget.h"

ZayTab::ZayTab() :
    ui(new Ui::ZayTab)
{
  ui->setupUi(this);
  connect(ui->createButton,SIGNAL(clicked()),this,SLOT(showCreateDialog()));
}

void ZayTab::showCreateDialog()
{
    ZayDialog *zay = new ZayDialog(0, this);
    zay->show();
}

ZayDialog::ZayDialog(quint32 aId, QWidget *parent) :
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint)
{
}

ZayDialog::~ZayDialog()
{
}

void ZayTab::parseAndShowData(QSqlQuery aQuery)
{
}

void ZayTab::showPreview()
{
}

bool ZayTab::init()
{
}

void ZayTab::showEditDialog()
{
}

void ZayTab::deleteData()
{
}

void ZayDialog::parseAndShowData(QSqlQuery aQuery)
{
}

void ZayDialog::showPreview()
{
}
