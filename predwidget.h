#ifndef PREDWIDGET_H
#define PREDWIDGET_H

#include "header.h"

// Вкладка Ком. предложение
class PredTab : public QWidget
{
    Q_OBJECT
public:
    explicit PredTab(QWidget *parent = 0);

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

    Ui::PredTab *ui;
};

//Диалог создания/редактирования предложения
class PredDialog : public QDialog
{
    Q_OBJECT
public:
    explicit PredDialog(quint32 aId = 0, QWidget *parent = 0);
    ~PredDialog();

signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);
    void showPreview();

private:
    static QList<QString> clienList;
    Ui::PredDialog *ui;
};

#endif // PREDWIDGET_H
