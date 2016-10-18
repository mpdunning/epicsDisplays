#---------------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

DESTDIR      = $$bindir
TEMPLATE     = app
TARGET       = bkhoff
QT          += widgets core gui
DEPENDPATH  += .
INCLUDEPATH += .
INCLUDEPATH += ../../common/ui

# Input
HEADERS += mainwindow.h
HEADERS += ../../common/ui/adcchctrl.h
HEADERS += ../../common/ui/alarmLevels.h
HEADERS += ../../common/ui/bkhdebug.h
SOURCES += mainwindow.cpp main.cpp
SOURCES += ../../common/ui/adcchctrl.cpp
SOURCES += ../../common/ui/alarmLevels.cpp
SOURCES += ../../common/ui/bkhdebug.cpp
FORMS   += mainwindow.ui
FORMS   += ../../common/ui/adcchctrl.ui
FORMS   += ../../common/ui/alarmLevels.ui
FORMS   += ../../common/ui/bkhdebug.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QESlider

RESOURCES = resources.qrc
