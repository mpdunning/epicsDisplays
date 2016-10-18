/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "QELabel.h"
#include "QELineEdit.h"
#include "abutton.h"
#include "cabutton.h"
#include "caxyplot.h"
#include "xyplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    CAButton *cabutton_2;
    CAXYPlot *caxyplot;
    CAButton *cabutton;
    QLabel *label;
    QELabel *qelabel_2;
    QELabel *qelabel;
    QLabel *label_2;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QELabel *qelabel_3;
    QELineEdit *qelineedit;
    QELabel *qelabel_4;
    QELineEdit *qelineedit_2;
    QELabel *qelabel_5;
    QELineEdit *qelineedit_3;
    QELineEdit *qelineedit_4;
    QELabel *qelabel_6;
    QELabel *qelabel_7;
    QELabel *qelabel_8;
    QELabel *qelabel_9;
    QELabel *qelabel_10;
    QELabel *qelabel_11;
    QELabel *qelabel_12;
    CAButton *cabutton_3;
    QGroupBox *groupBox_2;
    QELabel *qelabel_13;
    QELineEdit *qelineedit_5;
    QELabel *qelabel_14;
    QELineEdit *qelineedit_6;
    QELabel *qelabel_15;
    QELineEdit *qelineedit_7;
    QELineEdit *qelineedit_8;
    QELabel *qelabel_16;
    QELabel *qelabel_17;
    QELabel *qelabel_18;
    QELabel *qelabel_19;
    QELabel *qelabel_20;
    QELabel *qelabel_21;
    QELabel *qelabel_22;
    QELabel *qelabel_23;
    QELineEdit *qelineedit_9;
    CAButton *cabutton_4;
    QPushButton *xyMotPB;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(411, 377);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 4, 393, 323));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(142, 6, 63, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cabutton_2 = new CAButton(tab);
        cabutton_2->setObjectName(QStringLiteral("cabutton_2"));
        cabutton_2->setGeometry(QRect(212, 28, 56, 20));
        cabutton_2->setSubscribe(true);
        cabutton_2->setLiteralLabel(true);
        caxyplot = new CAXYPlot(tab);
        caxyplot->setObjectName(QStringLiteral("caxyplot"));
        caxyplot->setGeometry(QRect(12, 70, 200, 200));
        caxyplot->setFrameShadow(false);
        caxyplot->setAutoScaleX(false);
        caxyplot->setAxisEnableX(true);
        caxyplot->setProperty("gridEnableMajorX", QVariant(true));
        caxyplot->setProperty("gridEnableMinorX", QVariant(true));
        caxyplot->setXMin(0);
        caxyplot->setXMax(30);
        caxyplot->setNTicksMajorX(3);
        caxyplot->setAutoScaleY(false);
        caxyplot->setProperty("gridEnableMajorY", QVariant(true));
        caxyplot->setProperty("gridEnableMinorY", QVariant(true));
        caxyplot->setYMin(0);
        caxyplot->setYMax(30);
        caxyplot->setNTicksMajorY(3);
        caxyplot->setProperty("gridMajorColor", QVariant(QColor(210, 210, 215)));
        caxyplot->setProperty("gridMinorColor", QVariant(QColor(210, 210, 215)));
        caxyplot->setTraceColor(QColor(255, 0, 0));
        caxyplot->setProperty("traceStyle", QVariant(XYPlot::Dots));
        caxyplot->setPointStyle(XYPlot::Ellipse);
        caxyplot->setDisplayAlarmState(false);
        caxyplot->setProperty("refreshOnXandY", QVariant(false));
        caxyplot->setProperty("waveform", QVariant(false));
        cabutton = new CAButton(tab);
        cabutton->setObjectName(QStringLiteral("cabutton"));
        cabutton->setGeometry(QRect(212, 6, 56, 20));
        cabutton->setCheckable(true);
        cabutton->setProperty("writeOnPress", QVariant(false));
        cabutton->setProperty("writeOnClick", QVariant(true));
        cabutton->setSubscribe(true);
        cabutton->setLiteralLabel(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(22, 8, 16, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2 = new QELabel(tab);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(40, 30, 81, 16));
        qelabel_2->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        qelabel = new QELabel(tab);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(40, 8, 81, 16));
        qelabel->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(22, 30, 16, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 8, 373, 121));
        qelabel_3 = new QELabel(groupBox);
        qelabel_3->setObjectName(QStringLiteral("qelabel_3"));
        qelabel_3->setGeometry(QRect(14, 26, 119, 20));
        qelabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_3->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelineedit = new QELineEdit(groupBox);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(140, 26, 51, 20));
        qelineedit->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelabel_4 = new QELabel(groupBox);
        qelabel_4->setObjectName(QStringLiteral("qelabel_4"));
        qelabel_4->setGeometry(QRect(14, 50, 119, 20));
        qelabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_4->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelineedit_2 = new QELineEdit(groupBox);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(140, 50, 51, 20));
        qelineedit_2->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelabel_5 = new QELabel(groupBox);
        qelabel_5->setObjectName(QStringLiteral("qelabel_5"));
        qelabel_5->setGeometry(QRect(14, 74, 119, 20));
        qelabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelineedit_3 = new QELineEdit(groupBox);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(140, 74, 51, 20));
        qelineedit_3->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelineedit_4 = new QELineEdit(groupBox);
        qelineedit_4->setObjectName(QStringLiteral("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(280, 26, 51, 20));
        qelineedit_4->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelabel_6 = new QELabel(groupBox);
        qelabel_6->setObjectName(QStringLiteral("qelabel_6"));
        qelabel_6->setGeometry(QRect(196, 26, 80, 20));
        qelabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_6->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_7 = new QELabel(groupBox);
        qelabel_7->setObjectName(QStringLiteral("qelabel_7"));
        qelabel_7->setGeometry(QRect(196, 50, 80, 20));
        qelabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_7->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_8 = new QELabel(groupBox);
        qelabel_8->setObjectName(QStringLiteral("qelabel_8"));
        qelabel_8->setGeometry(QRect(196, 74, 80, 20));
        qelabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_8->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_9 = new QELabel(groupBox);
        qelabel_9->setObjectName(QStringLiteral("qelabel_9"));
        qelabel_9->setGeometry(QRect(280, 50, 26, 20));
        qelabel_9->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        qelabel_9->setRadix(16u);
        qelabel_10 = new QELabel(groupBox);
        qelabel_10->setObjectName(QStringLiteral("qelabel_10"));
        qelabel_10->setGeometry(QRect(280, 74, 26, 20));
        qelabel_10->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        qelabel_10->setRadix(16u);
        qelabel_11 = new QELabel(groupBox);
        qelabel_11->setObjectName(QStringLiteral("qelabel_11"));
        qelabel_11->setGeometry(QRect(196, 98, 80, 20));
        qelabel_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_11->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_12 = new QELabel(groupBox);
        qelabel_12->setObjectName(QStringLiteral("qelabel_12"));
        qelabel_12->setGeometry(QRect(280, 98, 26, 20));
        qelabel_12->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        qelabel_12->setRadix(10u);
        cabutton_3 = new CAButton(groupBox);
        cabutton_3->setObjectName(QStringLiteral("cabutton_3"));
        cabutton_3->setGeometry(QRect(334, 26, 31, 20));
        cabutton_3->setSubscribe(true);
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 134, 373, 125));
        qelabel_13 = new QELabel(groupBox_2);
        qelabel_13->setObjectName(QStringLiteral("qelabel_13"));
        qelabel_13->setGeometry(QRect(14, 24, 119, 20));
        qelabel_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_13->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelineedit_5 = new QELineEdit(groupBox_2);
        qelineedit_5->setObjectName(QStringLiteral("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(140, 24, 51, 20));
        qelineedit_5->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelabel_14 = new QELabel(groupBox_2);
        qelabel_14->setObjectName(QStringLiteral("qelabel_14"));
        qelabel_14->setGeometry(QRect(20, 48, 113, 20));
        qelabel_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_14->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelineedit_6 = new QELineEdit(groupBox_2);
        qelineedit_6->setObjectName(QStringLiteral("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(140, 48, 51, 20));
        qelineedit_6->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelabel_15 = new QELabel(groupBox_2);
        qelabel_15->setObjectName(QStringLiteral("qelabel_15"));
        qelabel_15->setGeometry(QRect(50, 72, 83, 20));
        qelabel_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_15->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelineedit_7 = new QELineEdit(groupBox_2);
        qelineedit_7->setObjectName(QStringLiteral("qelineedit_7"));
        qelineedit_7->setGeometry(QRect(140, 72, 51, 20));
        qelineedit_7->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelineedit_8 = new QELineEdit(groupBox_2);
        qelineedit_8->setObjectName(QStringLiteral("qelineedit_8"));
        qelineedit_8->setGeometry(QRect(280, 24, 51, 20));
        qelineedit_8->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qelabel_16 = new QELabel(groupBox_2);
        qelabel_16->setObjectName(QStringLiteral("qelabel_16"));
        qelabel_16->setGeometry(QRect(196, 24, 80, 20));
        qelabel_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_16->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_17 = new QELabel(groupBox_2);
        qelabel_17->setObjectName(QStringLiteral("qelabel_17"));
        qelabel_17->setGeometry(QRect(196, 48, 80, 20));
        qelabel_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_17->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_18 = new QELabel(groupBox_2);
        qelabel_18->setObjectName(QStringLiteral("qelabel_18"));
        qelabel_18->setGeometry(QRect(196, 72, 80, 20));
        qelabel_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_18->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_19 = new QELabel(groupBox_2);
        qelabel_19->setObjectName(QStringLiteral("qelabel_19"));
        qelabel_19->setGeometry(QRect(280, 48, 26, 20));
        qelabel_19->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        qelabel_19->setRadix(16u);
        qelabel_20 = new QELabel(groupBox_2);
        qelabel_20->setObjectName(QStringLiteral("qelabel_20"));
        qelabel_20->setGeometry(QRect(280, 72, 26, 20));
        qelabel_20->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        qelabel_20->setRadix(16u);
        qelabel_21 = new QELabel(groupBox_2);
        qelabel_21->setObjectName(QStringLiteral("qelabel_21"));
        qelabel_21->setGeometry(QRect(196, 96, 80, 20));
        qelabel_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_21->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelabel_22 = new QELabel(groupBox_2);
        qelabel_22->setObjectName(QStringLiteral("qelabel_22"));
        qelabel_22->setGeometry(QRect(280, 96, 26, 20));
        qelabel_22->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        qelabel_22->setRadix(10u);
        qelabel_23 = new QELabel(groupBox_2);
        qelabel_23->setObjectName(QStringLiteral("qelabel_23"));
        qelabel_23->setGeometry(QRect(50, 96, 83, 20));
        qelabel_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_23->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelineedit_9 = new QELineEdit(groupBox_2);
        qelineedit_9->setObjectName(QStringLiteral("qelineedit_9"));
        qelineedit_9->setGeometry(QRect(140, 96, 51, 20));
        qelineedit_9->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        cabutton_4 = new CAButton(groupBox_2);
        cabutton_4->setObjectName(QStringLiteral("cabutton_4"));
        cabutton_4->setGeometry(QRect(334, 24, 31, 20));
        cabutton_4->setSubscribe(true);
        xyMotPB = new QPushButton(tab_2);
        xyMotPB->setObjectName(QStringLiteral("xyMotPB"));
        xyMotPB->setGeometry(QRect(270, 266, 80, 23));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 411, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        label_3->setText(QApplication::translate("MainWindow", "Rastering", 0));
        cabutton_2->setOnText(QApplication::translate("MainWindow", "1", 0));
        cabutton_2->setOffText(QApplication::translate("MainWindow", "0", 0));
        cabutton_2->setOnLabel(QApplication::translate("MainWindow", "Reset", 0));
        cabutton_2->setOffLabel(QApplication::translate("MainWindow", "Reset", 0));
        cabutton_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:RESET.RVAL", 0)));
        cabutton_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        caxyplot->setProperty("XVariable", QVariant(QApplication::translate("MainWindow", "$(P):AI:X:POS", 0)));
        caxyplot->setProperty("YVariable", QVariant(QApplication::translate("MainWindow", "$(P):AI:Y:POS", 0)));
        caxyplot->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        cabutton->setOnText(QApplication::translate("MainWindow", "ON", 0));
        cabutton->setOffText(QApplication::translate("MainWindow", "OFF", 0));
        cabutton->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:START", 0)));
        cabutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        label->setText(QApplication::translate("MainWindow", "X", 0));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AI:Y:POS", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AI:X:POS", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        label_2->setText(QApplication::translate("MainWindow", "Y", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Raster", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "X Axis", 0));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:X0.DESC", 0)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:X0", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:X1.DESC", 0)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:X1", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:X:VELO.DESC", 0)));
        qelabel_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:X:VELO", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:X:SET", 0)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AI:X:SET.DESC", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_7->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:X:SBYTE.DESC", 0)));
        qelabel_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_8->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:X:SWORD.DESC", 0)));
        qelabel_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_9->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:X:SBYTE", 0)));
        qelabel_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_10->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:X:SWORD", 0)));
        qelabel_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_11->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:X:MOV.DESC", 0)));
        qelabel_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_12->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:X:MOV", 0)));
        qelabel_12->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        cabutton_3->setOnText(QApplication::translate("MainWindow", "1", 0));
        cabutton_3->setOffText(QApplication::translate("MainWindow", "0", 0));
        cabutton_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:X:GO", 0)));
        cabutton_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Y Axis", 0));
        qelabel_13->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:Y0.DESC", 0)));
        qelabel_13->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:Y0", 0)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_14->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:Y1.DESC", 0)));
        qelabel_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_6->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:Y1", 0)));
        qelineedit_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_15->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:Y:INC.DESC", 0)));
        qelabel_15->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_7->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:Y:INC", 0)));
        qelineedit_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_8->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:Y:SET", 0)));
        qelineedit_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_16->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AI:Y:SET.DESC", 0)));
        qelabel_16->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_17->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:Y:SBYTE.DESC", 0)));
        qelabel_17->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_18->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:Y:SWORD.DESC", 0)));
        qelabel_18->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_19->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:Y:SBYTE", 0)));
        qelabel_19->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_20->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:Y:SWORD", 0)));
        qelabel_20->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_21->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:Y:MOV.DESC", 0)));
        qelabel_21->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_22->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:Y:MOV", 0)));
        qelabel_22->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelabel_23->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:Y:VELO.DESC", 0)));
        qelabel_23->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        qelineedit_9->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:Y:VELO", 0)));
        qelineedit_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        cabutton_4->setOnText(QApplication::translate("MainWindow", "1", 0));
        cabutton_4->setOffText(QApplication::translate("MainWindow", "0", 0));
        cabutton_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:Y:GO", 0)));
        cabutton_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA:XYM", 0)));
        xyMotPB->setText(QApplication::translate("MainWindow", "XY Motors", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Setup", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
