#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT       += widgets core gui

DESTDIR   = $$bindir
TARGET    = motors
TEMPLATE  = app

INCLUDEPATH += ../../common/ui

SOURCES += main.cpp mainwindow.cpp
SOURCES += ../../common/ui/motor.cpp
SOURCES += ../../common/ui/bkhdebug.cpp
SOURCES += ../../common/ui/adccoef.cpp
HEADERS += mainwindow.h
HEADERS += ../../common/ui/motor.h
HEADERS += ../../common/ui/bkhdebug.h
HEADERS += ../../common/ui/adccoef.h
FORMS   += mainwindow.ui
FORMS   += ../../common/ui/motor.ui ../../common/ui/bkhdebug.ui
FORMS   += ../../common/ui/adccoef.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEShape

RESOURCES = motor.qrc
