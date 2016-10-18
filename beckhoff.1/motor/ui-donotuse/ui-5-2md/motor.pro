#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT       += widgets core gui

DESTDIR = $$bindir
TARGET = motors
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
SOURCES += hidden.cpp
SOURCES += ../../common/ui/motor.cpp
SOURCES += ../../common/ui/control.cpp
SOURCES += ../../common/ui/csr.cpp
SOURCES += ../../common/ui/home.cpp
SOURCES += ../../common/ui/readreg.cpp
SOURCES += ../../common/ui/feature.cpp
SOURCES += ../../common/ui/writeram.cpp
SOURCES += ../../common/ui/writeeep.cpp
SOURCES += ../../common/ui/adccoef.cpp
SOURCES += ../../common/ui/adcdac2m.cpp
SOURCES += ../../common/ui/bk9000.cpp
SOURCES += ../../common/ui/bkhdebug.cpp
HEADERS += mainwindow.h
HEADERS += hidden.h
HEADERS += ../../common/ui/motor.h
HEADERS += ../../common/ui/control.h
HEADERS += ../../common/ui/csr.h
HEADERS += ../../common/ui/home.h
HEADERS += ../../common/ui/readreg.h
HEADERS += ../../common/ui/feature.h
HEADERS += ../../common/ui/writeram.h
HEADERS += ../../common/ui/writeeep.h
HEADERS += ../../common/ui/adccoef.h
HEADERS += ../../common/ui/adcdac2m.h
HEADERS += ../../common/ui/bk9000.h
HEADERS += ../../common/ui/bkhdebug.h
FORMS   += mainwindow.ui
FORMS   += hidden.ui
FORMS   += ../../common/ui/control.ui
FORMS   += ../../common/ui/controlsa.ui
FORMS   += ../../common/ui/csr.ui
FORMS   += ../../common/ui/csrsa.ui
FORMS   += ../../common/ui/home.ui
FORMS   += ../../common/ui/homesa.ui
FORMS   += ../../common/ui/readreg.ui
FORMS   += ../../common/ui/readregsa.ui
FORMS   += ../../common/ui/writeram.ui
FORMS   += ../../common/ui/writeramsa.ui
FORMS   += ../../common/ui/writeeep.ui
FORMS   += ../../common/ui/writeeepsa.ui
FORMS   += ../../common/ui/feature.ui
FORMS   += ../../common/ui/featuresa.ui
FORMS   += ../../common/ui/adccoef.ui
FORMS   += ../../common/ui/adcdac2m.ui
FORMS   += ../../common/ui/adcdac2msa.ui
FORMS   += ../../common/ui/bk9000.ui
FORMS   += ../../common/ui/bk9000sa.ui
FORMS   += ../../common/ui/motor.ui
FORMS   += ../../common/ui/bkhdebug.ui

INCLUDEPATH += ../../common/ui
INCLUDEPATH += $$(EPICS_BASE)/include
INCLUDEPATH += $$(EPICS_BASE)/include/os/Linux
INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEShape

RESOURCES = motor.qrc
