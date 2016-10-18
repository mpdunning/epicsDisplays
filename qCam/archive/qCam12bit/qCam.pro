#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------
include(/opt/qt/arch.pri)

DESTDIR = $$bindir

QT       += core gui

TARGET = qCam
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

INCLUDEPATH += $$(MYPLUGINS)/widgets
INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QESpinBox
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEImage
INCLUDEPATH += $$(QWTDIR)/src
INCLUDEPATH += $$(QCAFRAMEWORK)/common
INCLUDEPATH += $$(QTDIR)/include/QtXml

LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
RESOURCES = resources.qrc
