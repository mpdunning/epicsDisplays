#-------------------------------------------------
include(/opt/qt/arch.pri)

QT       += core gui

DESTDIR = $$bindir
TARGET = v3122
TEMPLATE = app

SOURCES  += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
#INCLUDEPATH += $$(MYPLUGINS)/widgets
#LIBS += -L$$(QTPLUG) -lQCaPlugin -lmyPlugin
LIBS += -L$$(QTPLUG) -lQCaPlugin
RESOURCES = resources.qrc
