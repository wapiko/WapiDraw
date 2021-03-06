#-------------------------------------------------
#
# Project created by QtCreator 2014-08-15T23:05:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WapiDraw
TEMPLATE = app


SOURCES += main.cpp\
        wapidraw.cpp \
    wcanvas.cpp \
    wdrawitem.cpp \
    wdrawitems.cpp \
    wdrawobject.cpp \
    wrect.cpp \
    wcircle.cpp

HEADERS  += wapidraw.h \
    wcanvas.h \
    WDrawMode.h \
    wdrawitem.h \
    wdrawitems.h \
    wdrawobject.h \
    wrect.h \
    wcircle.h

FORMS    += wapidraw.ui
