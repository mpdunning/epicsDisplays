#-------------------------------------------------
include(/opt/qt/arch.pri)

QT       += core gui

DESTDIR =$$bindir
TARGET = pico
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp picomotor.cpp \
	../common/helpbrowser.cpp ../common/mrecord.cpp \
	$$(TOOLS)/display/motor/ui/motordialog.cpp \
	$$(TOOLS)/display/motor/ui/motordetails.cpp
HEADERS += mainwindow.h picomotor.h \
	../common/helpbrowser.h ../common/mrecord.h \
	$$(TOOLS)/display/motor/ui/motordialog.h \
	$$(TOOLS)/display/motor/ui/motordetails.h
FORMS   += picomotor.ui ../common/mrecord.ui \
	$$(TOOLS)/display/motor/ui/motordialog.ui \
	$$(TOOLS)/display/motor/ui/motordetails.ui

INCLUDEPATH += ../common
INCLUDEPATH += $$(TOOLS)/display/motor/ui
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/include
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELabel
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QELineEdit
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEButton
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEForm
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEShape
INCLUDEPATH += $$(QCAFRAMEWORK)/widgets/QEComboBox
INCLUDEPATH += $$(QCAFRAMEWORK)/api/include
INCLUDEPATH += $$(QCAFRAMEWORK)/data/include
INCLUDEPATH += $$(MYPLUGINS)/widgets
LIBS += -L$$(QTPLUG) -lQEPlugin -lmyPlugin
RESOURCES = resources.qrc
