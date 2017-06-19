#-------------------------------------------------
#
# Project created by QtCreator 2017-06-15T16:39:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = flipigas
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp \
    request_form.cpp

HEADERS  += mainwindow.h \
    secdialog.h \
    classes.h \
    request_form.h

FORMS    += mainwindow.ui \
    secdialog.ui \
    request_form.ui
