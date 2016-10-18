#-------------------------------------------------
include(/opt/qt/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT       += widgets core gui

DESTDIR = $$bindir
TARGET = motors
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp motordialog.cpp motordetails.cpp
HEADERS += mainwindow.h motordialog.h motordetails.h
FORMS   += mainwindow.ui motordialog.ui motordetails.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QEShape
INCLUDEPATH += $$(QEFWORK)/widgets/QEForm

LIBS += -L$$(QEFWORK)/designer -lQEPlugin
LIBS += -L$$(MYPLUGINS)/plugin -lmyPlugin
RESOURCES = motor.qrc
