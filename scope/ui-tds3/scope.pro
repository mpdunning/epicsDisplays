#---------------------------------------------------------
include(/opt/qt/arch.pri)
include(/afs/slac/g/testfac/tools/qt/common/commonApp.pri)

QT          += widgets core gui
DESTDIR      = $$bindir
TEMPLATE     = app
TARGET       = scope

# Input
HEADERS     += mainwindow.h
SOURCES     += mainwindow.cpp main.cpp
FORMS       += mainwindow.ui

INCLUDEPATH += $$(QEFWORK)/widgets/QESlider
INCLUDEPATH += $$(QEFWORK)/widgets/QEWidget
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QWTDIR)/src
DEPENDPATH  += $$(QWTDIR)/src
LIBS += -L$$(QEFWORK)/designer -lQEPlugin
LIBS += -L$$(MYPLUGINS)/plugin -lmyPlugin
LIBS += -L$$(QWTDIR)/lib -lqwt

RESOURCES = scope.qrc
