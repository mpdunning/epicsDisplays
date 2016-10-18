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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "QEForm.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_12;
    QLabel *label;
    QTabWidget *tabWidget_4;
    QWidget *tab_13;
    QEForm *qeform_5;
    QWidget *tab_14;
    QEForm *qeform_6;
    QWidget *tab;
    QEForm *adcQEForm;
    QWidget *tab_3;
    QEForm *t3222QEForm;
    QWidget *tab_9;
    QGroupBox *groupBox_3;
    QEForm *qeform_9;
    QWidget *tab_7;
    QEForm *t3314QEForm;
    QWidget *tab_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QEForm *qeform;
    QWidget *tab_6;
    QEForm *qeform_3;
    QWidget *tab_8;
    QEForm *qeform_4;
    QWidget *tab_2;
    QEForm *bk9QEForm;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(506, 436);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(8, 0, 489, 387));
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        label = new QLabel(tab_12);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 6, 299, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        tabWidget_4 = new QTabWidget(tab_12);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(8, 32, 433, 313));
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        qeform_5 = new QEForm(tab_13);
        qeform_5->setObjectName(QStringLiteral("qeform_5"));
        qeform_5->setGeometry(QRect(36, 16, 368, 248));
        tabWidget_4->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        qeform_6 = new QEForm(tab_14);
        qeform_6->setObjectName(QStringLiteral("qeform_6"));
        qeform_6->setGeometry(QRect(36, 16, 368, 248));
        tabWidget_4->addTab(tab_14, QString());
        tabWidget->addTab(tab_12, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        adcQEForm = new QEForm(tab);
        adcQEForm->setObjectName(QStringLiteral("adcQEForm"));
        adcQEForm->setGeometry(QRect(6, 8, 471, 299));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        t3222QEForm = new QEForm(tab_3);
        t3222QEForm->setObjectName(QStringLiteral("t3222QEForm"));
        t3222QEForm->setGeometry(QRect(24, 14, 436, 317));
        tabWidget->addTab(tab_3, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        groupBox_3 = new QGroupBox(tab_9);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(92, 60, 197, 223));
        qeform_9 = new QEForm(groupBox_3);
        qeform_9->setObjectName(QStringLiteral("qeform_9"));
        qeform_9->setGeometry(QRect(6, 20, 185, 195));
        tabWidget->addTab(tab_9, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        t3314QEForm = new QEForm(tab_7);
        t3314QEForm->setObjectName(QStringLiteral("t3314QEForm"));
        t3314QEForm->setGeometry(QRect(24, 20, 436, 233));
        tabWidget->addTab(tab_7, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2 = new QTabWidget(tab_4);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(36, 8, 411, 311));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        qeform = new QEForm(tab_5);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(18, 8, 370, 260));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        qeform_3 = new QEForm(tab_6);
        qeform_3->setObjectName(QStringLiteral("qeform_3"));
        qeform_3->setGeometry(QRect(18, 8, 370, 260));
        tabWidget_2->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        qeform_4 = new QEForm(tab_8);
        qeform_4->setObjectName(QStringLiteral("qeform_4"));
        qeform_4->setGeometry(QRect(18, 8, 370, 260));
        tabWidget_2->addTab(tab_8, QString());
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        bk9QEForm = new QEForm(tab_2);
        bk9QEForm->setObjectName(QStringLiteral("bk9QEForm"));
        bk9QEForm->setGeometry(QRect(40, 8, 407, 339));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 506, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        label->setText(QApplication::translate("MainWindow", "ESA Test Beam Illumination Controls", 0));
        qeform_5->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/lamps-1.ui", 0)));
        qeform_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=4414,N=22", 0)));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_13), QApplication::translate("MainWindow", "1 - 6", 0));
        qeform_6->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/lamps-2.ui", 0)));
        qeform_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=4414,N=22", 0)));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_14), QApplication::translate("MainWindow", "7 - 12", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QApplication::translate("MainWindow", "Controls", 0));
        adcQEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/adcConv-4.ui", 0)));
        adcQEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=3404,N=22", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ADC(3404)", 0));
        t3222QEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/dac-12.ui", 0)));
        t3222QEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=4414,N=22", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "DAC", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "KL2408", 0));
        qeform_9->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/kl2xxx-8.ui", 0)));
        qeform_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=2408,N=22", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "DOut", 0));
        t3314QEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/therm-4.ui", 0)));
        t3314QEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=3314,N=22", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "T(3314)", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=3404,N=22", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "3404", 0));
        qeform_3->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=4414,N=22", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "4414", 0));
        qeform_4->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=3314,N=22", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "3314", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Hidden", 0));
        bk9QEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/bk9000.ui", 0)));
        bk9QEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,N=22", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Coupler", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
