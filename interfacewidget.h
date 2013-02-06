#ifndef INTERFACEWIDGET_H
#define INTERFACEWIDGET_H

#include <QWidget>
#include <QSqlQuery>

class WidgetInterface : public QWidget
{
    Q_OBJECT
public:
    virtual ~WidgetInterface() {}

signals:
    void needQuery(QString aQuery);

public slots:
    virtual void parseAndShowData(QSqlQuery aQuery) = 0;
    virtual void showPreview() = 0;
    virtual void showCreateDialog() = 0;
    virtual void showEditDialog() = 0;

private:
    virtual bool init() = 0;
    virtual void deleteData() = 0;
};

#endif // INTERFACEWIDGET_H
