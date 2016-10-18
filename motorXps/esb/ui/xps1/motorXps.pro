#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T20:21:39
#
#-------------------------------------------------

QT       += core gui

TARGET = motor
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp
SOURCES += ../common/motordialog.cpp
SOURCES += ../common/setupdialog.cpp ../common/phasedialog.cpp
HEADERS += mainwindow.h ../common/motordialog.h
HEADERS += ../common/setupdialog.h ../common/phasedialog.h
FORMS   += mainwindow.ui ../common/motordialog.ui
FORMS   += ../common/setupdialog.ui ../common/phasedialog.ui

INCLUDEPATH += $$(TOOLS)/qt/myPlugins/widgets
INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
LIBS += -L$$(QTDIR)/qt/plugins/designer -lQCaPlugin
LIBS += -L$$(QTDIR)/qt/plugins/designer -lmyPlugin
RESOURCES = motorXps.qrc
