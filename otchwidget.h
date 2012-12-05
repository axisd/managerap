#ifndef OTCHWIDGET_H
#define OTCHWIDGET_H

#include "header.h"

// Вкладка Отчеты
class OtchTab : public QWidget
{
    Q_OBJECT
public:
    explicit OtchTab(QWidget *parent = 0);

signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);

private:
    bool init();
    Ui::OtchTab *ui;
};

#endif // OTCHWIDGET_H
