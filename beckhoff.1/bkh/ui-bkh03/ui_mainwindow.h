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
    QWidget *tab;
    QEForm *adcQEForm;
    QWidget *tab_3;
    QEForm *t3222QEForm;
    QWidget *tab_7;
    QEForm *t3314QEForm;
    QWidget *tab_9;
    QTabWidget *tabWidget_3;
    QWidget *tab_10;
    QGroupBox *groupBox_3;
    QEForm *qeform_9;
    QGroupBox *groupBox_4;
    QEForm *qeform_10;
    QWidget *tab_11;
    QGroupBox *groupBox;
    QEForm *qeform_2;
    QGroupBox *groupBox_2;
    QEForm *qeform_7;
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
        t3222QEForm->setGeometry(QRect(24, 20, 436, 175));
        tabWidget->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        t3314QEForm = new QEForm(tab_7);
        t3314QEForm->setObjectName(QStringLiteral("t3314QEForm"));
        t3314QEForm->setGeometry(QRect(24, 20, 436, 233));
        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tabWidget_3 = new QTabWidget(tab_9);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(14, 10, 465, 313));
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        groupBox_3 = new QGroupBox(tab_10);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(28, 24, 197, 223));
        qeform_9 = new QEForm(groupBox_3);
        qeform_9->setObjectName(QStringLiteral("qeform_9"));
        qeform_9->setGeometry(QRect(6, 20, 185, 195));
        groupBox_4 = new QGroupBox(tab_10);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(232, 24, 203, 223));
        qeform_10 = new QEForm(groupBox_4);
        qeform_10->setObjectName(QStringLiteral("qeform_10"));
        qeform_10->setGeometry(QRect(8, 26, 183, 195));
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        groupBox = new QGroupBox(tab_11);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(28, 24, 197, 131));
        qeform_2 = new QEForm(groupBox);
        qeform_2->setObjectName(QStringLiteral("qeform_2"));
        qeform_2->setGeometry(QRect(6, 20, 185, 99));
        groupBox_2 = new QGroupBox(tab_11);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(232, 24, 203, 223));
        qeform_7 = new QEForm(groupBox_2);
        qeform_7->setObjectName(QStringLiteral("qeform_7"));
        qeform_7->setGeometry(QRect(8, 26, 183, 195));
        tabWidget_3->addTab(tab_11, QString());
        groupBox_2->raise();
        groupBox->raise();
        tabWidget->addTab(tab_9, QString());
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
        tabWidget_3->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        adcQEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/adcConv-8.ui", 0)));
        adcQEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=3408,N=3", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ADC(3408)", 0));
        t3222QEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/therm-2.ui", 0)));
        t3222QEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=3222,N=3", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "T(3222)", 0));
        t3314QEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/therm-4.ui", 0)));
        t3314QEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=3314,N=3", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "T(3314)", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "KL2408", 0));
        qeform_9->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/kl2xxx-8.ui", 0)));
        qeform_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=2408,N=3", 0)));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "KL1408", 0));
        qeform_10->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/kl1xxx-8.ui", 0)));
        qeform_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=1408,N=3", 0)));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("MainWindow", "DIO", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "KL1104", 0));
        qeform_2->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/kl1xxx-4.ui", 0)));
        qeform_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=1104,N=3", 0)));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "KL1498", 0));
        qeform_7->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/kl1xxx-8.ui", 0)));
        qeform_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=1498,N=3", 0)));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("MainWindow", "DIn", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "DIO", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=3408,N=3", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "3408", 0));
        qeform_3->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=3222,N=3", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "3222", 0));
        qeform_4->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,M=3314,N=3", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "3314", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Hidden", 0));
        bk9QEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/bk9000.ui", 0)));
        bk9QEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,N=3", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Coupler", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
