/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jan 29 20:10:08 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "knob.h"
#include "xygraph.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    Knob *knob;
    XYGraph *xygraph;
    QGroupBox *scopeArea;
    Knob *knob_3;
    Knob *knob_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(714, 484);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        knob = new Knob(centralwidget);
        knob->setObjectName(QString::fromUtf8("knob"));
        knob->setGeometry(QRect(560, 100, 60, 60));
        knob->setSubscribe(true);
        knob->setKnobStyle(Knob::Sunken);
        knob->setBorderWidth(3);
        knob->setHaveScale(false);
        knob->setProperty("minValue", QVariant(-4));
        knob->setProperty("maxValue", QVariant(4));
        knob->setProperty("valueIncrement", QVariant(0.1));
        xygraph = new XYGraph(centralwidget);
        xygraph->setObjectName(QString::fromUtf8("xygraph"));
        xygraph->setGeometry(QRect(60, 60, 400, 300));
        xygraph->setFrameShadow(QFrame::Plain);
        xygraph->setLineWidth(0);
        xygraph->setTraceColor1(QColor(255, 184, 17));
        xygraph->setTraceColor2(QColor(165, 219, 255));
        xygraph->setTraceColor3(QColor(255, 85, 255));
        xygraph->setTraceColor4(QColor(0, 255, 0));
        xygraph->setAutoScaleX(false);
        xygraph->setXMax(500);
        xygraph->setAxisEnableX(false);
        xygraph->setProperty("gridEnableMajorX", QVariant(true));
        xygraph->setProperty("gridNTicksMajorX", QVariant(10));
        xygraph->setAutoScaleY(false);
        xygraph->setYMin(-4);
        xygraph->setYMax(4);
        xygraph->setAxisEnableY(false);
        xygraph->setProperty("gridEnableMajorY", QVariant(true));
        xygraph->setProperty("gridNTicksMajorY", QVariant(8));
        xygraph->setProperty("gridMajorColor", QVariant(QColor(116, 116, 173)));
        xygraph->setBackgroundColor(QColor(62, 62, 86));
        scopeArea = new QGroupBox(centralwidget);
        scopeArea->setObjectName(QString::fromUtf8("scopeArea"));
        scopeArea->setGeometry(QRect(16, 16, 497, 389));
        knob_3 = new Knob(centralwidget);
        knob_3->setObjectName(QString::fromUtf8("knob_3"));
        knob_3->setGeometry(QRect(560, 240, 60, 60));
        knob_3->setSubscribe(true);
        knob_3->setKnobStyle(Knob::Sunken);
        knob_3->setBorderWidth(3);
        knob_3->setHaveScale(false);
        knob_3->setProperty("minValue", QVariant(-4));
        knob_3->setProperty("maxValue", QVariant(4));
        knob_2 = new Knob(centralwidget);
        knob_2->setObjectName(QString::fromUtf8("knob_2"));
        knob_2->setGeometry(QRect(560, 168, 60, 60));
        knob_2->setSubscribe(true);
        knob_2->setKnobStyle(Knob::Sunken);
        knob_2->setBorderWidth(3);
        knob_2->setHaveScale(false);
        knob_2->setProperty("minValue", QVariant(-4));
        knob_2->setProperty("maxValue", QVariant(4));
        knob_2->setProperty("valueIncrement", QVariant(0.1));
        MainWindow->setCentralWidget(centralwidget);
        scopeArea->raise();
        knob->raise();
        xygraph->raise();
        knob_3->raise();
        knob_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 714, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "quit", 0, QApplication::UnicodeUTF8));
        knob->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:SC:CH0:POS", 0, QApplication::UnicodeUTF8)));
        knob->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:SC02", 0, QApplication::UnicodeUTF8)));
        xygraph->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):WF:CH0:TRACE", 0, QApplication::UnicodeUTF8)));
        xygraph->setProperty("variable2", QVariant(QApplication::translate("MainWindow", "$(P):WF:CH1:TRACE", 0, QApplication::UnicodeUTF8)));
        xygraph->setProperty("variable3", QVariant(QApplication::translate("MainWindow", "$(P):WF:CH2:TRACE", 0, QApplication::UnicodeUTF8)));
        xygraph->setProperty("variable4", QVariant(QApplication::translate("MainWindow", "$(P):WF:CH3:TRACE", 0, QApplication::UnicodeUTF8)));
        xygraph->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:SC02", 0, QApplication::UnicodeUTF8)));
        scopeArea->setTitle(QString());
        knob_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:SC:CH2:POS", 0, QApplication::UnicodeUTF8)));
        knob_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:SC02", 0, QApplication::UnicodeUTF8)));
        knob_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:SC:CH1:POS", 0, QApplication::UnicodeUTF8)));
        knob_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:SC02", 0, QApplication::UnicodeUTF8)));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
