#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT       += widgets core gui

DESTDIR = $$bindir
TARGET = motors
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
SOURCES += motor.cpp control.cpp csr.cpp readreg.cpp
SOURCES += feature.cpp writeram.cpp writeeep.cpp adcdac.cpp
SOURCES += setupadc.cpp hidden.cpp bk9000.cpp bkhdebug.cpp
HEADERS += mainwindow.h motor.h
HEADERS += control.h csr.h readreg.h
HEADERS += feature.h writeram.h writeeep.h adcdac.h
HEADERS += setupadc.h hidden.h bk9000.h bkhdebug.h
FORMS   += mainwindow.ui motor.ui
FORMS   += control.ui csr.ui readreg.ui
FORMS   += feature.ui writeram.ui writeeep.ui adcdac.ui
FORMS   += setupadc.ui hidden.ui bk9000.ui bkhdebug.ui

INCLUDEPATH += $$(EPICS_BASE)/include
INCLUDEPATH += $$(EPICS_BASE)/include/os/Linux
INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEShape

RESOURCES = motor.qrc
