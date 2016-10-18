#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------

#CONFIG += static
include(/opt/qt/arch.pri)

QT       += core gui
message($$bindir)

TARGET = test
TEMPLATE = app
DESTDIR = $$bindir
SOURCES += main.cpp mainwindow.cpp
SOURCES += imageframe.cpp renderarea.cpp
HEADERS += mainwindow.h imageframe.h renderarea.h

INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include

LIBS += -L$$(QCAFRAMEWORK)/plugins -lQCaPlugin
RESOURCES = resources.qrc
