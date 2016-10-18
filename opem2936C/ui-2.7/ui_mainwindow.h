/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Oct 2 16:32:51 2013
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
#include <QtGui/QFrame>
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

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Main;
    QCaLabelPlugin *qcalabelplugin;
    QGroupBox *groupBox;
    QCaLabelPlugin *qcalabelplugin_2;
    QCaLabelPlugin *qcalabelplugin_3;
    QLabel *label;
    QCaLabelPlugin *qcalabelplugin_4;
    QCaLabelPlugin *qcalabelplugin_5;
    QFrame *line;
    QFrame *line_2;
    QCaComboBoxPlugin *qcacomboboxplugin;
    QCaComboBoxPlugin *qcacomboboxplugin_2;
    QLabel *label_2;
    QWidget *Setup;
    QCaPushButtonPlugin *qcapushbuttonplugin;
    QLabel *label_4;
    QCaLabelPlugin *qcalabelplugin_7;
    QCaLineEditPlugin *qcalineeditplugin;
    QCaLabelPlugin *qcalabelplugin_8;
    QCaLineEditPlugin *qcalineeditplugin_2;
    QCaLabelPlugin *qcalabelplugin_9;
    QCaLabelPlugin *qcalabelplugin_10;
    QCaLineEditPlugin *qcalineeditplugin_3;
    QCaLineEditPlugin *qcalineeditplugin_4;
    QCaLabelPlugin *qcalabelplugin_11;
    QCaLineEditPlugin *qcalineeditplugin_5;
    QCaLabelPlugin *qcalabelplugin_6;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(426, 390);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(12, 20, 393, 281));
        Main = new QWidget();
        Main->setObjectName(QString::fromUtf8("Main"));
        qcalabelplugin = new QCaLabelPlugin(Main);
        qcalabelplugin->setObjectName(QString::fromUtf8("qcalabelplugin"));
        qcalabelplugin->setGeometry(QRect(16, 8, 201, 29));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        qcalabelplugin->setFont(font);
        groupBox = new QGroupBox(Main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(44, 40, 308, 157));
        qcalabelplugin_2 = new QCaLabelPlugin(groupBox);
        qcalabelplugin_2->setObjectName(QString::fromUtf8("qcalabelplugin_2"));
        qcalabelplugin_2->setGeometry(QRect(8, 36, 293, 73));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        qcalabelplugin_2->setFont(font1);
        qcalabelplugin_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalabelplugin_2->setProperty("notation", QVariant(QCaLabelPlugin::Automatic));
        qcalabelplugin_3 = new QCaLabelPlugin(groupBox);
        qcalabelplugin_3->setObjectName(QString::fromUtf8("qcalabelplugin_3"));
        qcalabelplugin_3->setGeometry(QRect(12, 20, 129, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(8, 132, 33, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalabelplugin_4 = new QCaLabelPlugin(groupBox);
        qcalabelplugin_4->setObjectName(QString::fromUtf8("qcalabelplugin_4"));
        qcalabelplugin_4->setGeometry(QRect(48, 132, 105, 16));
        qcalabelplugin_4->setAlignment(Qt::AlignCenter);
        qcalabelplugin_5 = new QCaLabelPlugin(groupBox);
        qcalabelplugin_5->setObjectName(QString::fromUtf8("qcalabelplugin_5"));
        qcalabelplugin_5->setGeometry(QRect(196, 132, 69, 16));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1, 120, 305, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(160, 127, 8, 28));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        qcacomboboxplugin = new QCaComboBoxPlugin(Main);
        qcacomboboxplugin->setObjectName(QString::fromUtf8("qcacomboboxplugin"));
        qcacomboboxplugin->setGeometry(QRect(237, 208, 113, 21));
        qcacomboboxplugin->setSubscribe(true);
        qcacomboboxplugin_2 = new QCaComboBoxPlugin(Main);
        qcacomboboxplugin_2->setObjectName(QString::fromUtf8("qcacomboboxplugin_2"));
        qcacomboboxplugin_2->setGeometry(QRect(92, 208, 74, 21));
        qcacomboboxplugin_2->setSubscribe(true);
        label_2 = new QLabel(Main);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(52, 208, 37, 15));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(Main, QString());
        Setup = new QWidget();
        Setup->setObjectName(QString::fromUtf8("Setup"));
        qcapushbuttonplugin = new QCaPushButtonPlugin(Setup);
        qcapushbuttonplugin->setObjectName(QString::fromUtf8("qcapushbuttonplugin"));
        qcapushbuttonplugin->setGeometry(QRect(259, 208, 65, 25));
        qcapushbuttonplugin->setSubscribe(false);
        qcapushbuttonplugin->setWriteOnPress(false);
        label_4 = new QLabel(Setup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(212, 212, 41, 15));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalabelplugin_7 = new QCaLabelPlugin(Setup);
        qcalabelplugin_7->setObjectName(QString::fromUtf8("qcalabelplugin_7"));
        qcalabelplugin_7->setGeometry(QRect(84, 16, 81, 20));
        qcalabelplugin_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalineeditplugin = new QCaLineEditPlugin(Setup);
        qcalineeditplugin->setObjectName(QString::fromUtf8("qcalineeditplugin"));
        qcalineeditplugin->setGeometry(QRect(168, 16, 81, 20));
        qcalabelplugin_8 = new QCaLabelPlugin(Setup);
        qcalabelplugin_8->setObjectName(QString::fromUtf8("qcalabelplugin_8"));
        qcalabelplugin_8->setGeometry(QRect(84, 40, 81, 20));
        qcalabelplugin_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalineeditplugin_2 = new QCaLineEditPlugin(Setup);
        qcalineeditplugin_2->setObjectName(QString::fromUtf8("qcalineeditplugin_2"));
        qcalineeditplugin_2->setGeometry(QRect(168, 40, 81, 20));
        qcalabelplugin_9 = new QCaLabelPlugin(Setup);
        qcalabelplugin_9->setObjectName(QString::fromUtf8("qcalabelplugin_9"));
        qcalabelplugin_9->setGeometry(QRect(84, 92, 81, 20));
        qcalabelplugin_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalabelplugin_10 = new QCaLabelPlugin(Setup);
        qcalabelplugin_10->setObjectName(QString::fromUtf8("qcalabelplugin_10"));
        qcalabelplugin_10->setGeometry(QRect(84, 68, 81, 20));
        qcalabelplugin_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalineeditplugin_3 = new QCaLineEditPlugin(Setup);
        qcalineeditplugin_3->setObjectName(QString::fromUtf8("qcalineeditplugin_3"));
        qcalineeditplugin_3->setGeometry(QRect(168, 92, 81, 20));
        qcalineeditplugin_4 = new QCaLineEditPlugin(Setup);
        qcalineeditplugin_4->setObjectName(QString::fromUtf8("qcalineeditplugin_4"));
        qcalineeditplugin_4->setGeometry(QRect(168, 68, 81, 20));
        qcalabelplugin_11 = new QCaLabelPlugin(Setup);
        qcalabelplugin_11->setObjectName(QString::fromUtf8("qcalabelplugin_11"));
        qcalabelplugin_11->setGeometry(QRect(12, 120, 153, 20));
        qcalabelplugin_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalineeditplugin_5 = new QCaLineEditPlugin(Setup);
        qcalineeditplugin_5->setObjectName(QString::fromUtf8("qcalineeditplugin_5"));
        qcalineeditplugin_5->setGeometry(QRect(168, 120, 81, 20));
        tabWidget->addTab(Setup, QString());
        qcalabelplugin_6 = new QCaLabelPlugin(centralwidget);
        qcalabelplugin_6->setObjectName(QString::fromUtf8("qcalabelplugin_6"));
        qcalabelplugin_6->setGeometry(QRect(52, 312, 357, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(8, 312, 37, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        qcalabelplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:VERS", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        groupBox->setTitle(QApplication::translate("MainWindow", "Display", 0, QApplication::UnicodeUTF8));
        qcalabelplugin_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):CALC:READ", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:HEAD", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label->setText(QApplication::translate("MainWindow", "Res:", 0, QApplication::UnicodeUTF8));
        qcalabelplugin_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:RESOL", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:WL:CORR", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:READ.SCAN", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):MBBO:ZERO", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QApplication::translate("MainWindow", "Zero:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Main), QApplication::translate("MainWindow", "Main", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:CLEAR.PROC", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label_4->setText(QApplication::translate("MainWindow", "Error:", 0, QApplication::UnicodeUTF8));
        qcalabelplugin_7->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:1.DESC", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:1", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_8->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:2.DESC", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:2", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_9->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:2.DESC", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_10->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:1.DESC", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:2", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:1", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_11->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:WL:CORR.DESC", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:WL:CORR", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        tabWidget->setTabText(tabWidget->indexOf(Setup), QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qcalabelplugin_6->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:ERROR", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label_3->setText(QApplication::translate("MainWindow", "Error:", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
