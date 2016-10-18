#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------

#CONFIG += static

QT       += core gui

TARGET = scanui
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
LIBS += -L$$(QCAFRAMEWORK)/plugins -lQCaPlugin
RESOURCES = resources.qrc
