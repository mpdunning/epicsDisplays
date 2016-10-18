#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------
include(/opt/qt/arch.pri)

DESTDIR = $$bindir
TEMPLATE = app
TARGET = marx

QT       += core gui


SOURCES += main.cpp mainwindow.cpp hmadcs.cpp
HEADERS  += mainwindow.h hmadcs.h
FORMS    += mainwindow.ui hmadcs.ui

INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/deprecated
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(MYPLUGINS)/widgets
LIBS += -L$$(QCAFRAMEWORK)/plugins -lQEPlugin
LIBS += -L$$(QTPLUG) -lmyPlugin
RESOURCES = marx.qrc
