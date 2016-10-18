#---------------------------------------------------------
include(/opt/qt/arch.pri)

DESTDIR = $$bindir
TEMPLATE = app
TARGET = video
QT += multimedia

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
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEImage
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEShape
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QCAFRAMEWORK)/common
INCLUDEPATH += $$(QTDIR)/include/QtXml
INCLUDEPATH += $$(QWTDIR)/src
INCLUDEPATH += $$(MYPLUGINS)/widgets
LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
RESOURCES = video.qrc
