#include "clientwidget.h"
#include "ui_clientwidget.h"

ClientTab::ClientTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientTab)
{
    ui->setupUi(this);
}

void ClientTab::showCreateDialog()
{
    ClientDialog *client = new ClientDialog(0, this);
    client->show();
}

ClientDialog::ClientDialog(quint32 aId, QWidget *parent) :
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint)
{
}

ClientDialog::~ClientDialog()
{
}

void ClientTab::parseAndShowData(QSqlQuery aQuery)
{
}

void ClientTab::showPreview()
{
}

bool ClientTab::init()
{
}

void ClientTab::showEditDialog()
{
}

void ClientTab::deleteData()
{
}

void ClientDialog::parseAndShowData(QSqlQuery aQuery)
{
}

void ClientDialog::showPreview()
{
}
