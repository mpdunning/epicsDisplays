#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/common.pri)

DESTDIR = $$bindir

QT       += core gui

TARGET = imageQT
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEWidget
INCLUDEPATH += $$(QEFWORK)/widgets/QEForm
INCLUDEPATH += $$(QEFWORK)/widgets/QEImage
INCLUDEPATH += $$(QEFWORK)/api
INCLUDEPATH += $$(QEFWORK)/data
INCLUDEPATH += $$(QEFWORK)/common
INCLUDEPATH += $$(QTDIR)/include/QtXml
INCLUDEPATH += $$(QWTDIR)/src
LIBS += -L$$(QTPLUG) -lQEPlugin
RESOURCES = resources.qrc
