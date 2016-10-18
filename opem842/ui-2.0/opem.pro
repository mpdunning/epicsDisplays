#-------------------------------------------------
include(/opt/qt/arch.pri)

QT       += core gui

DESTDIR = $$bindir
TARGET = opem
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
LIBS += -L$$(QTPLUG) -lQEPlugin
RESOURCES = resources.qrc
