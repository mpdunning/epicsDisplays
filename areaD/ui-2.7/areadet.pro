#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

DESTDIR = $$bindir
#QMAKESPEC = linux-g++
QT       += core gui

TARGET = areaDet
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

#INCLUDEPATH += $$(MYPLUGINS)/widgets
#INCLUDEPATH += $$(QEFWORK)/widgets/QEWidget
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
#INCLUDEPATH += $$(QEFWORK)/widgets/QEForm
#INCLUDEPATH += $$(QEFWORK)/api
#INCLUDEPATH += $$(QEFWORK)/data
#INCLUDEPATH += $$(QEFWORK)/common
#INCLUDEPATH += $$(QTDIR)/include/QtXml
#LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
RESOURCES = resources.qrc
