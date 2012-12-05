#ifndef ACTWIDGET_H
#define ACTWIDGET_H

#include "header.h"

// Вкладка Акт
class ActTab : public QWidget
{
    Q_OBJECT
public:
    explicit ActTab(QWidget *parent = 0);

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

    Ui::ActTab *ui;
};

//Диалог создания/редактирования акта
class ActDialog : public QDialog
{
    Q_OBJECT
public:
    explicit ActDialog(quint32 aId = 0, QWidget *parent = 0);
    ~ActDialog();

signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);
    void showPreview();

private:
    static QList<QString> clienList;
    Ui::ActDialog *ui;
};

#endif // ACTWIDGET_H
