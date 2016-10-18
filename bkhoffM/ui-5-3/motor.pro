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
FORMS   += mainwindow.ui
FORMS   += hidden.ui controlm.ui
FORMS   += ../ui-common/motor.ui
FORMS   += ../ui-common/control.ui ../ui-common/csr.ui
FORMS   += ../ui-common/readreg.ui ../ui-common/feature.ui
FORMS   += ../ui-common/writeram.ui ../ui-common/writeeep.ui
FORMS   += ../ui-common/adcdac.ui ../ui-common/setupadc.ui
FORMS   += ../ui-common/bk9000.ui ../ui-common/bkhdebug.ui

INCLUDEPATH += $$(EPICS_BASE)/include
INCLUDEPATH += $$(EPICS_BASE)/include/os/Linux
INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEShape

RESOURCES = motor.qrc
