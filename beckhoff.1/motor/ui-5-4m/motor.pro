#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT       += widgets core gui

DESTDIR   = $$bindir
TARGET    = motors
TEMPLATE  = app

INCLUDEPATH += ../../common/ui

SOURCES += main.cpp mainwindow.cpp bkhdetail.cpp
SOURCES += bkhdebug.cpp ../../common/ui/adccoef2ch.cpp
SOURCES += ../../common/ui/motorctrl.cpp
HEADERS += mainwindow.h bkhdetail.h
HEADERS += bkhdebug.h ../../common/ui/adccoef2ch.h
HEADERS += ../../common/ui/motorctrl.h
FORMS   += mainwindow.ui bkhdetail.ui
FORMS   += ../../common/ui/motorctrl.ui
FORMS   += ../../common/ui/bkhdebug.ui
FORMS   += ../../common/ui/adccoef2ch.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit

RESOURCES = motor.qrc
