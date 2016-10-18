#-------------------------------------------------
include(/opt/qt/arch.pri)

QT       += core gui

DESTDIR = $$bindir
TARGET = motors
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp testdialog.cpp
SOURCES += ../motorCtrl.cpp
HEADERS += mainwindow.h testdialog.h
HEADERS += ../motorCtrl.h
FORMS   += mainwindow.ui testdialog.ui
FORMS   += ../motorCtrl.ui

INCLUDEPATH += $$(MYPLUGINS)/widgets
INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEShape
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(QCAFRAMEWORK)/common
INCLUDEPATH += $$(QTDIR)/include/QtXml
LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
RESOURCES = motor.qrc
