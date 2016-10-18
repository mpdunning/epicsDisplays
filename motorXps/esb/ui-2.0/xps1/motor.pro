#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------
include(/opt/qt/arch.pri)

DESTDIR = $$bindir
TEMPLATE = app
TARGET = motor

QT       += core gui

SOURCES += main.cpp mainwindow.cpp
SOURCES += ../common/motordialog.cpp
SOURCES += ../common/setupdialog.cpp ../common/phasedialog.cpp
HEADERS += mainwindow.h ../common/motordialog.h
HEADERS += ../common/setupdialog.h ../common/phasedialog.h
FORMS   += mainwindow.ui ../common/motordialog.ui
FORMS   += ../common/setupdialog.ui ../common/phasedialog.ui

INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEShape
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/deprecated
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(MYPLUGINS)/widgets
LIBS += -L$$(QTPLUG) -lQEPlugin
LIBS += -L$$(QTPLUG) -lmyPlugin
RESOURCES = resources.qrc
