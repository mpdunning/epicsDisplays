#-------------------------------------------------
include(/opt/qt/arch.pri)

QT       += core gui

DESTDIR = $$bindir
TARGET = nlcta
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(MYPLUGINS)/widgets
LIBS += -L$$(QTPLUG) -lQCaPlugin -lmyPlugin
RESOURCES = resources.qrc
