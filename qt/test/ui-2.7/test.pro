#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------
include(/opt/qt/arch.pri)
DESTDIR = $$bindir
message($$bindir)

#CONFIG += static
QT       += core gui
TARGET = test
TEMPLATE = app
SOURCES += main.cpp mainwindow.cpp
SOURCES += imageframe.cpp renderarea.cpp
HEADERS += mainwindow.h imageframe.h renderarea.h

#INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
#INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
#INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
#INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
#INCLUDEPATH += $$(QCAFRAMEWORK)/common
#INCLUDEPATH += $$(QTDIR)/include/QtXml

#LIBS += -L$$(QTPLUG) -lQEPlugin
RESOURCES = resources.qrc
