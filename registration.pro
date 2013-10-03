#-------------------------------------------------
#
# Project created by QtCreator 2013-10-03T14:44:49
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = registration
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sql.cpp \
    sqlwrapper.cpp

HEADERS  += mainwindow.h \
    sql.h \
    sqlwrapper.h

FORMS    += mainwindow.ui
