#---------------------------------------------------------
include(/opt/qt/arch.pri)

DESTDIR = $$bindir
TEMPLATE = app
TARGET = tds3x
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += mainwindow.h
SOURCES += mainwindow.cpp main.cpp
FORMS   += mainwindow.ui

INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(QWTDIR)/src
INCLUDEPATH += $$(MYPLUGINS)/widgets
LIBS += -L$$(QCAFRAMEWORK)/plugins -lQCaPlugin
LIBS += -L$$(QTPLUG) -lmyPlugin
RESOURCES = tds3x.qrc
