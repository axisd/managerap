#ifndef ZAYWIDGET_H
#define ZAYWIDGET_H

#include "header.h"
#include "interfacewidget.h"

// Вкладка Заявки
class ZayTab : public WidgetInterface
{
    Q_OBJECT
public:
    explicit ZayTab();

signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);
    void showPreview();
    void showCreateDialog();
    void showEditDialog();

private:
    bool init();
    void deleteData();

    Ui::ZayTab *ui;
};

//Диалог создания/редактирования заявки
class ZayDialog : public QDialog
{
    Q_OBJECT
public:
    explicit ZayDialog(quint32 aId = 0, QWidget *parent = 0);
    ~ZayDialog();

signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);
    void showPreview();

private:
    static QList<QString> clienList;
    Ui::ZayDialog *ui;
};

#endif // ZAYWIDGET_H
