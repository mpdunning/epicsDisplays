#-------------------------------------------------
include($$(QTARCHDIR)/arch.pri)
include($$(QTROOT)/common/commonApp.pri)

QT       += widgets core gui

DESTDIR = $$bindir
TARGET = saveRestore
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

#INCLUDEPATH += $$(MYPLUGINS)/widgets
#INCLUDEPATH += $$(QEFWORK)/plugins/include
#INCLUDEPATH += $$(QEFWORK)/widgets/include
#INCLUDEPATH += $$(QEFWORK)/widgets/QEWidget
INCLUDEPATH += $$(QTDIR)/include/QtDesigner
INCLUDEPATH += $$(QEFWORK)/widgets/QEFileBrowser
INCLUDEPATH += $$(QEFWORK)/widgets/QELabel
INCLUDEPATH += $$(QEFWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEButton
INCLUDEPATH += $$(QEFWORK)/widgets/QELineEdit
#INCLUDEPATH += $$(QEFWORK)/widgets/QEForm
INCLUDEPATH += $$(QEFWORK)/widgets/QESpinBox
INCLUDEPATH += $$(QEFWORK)/widgets/QEBitStatus
#INCLUDEPATH += $$(QEFWORK)/api
#INCLUDEPATH += $$(QEFWORK)/data
#INCLUDEPATH += $$(QWTDIR)/src
#INCLUDEPATH += $$(QEFWORK)/common
#INCLUDEPATH += $$(QTDIR)/include/QtXml

LIBS += -L$$(QEFWORK)/designer -lQEPlugin
LIBS += -L$$(MYPLUGINS)/plugin -lmyPlugin

#LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
#LIBS += -L$$(QTPLUG) -lQEPlugin
RESOURCES = resources.qrc
