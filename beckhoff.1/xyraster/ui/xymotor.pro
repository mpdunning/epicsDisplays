#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT       += widgets core gui

DESTDIR   = $$bindir
TARGET    = xymotor
TEMPLATE  = app

#INCLUDEPATH += ../../common/ui-bkh

SOURCES += main.cpp mainwindow.cpp
HEADERS += mainwindow.h
FORMS   += mainwindow.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit

LIBS += -L$$(QEFWORK)/designer -lQEPlugin
LIBS += -L$$(MYPLUGINS)/plugin -lmyPlugin
RESOURCES = xymotor.qrc
