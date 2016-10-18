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
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(QCAFRAMEWORK)/common
INCLUDEPATH += $$(QTDIR)/include/QtXml
INCLUDEPATH += $$(MYPLUGINS)/widgets
LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
RESOURCES = resources.qrc
