#ifndef ZAYWIDGET_H
#define ZAYWIDGET_H

#include "header.h"

// Вкладка Заявки
class ZayTab : public QWidget
{
    Q_OBJECT
public:
    explicit ZayTab(QWidget *parent = 0);

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
