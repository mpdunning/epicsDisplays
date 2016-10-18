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
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionPWM;
    QAction *actionShowHMRegs;
    QAction *actionShowStatus;
    QAction *actionShowHMAdcs;
    QAction *actionShowTrig;
    QAction *actionShowPWM;
    QAction *actionShowWFM;
    QAction *actionShowGDRegs;
    QAction *actionShowGDWFM;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSetup;
    QMenu *menuShow;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 400);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionPWM = new QAction(MainWindow);
        actionPWM->setObjectName(QString::fromUtf8("actionPWM"));
        actionShowHMRegs = new QAction(MainWindow);
        actionShowHMRegs->setObjectName(QString::fromUtf8("actionShowHMRegs"));
        actionShowStatus = new QAction(MainWindow);
        actionShowStatus->setObjectName(QString::fromUtf8("actionShowStatus"));
        actionShowHMAdcs = new QAction(MainWindow);
        actionShowHMAdcs->setObjectName(QString::fromUtf8("actionShowHMAdcs"));
        actionShowTrig = new QAction(MainWindow);
        actionShowTrig->setObjectName(QString::fromUtf8("actionShowTrig"));
        actionShowPWM = new QAction(MainWindow);
        actionShowPWM->setObjectName(QString::fromUtf8("actionShowPWM"));
        actionShowWFM = new QAction(MainWindow);
        actionShowWFM->setObjectName(QString::fromUtf8("actionShowWFM"));
        actionShowGDRegs = new QAction(MainWindow);
        actionShowGDRegs->setObjectName(QString::fromUtf8("actionShowGDRegs"));
        actionShowGDWFM = new QAction(MainWindow);
        actionShowGDWFM->setObjectName(QString::fromUtf8("actionShowGDWFM"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSetup = new QMenu(menubar);
        menuSetup->setObjectName(QString::fromUtf8("menuSetup"));
        menuShow = new QMenu(menubar);
        menuShow->setObjectName(QString::fromUtf8("menuShow"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSetup->menuAction());
        menubar->addAction(menuShow->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuSetup->addAction(actionPWM);
        menuShow->addAction(actionShowHMRegs);
        menuShow->addAction(actionShowStatus);
        menuShow->addAction(actionShowHMAdcs);
        menuShow->addAction(actionShowTrig);
        menuShow->addAction(actionShowPWM);
        menuShow->addAction(actionShowWFM);
        menuShow->addSeparator();
        menuShow->addAction(actionShowGDRegs);
        menuShow->addAction(actionShowGDWFM);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionPWM->setText(QApplication::translate("MainWindow", "PWM", 0, QApplication::UnicodeUTF8));
        actionShowHMRegs->setText(QApplication::translate("MainWindow", "HM Registers", 0, QApplication::UnicodeUTF8));
        actionShowStatus->setText(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
        actionShowHMAdcs->setText(QApplication::translate("MainWindow", "HM ADC's", 0, QApplication::UnicodeUTF8));
        actionShowTrig->setText(QApplication::translate("MainWindow", "Trig Control", 0, QApplication::UnicodeUTF8));
        actionShowPWM->setText(QApplication::translate("MainWindow", "PWM", 0, QApplication::UnicodeUTF8));
        actionShowWFM->setText(QApplication::translate("MainWindow", "WFM", 0, QApplication::UnicodeUTF8));
        actionShowGDRegs->setText(QApplication::translate("MainWindow", "GD Registers", 0, QApplication::UnicodeUTF8));
        actionShowGDWFM->setText(QApplication::translate("MainWindow", "GD Monitor WFM", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuSetup->setTitle(QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        menuShow->setTitle(QApplication::translate("MainWindow", "Show", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
