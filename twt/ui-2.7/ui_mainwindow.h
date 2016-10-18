/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
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
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "QCaComboBoxPlugin.h"
#include "QCaLabelPlugin.h"
#include "QCaLineEditPlugin.h"
#include "QCaPushButtonPlugin.h"
#include "QCaShapePlugin.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QCaLineEditPlugin *qcalineeditplugin;
    QCaLineEditPlugin *qcalineeditplugin_2;
    QCaPushButtonPlugin *qcapushbuttonplugin;
    QCaPushButtonPlugin *qcapushbuttonplugin_2;
    QCaPushButtonPlugin *qcapushbuttonplugin_8;
    QCaShapePlugin *qcashapeplugin;
    QCaShapePlugin *qcashapeplugin_2;
    QCaShapePlugin *qcashapeplugin_3;
    QCaShapePlugin *qcashapeplugin_4;
    QCaShapePlugin *qcashapeplugin_5;
    QCaShapePlugin *qcashapeplugin_6;
    QCaShapePlugin *qcashapeplugin_7;
    QGroupBox *groupBox;
    QCaPushButtonPlugin *qcapushbuttonplugin_10;
    QCaPushButtonPlugin *qcapushbuttonplugin_9;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *tab_2;
    QCaLineEditPlugin *qcalineeditplugin_3;
    QCaLineEditPlugin *qcalineeditplugin_4;
    QCaLineEditPlugin *qcalineeditplugin_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QCaPushButtonPlugin *qcapushbuttonplugin_3;
    QCaPushButtonPlugin *qcapushbuttonplugin_4;
    QCaPushButtonPlugin *qcapushbuttonplugin_5;
    QLabel *label_15;
    QWidget *tab_3;
    QCaComboBoxPlugin *qcacomboboxplugin;
    QCaComboBoxPlugin *qcacomboboxplugin_2;
    QLabel *label_11;
    QLabel *label_12;
    QCaPushButtonPlugin *qcapushbuttonplugin_13;
    QCaLabelPlugin *qcalabelplugin;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(365, 314);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(4, 4, 357, 265));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(8, 12, 56, 15));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(8, 40, 56, 15));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(8, 68, 56, 15));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 108, 64, 15));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 136, 64, 15));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 164, 64, 15));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 192, 64, 15));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalineeditplugin = new QCaLineEditPlugin(tab);
        qcalineeditplugin->setObjectName(QString::fromUtf8("qcalineeditplugin"));
        qcalineeditplugin->setGeometry(QRect(148, 20, 77, 20));
        qcalineeditplugin->setAddUnits(false);
        qcalineeditplugin->setProperty("format", QVariant(QCaLineEditPlugin::Floating));
        qcalineeditplugin_2 = new QCaLineEditPlugin(tab);
        qcalineeditplugin_2->setObjectName(QString::fromUtf8("qcalineeditplugin_2"));
        qcalineeditplugin_2->setGeometry(QRect(148, 44, 77, 20));
        qcalineeditplugin_2->setAddUnits(false);
        qcalineeditplugin_2->setProperty("format", QVariant(QCaLineEditPlugin::Floating));
        qcapushbuttonplugin = new QCaPushButtonPlugin(tab);
        qcapushbuttonplugin->setObjectName(QString::fromUtf8("qcapushbuttonplugin"));
        qcapushbuttonplugin->setGeometry(QRect(256, 20, 20, 20));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        qcapushbuttonplugin->setFont(font);
        qcapushbuttonplugin_2 = new QCaPushButtonPlugin(tab);
        qcapushbuttonplugin_2->setObjectName(QString::fromUtf8("qcapushbuttonplugin_2"));
        qcapushbuttonplugin_2->setGeometry(QRect(256, 44, 20, 20));
        qcapushbuttonplugin_2->setFont(font);
        qcapushbuttonplugin_8 = new QCaPushButtonPlugin(tab);
        qcapushbuttonplugin_8->setObjectName(QString::fromUtf8("qcapushbuttonplugin_8"));
        qcapushbuttonplugin_8->setGeometry(QRect(212, 80, 64, 28));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        qcapushbuttonplugin_8->setFont(font1);
        qcashapeplugin = new QCaShapePlugin(tab);
        qcashapeplugin->setObjectName(QString::fromUtf8("qcashapeplugin"));
        qcashapeplugin->setGeometry(QRect(72, 12, 18, 18));
        qcashapeplugin->setProperty("animation1", QVariant(QCaShapePlugin::ColourValue));
        qcashapeplugin->setProperty("animation6", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin->setProperty("scale1", QVariant(190));
        qcashapeplugin->setProperty("offset1", QVariant(60));
        qcashapeplugin->setProperty("shape", QVariant(QCaShapePlugin::Ellipse));
        qcashapeplugin->setProperty("point2", QVariant(QPoint(16, 16)));
        qcashapeplugin->setProperty("color1", QVariant(QColor(255, 100, 48)));
        qcashapeplugin_2 = new QCaShapePlugin(tab);
        qcashapeplugin_2->setObjectName(QString::fromUtf8("qcashapeplugin_2"));
        qcashapeplugin_2->setGeometry(QRect(72, 40, 18, 18));
        qcashapeplugin_2->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_2->setProperty("scale1", QVariant(120));
        qcashapeplugin_2->setProperty("offset1", QVariant(0));
        qcashapeplugin_2->setProperty("shape", QVariant(QCaShapePlugin::Ellipse));
        qcashapeplugin_2->setProperty("point2", QVariant(QPoint(16, 16)));
        qcashapeplugin_2->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qcashapeplugin_3 = new QCaShapePlugin(tab);
        qcashapeplugin_3->setObjectName(QString::fromUtf8("qcashapeplugin_3"));
        qcashapeplugin_3->setGeometry(QRect(72, 68, 18, 18));
        qcashapeplugin_3->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_3->setProperty("scale1", QVariant(120));
        qcashapeplugin_3->setProperty("offset1", QVariant(0));
        qcashapeplugin_3->setProperty("shape", QVariant(QCaShapePlugin::Ellipse));
        qcashapeplugin_3->setProperty("point2", QVariant(QPoint(16, 16)));
        qcashapeplugin_3->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qcashapeplugin_4 = new QCaShapePlugin(tab);
        qcashapeplugin_4->setObjectName(QString::fromUtf8("qcashapeplugin_4"));
        qcashapeplugin_4->setGeometry(QRect(72, 108, 18, 18));
        qcashapeplugin_4->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_4->setProperty("scale1", QVariant(120));
        qcashapeplugin_4->setProperty("offset1", QVariant(0));
        qcashapeplugin_4->setProperty("shape", QVariant(QCaShapePlugin::Ellipse));
        qcashapeplugin_4->setProperty("point2", QVariant(QPoint(16, 16)));
        qcashapeplugin_4->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qcashapeplugin_5 = new QCaShapePlugin(tab);
        qcashapeplugin_5->setObjectName(QString::fromUtf8("qcashapeplugin_5"));
        qcashapeplugin_5->setGeometry(QRect(72, 136, 18, 18));
        qcashapeplugin_5->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_5->setProperty("scale1", QVariant(120));
        qcashapeplugin_5->setProperty("offset1", QVariant(0));
        qcashapeplugin_5->setProperty("shape", QVariant(QCaShapePlugin::Ellipse));
        qcashapeplugin_5->setProperty("point2", QVariant(QPoint(16, 16)));
        qcashapeplugin_5->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qcashapeplugin_6 = new QCaShapePlugin(tab);
        qcashapeplugin_6->setObjectName(QString::fromUtf8("qcashapeplugin_6"));
        qcashapeplugin_6->setGeometry(QRect(72, 164, 18, 18));
        qcashapeplugin_6->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_6->setProperty("scale1", QVariant(120));
        qcashapeplugin_6->setProperty("offset1", QVariant(0));
        qcashapeplugin_6->setProperty("shape", QVariant(QCaShapePlugin::Ellipse));
        qcashapeplugin_6->setProperty("point2", QVariant(QPoint(16, 16)));
        qcashapeplugin_6->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qcashapeplugin_7 = new QCaShapePlugin(tab);
        qcashapeplugin_7->setObjectName(QString::fromUtf8("qcashapeplugin_7"));
        qcashapeplugin_7->setGeometry(QRect(72, 192, 18, 18));
        qcashapeplugin_7->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_7->setProperty("scale1", QVariant(120));
        qcashapeplugin_7->setProperty("offset1", QVariant(0));
        qcashapeplugin_7->setProperty("shape", QVariant(QCaShapePlugin::Ellipse));
        qcashapeplugin_7->setProperty("point2", QVariant(QPoint(16, 16)));
        qcashapeplugin_7->setProperty("color1", QVariant(QColor(0, 255, 0)));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(128, 156, 201, 65));
        qcapushbuttonplugin_10 = new QCaPushButtonPlugin(groupBox);
        qcapushbuttonplugin_10->setObjectName(QString::fromUtf8("qcapushbuttonplugin_10"));
        qcapushbuttonplugin_10->setGeometry(QRect(104, 24, 77, 25));
        qcapushbuttonplugin_9 = new QCaPushButtonPlugin(groupBox);
        qcapushbuttonplugin_9->setObjectName(QString::fromUtf8("qcapushbuttonplugin_9"));
        qcapushbuttonplugin_9->setGeometry(QRect(20, 24, 77, 25));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(228, 46, 25, 16));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(228, 22, 25, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        qcalineeditplugin_3 = new QCaLineEditPlugin(tab_2);
        qcalineeditplugin_3->setObjectName(QString::fromUtf8("qcalineeditplugin_3"));
        qcalineeditplugin_3->setGeometry(QRect(100, 52, 110, 20));
        qcalineeditplugin_4 = new QCaLineEditPlugin(tab_2);
        qcalineeditplugin_4->setObjectName(QString::fromUtf8("qcalineeditplugin_4"));
        qcalineeditplugin_4->setGeometry(QRect(100, 80, 110, 20));
        qcalineeditplugin_5 = new QCaLineEditPlugin(tab_2);
        qcalineeditplugin_5->setObjectName(QString::fromUtf8("qcalineeditplugin_5"));
        qcalineeditplugin_5->setGeometry(QRect(100, 108, 110, 20));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(16, 54, 84, 15));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(16, 82, 84, 15));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(16, 110, 84, 15));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcapushbuttonplugin_3 = new QCaPushButtonPlugin(tab_2);
        qcapushbuttonplugin_3->setObjectName(QString::fromUtf8("qcapushbuttonplugin_3"));
        qcapushbuttonplugin_3->setGeometry(QRect(216, 52, 28, 20));
        qcapushbuttonplugin_4 = new QCaPushButtonPlugin(tab_2);
        qcapushbuttonplugin_4->setObjectName(QString::fromUtf8("qcapushbuttonplugin_4"));
        qcapushbuttonplugin_4->setGeometry(QRect(216, 80, 28, 20));
        qcapushbuttonplugin_5 = new QCaPushButtonPlugin(tab_2);
        qcapushbuttonplugin_5->setObjectName(QString::fromUtf8("qcapushbuttonplugin_5"));
        qcapushbuttonplugin_5->setGeometry(QRect(216, 108, 28, 20));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(104, 28, 121, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        qcacomboboxplugin = new QCaComboBoxPlugin(tab_3);
        qcacomboboxplugin->setObjectName(QString::fromUtf8("qcacomboboxplugin"));
        qcacomboboxplugin->setGeometry(QRect(104, 16, 97, 21));
        qcacomboboxplugin->setSubscribe(true);
        qcacomboboxplugin->setUseDbEnumerations(true);
        qcacomboboxplugin_2 = new QCaComboBoxPlugin(tab_3);
        qcacomboboxplugin_2->setObjectName(QString::fromUtf8("qcacomboboxplugin_2"));
        qcacomboboxplugin_2->setGeometry(QRect(104, 44, 97, 21));
        qcacomboboxplugin_2->setSubscribe(true);
        qcacomboboxplugin_2->setUseDbEnumerations(true);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(12, 16, 89, 15));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(12, 44, 89, 15));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcapushbuttonplugin_13 = new QCaPushButtonPlugin(tab_3);
        qcapushbuttonplugin_13->setObjectName(QString::fromUtf8("qcapushbuttonplugin_13"));
        qcapushbuttonplugin_13->setGeometry(QRect(12, 92, 81, 28));
        qcapushbuttonplugin_13->setFont(font1);
        qcapushbuttonplugin_13->setEnabled(true);
        qcalabelplugin = new QCaLabelPlugin(tab_3);
        qcalabelplugin->setObjectName(QString::fromUtf8("qcalabelplugin"));
        qcalabelplugin->setGeometry(QRect(100, 100, 185, 16));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 365, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Hi Limit", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Low Limit", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Stopped", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Moving", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Moving Hi", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Slewing", 0, QApplication::UnicodeUTF8));
        qcalineeditplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MOVE:UP", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MOVE:DWN", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:UP", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_2->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:DWN", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_8->setText(QApplication::translate("MainWindow", "Abort", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_8->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:ABORT", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:HOME", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_2->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:HI:LIM", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_3->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:LO:LIM", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_4->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:STOPPED", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_5->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:MOVING", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_6->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:MOVING:HI", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_7->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:SLEW", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        groupBox->setTitle(QApplication::translate("MainWindow", "Debug", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_10->setText(QApplication::translate("MainWindow", "get State", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_10->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:STAT.PROC", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_9->setText(QApplication::translate("MainWindow", "get Limits", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_9->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:LIMITS.PROC", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_13->setText(QApplication::translate("MainWindow", "nm", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "nm", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Motion", 0, QApplication::UnicodeUTF8));
        qcalineeditplugin_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:STRT:VELO", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:ACCEL", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:VELO", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_8->setText(QApplication::translate("MainWindow", "Start Velocity", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Acceleration", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Velocity", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_3->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:STRT:VELO", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_4->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:ACCEL", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_5->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:VELOCITY", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_15->setText(QApplication::translate("MainWindow", "Units: steps & sec", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qcacomboboxplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:STAT.SCAN", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:LIMITS.SCAN", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_11->setText(QApplication::translate("MainWindow", "Moving State", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Limits", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_13->setText(QApplication::translate("MainWindow", "examine", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_13->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:EXAMINE.PROC", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_13->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:PARAMS", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "More", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
