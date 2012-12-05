#include "predwidget.h"
#include "ui_predwidget.h"

PredTab::PredTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PredTab)
{
  ui->setupUi(this);
}

void PredTab::showCreateDialog()
{
    PredDialog *pred = new PredDialog(0, this);
    pred->show();
}

PredDialog::PredDialog(quint32 aId, QWidget *parent) :
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint)
{
}

PredDialog::~PredDialog()
{
}

void PredTab::parseAndShowData(QSqlQuery aQuery)
{
}

void PredTab::showPreview()
{
}

bool PredTab::init()
{
}

void PredTab::showEditDialog()
{
}

void PredTab::deleteData()
{
}

void PredDialog::parseAndShowData(QSqlQuery aQuery)
{
}

void PredDialog::showPreview()
{
}
