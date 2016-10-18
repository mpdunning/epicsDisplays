#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT       += widgets core gui

DESTDIR   = $$bindir
TARGET    = motors
TEMPLATE  = app

SOURCES += main.cpp mainwindow.cpp
SOURCES += motor.cpp bkhdebug.cpp motorcoef.cpp adccoef.cpp
HEADERS += mainwindow.h
HEADERS += motor.h bkhdebug.h motorcoef.h adccoef.h
FORMS   += mainwindow.ui
FORMS   += ../ui-common/motor.ui ../ui-common/bkhdebug.ui
FORMS   += ../ui-common/motorcoef.ui ../ui-common/adccoef.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEShape

LIBS += -L$$(QEFWORK)/designer -lQEPlugin
LIBS += -L$$(MYPLUGINS)/plugin -lmyPlugin
RESOURCES = motor.qrc
