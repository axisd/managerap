#ifndef NASTRWIDGET_H
#define NASTRWIDGET_H

#include "header.h"

// Вкладка Настройки
class NastrTab : public QWidget
{
    Q_OBJECT
public:
    explicit NastrTab(QWidget *parent = 0);
    
signals:
    void needQuery(QString aQuery);

public slots:
    void parseAndShowData(QSqlQuery aQuery);

private:
    bool init();
    Ui::NastrTab *ui;
};

#endif // NASTRWIDGET_H
