#---------------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

DESTDIR = $$bindir
TEMPLATE = app
TARGET = bkhoff
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += mainwindow.h
SOURCES += mainwindow.cpp main.cpp
FORMS   += mainwindow.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QESlider

RESOURCES = resources.qrc
