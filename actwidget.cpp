#include "actwidget.h"
#include "ui_actwidget.h"
#include "ui_actdialog.h"

ActTab::ActTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ActTab)
{
  ui->setupUi(this);
  connect(ui->createButton,SIGNAL(clicked()),this,SLOT(showCreateDialog()));
}

void ActTab::showCreateDialog()
{
    ActDialog *act = new ActDialog(0, this);
    act->show();
}

ActDialog::ActDialog(quint32 aId, QWidget *parent) :
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint),
    ui(new Ui::ActDialog)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("Акт приёма-передачи"));
    ui->dateEdit->setCalendarPopup(true);
    ui->dateEdit->setDate(QDate::currentDate());
}

ActDialog::~ActDialog()
{
}

void ActTab::parseAndShowData(QSqlQuery aQuery)
{
}

void ActTab::showPreview()
{
}

bool ActTab::init()
{
}

void ActTab::showEditDialog()
{
}

void ActTab::deleteData()
{
}

void ActDialog::parseAndShowData(QSqlQuery aQuery)
{
}

void ActDialog::showPreview()
{
}
