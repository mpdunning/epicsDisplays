#-------------------------------------------------
include(/opt/qt/arch.pri)

QT       += core gui

DESTDIR = $$bindir
TARGET = pico
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp picomotor.cpp \
	../common/helpbrowser.cpp ../common/mrecord.cpp \
	$$(TOOLS)/display/motor/ui-2.0/motordialog.cpp \
	$$(TOOLS)/display/motor/ui-2.0/motordetails.cpp
HEADERS += mainwindow.h picomotor.h \
	../common/helpbrowser.h ../common/mrecord.h \
	$$(TOOLS)/display/motor/ui-2.0/motordialog.h \
	$$(TOOLS)/display/motor/ui-2.0/motordetails.h
FORMS   += picomotor.ui ../common/mrecord.ui \
	$$(TOOLS)/display/motor/ui-2.0/motordialog.ui \
	$$(TOOLS)/display/motor/ui-2.0/motordetails.ui

INCLUDEPATH += ../common
INCLUDEPATH += $$(TOOLS)/display/motor/ui
INCLUDEPATH += $$(MYPLUGINS)/widgets
INCLUDEPATH += $$(QCAFRAMEWORK)/plugins/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEShape
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
RESOURCES = pico.qrc
