#include <QtGui/QApplication>
#include <QTextCodec>

#include "mainwidget.h"

int main(int argc, char *argv[])
{    
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForTr(codec);

    Q_INIT_RESOURCE(imgres);

    QApplication a(argc, argv);
    MainWidget w;
    w.show();

    return a.exec();
}
