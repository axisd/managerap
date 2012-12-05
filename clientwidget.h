#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include "header.h"

// Вкладка Клиенты
class ClientTab : public QWidget
{
    Q_OBJECT
public:
    explicit ClientTab(QWidget *parent = 0);

signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);
    void showPreview();

private:
    bool init();
    void showCreateDialog();
    void showEditDialog();

    void deleteData();

    Ui::ClientTab *ui;
};

//Диалог создания/редактирования клиента
class ClientDialog : public QDialog
{
    Q_OBJECT
public:
    explicit ClientDialog(quint32 aId = 0, QWidget *parent = 0);
    ~ClientDialog();

signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);
    void showPreview();

private:
    static QList<QString> clienList;
    Ui::ClientDialog *ui;
};

#endif // CLIENTWIDGET_H
