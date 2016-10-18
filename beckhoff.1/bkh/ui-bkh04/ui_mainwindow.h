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
    QGroupBox *groupBox;
    QEForm *qeform_4;
    QGroupBox *groupBox_2;
    QEForm *qeform_6;
    QWidget *tab_4;
    QEForm *qeform;
    QWidget *tab_2;
    QEForm *bk9QEForm;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(496, 438);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 2, 485, 387));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        adcQEForm = new QEForm(tab);
        adcQEForm->setObjectName(QStringLiteral("adcQEForm"));
        adcQEForm->setGeometry(QRect(4, 4, 475, 299));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 18, 204, 224));
        qeform_4 = new QEForm(groupBox);
        qeform_4->setObjectName(QStringLiteral("qeform_4"));
        qeform_4->setGeometry(QRect(6, 26, 190, 190));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(242, 18, 204, 224));
        qeform_6 = new QEForm(groupBox_2);
        qeform_6->setObjectName(QStringLiteral("qeform_6"));
        qeform_6->setGeometry(QRect(6, 26, 190, 190));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        qeform = new QEForm(tab_4);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(52, 26, 379, 271));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        bk9QEForm = new QEForm(tab_2);
        bk9QEForm->setObjectName(QStringLiteral("bk9QEForm"));
        bk9QEForm->setGeometry(QRect(38, 12, 407, 335));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 496, 20));
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


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        adcQEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/adcConv-8.ui", 0)));
        adcQEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=3408,N=4", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ADC(3408)", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "KL2408", 0));
        qeform_4->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/kl2xxx-8.ui", 0)));
        qeform_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=2408,N=4", 0)));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "KL1104", 0));
        qeform_6->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/kl1xxx-8.ui", 0)));
        qeform_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=1104,N=4", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "DIO", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hidden.ui", 0)));
        qeform->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,M=3408,N=4", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "ADC-Hid", 0));
        bk9QEForm->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/bk9000.ui", 0)));
        bk9QEForm->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA,N=4", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Coupler", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
