#ifndef MANAGERBD_H
#define MANAGERBD_H

#include <QObject>

// Менеджер базы данных
class managerBD : public QObject
{
    Q_OBJECT
public:
    explicit managerBD(QObject *parent = 0);
    
signals:
    void selfTestResult(bool);
    
public slots:
    void selfTest();
    void slotQuery(QString aQuery);

private:
};

#endif // MANAGERBD_H
