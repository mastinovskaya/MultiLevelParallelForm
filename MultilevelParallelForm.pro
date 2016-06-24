#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T16:51:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MultilevelParallelForm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    widparallelform.cpp \
    listgraph.cpp

HEADERS  += mainwindow.h \
    widparallelform.h \
    graph.h \
    list.h \
    listgraph.h

FORMS    += mainwindow.ui \
    widparallelform.ui
