#-------------------------------------------------
#
# Project created by QtCreator 2012-05-08T13:48:26
#
#-------------------------------------------------

QT       += core gui sql

CONFIG(release, debug|release):TARGET = ../bin/ManagerAP_r
else:TARGET = ../bin/ManagerAP_d

TEMPLATE = app

SOURCES += main.cpp\
        mainwidget.cpp \
    zaywidget.cpp \
    actwidget.cpp \
    predwidget.cpp \
    otchwidget.cpp \
    clientwidget.cpp \
    managerbd.cpp \
    nastrwidget.cpp

HEADERS  += mainwidget.h \
    zaywidget.h \
    actwidget.h \
    predwidget.h \
    otchwidget.h \
    header.h \
    clientwidget.h \
    managerbd.h \
    nastrwidget.h \
    interfacewidget.h

RESOURCES += \
    imgres.qrc

FORMS += \
    actwidget.ui \
    mainwidget.ui \
    zaywidget.ui \
    predwidget.ui \
    clientwidget.ui \
    otchwidget.ui \
    actdialog.ui \
    nastrwidget.ui
