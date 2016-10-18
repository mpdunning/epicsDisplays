#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------

QT       += core gui

TARGET = motor
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp ../common/motordialog.cpp
SOURCES += ../common/setupdialog.cpp
HEADERS += mainwindow.h ../common/motordialog.h ../common/setupdialog.h
FORMS   += mainwindow.ui ../common/motordialog.ui ../common/setupdialog.ui

INCLUDEPATH += $$(TOOLS)/qt/myPlugins/widgets
INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
LIBS += -L$$(QTDIR)/qt/plugins/designer -lQCaPlugin
LIBS += -L$$(QTDIR)/qt/plugins/designer -lmyPlugin
RESOURCES = motorXps.qrc
