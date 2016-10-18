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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QPushButton *AdcDacPB;
    QPushButton *hiddenPB;
    QPushButton *couplerPB;
    QGroupBox *xGroup;
    QPushButton *xMotorPB;
    QPushButton *xCtrlPB;
    QPushButton *xCSRPB;
    QPushButton *xRRegsPB;
    QPushButton *xWtRamPB;
    QPushButton *xWtEEPPB;
    QPushButton *xFeaturePB;
    QGroupBox *yGroup;
    QPushButton *yMotorPB;
    QPushButton *yCtrlPB;
    QPushButton *yCSRPB;
    QPushButton *yRRegsPB;
    QPushButton *yWtRamPB;
    QPushButton *yWtEEPPB;
    QPushButton *yFeaturePB;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(318, 303);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        AdcDacPB = new QPushButton(centralwidget);
        AdcDacPB->setObjectName(QStringLiteral("AdcDacPB"));
        AdcDacPB->setGeometry(QRect(208, 48, 68, 24));
        hiddenPB = new QPushButton(centralwidget);
        hiddenPB->setObjectName(QStringLiteral("hiddenPB"));
        hiddenPB->setGeometry(QRect(208, 76, 68, 24));
        couplerPB = new QPushButton(centralwidget);
        couplerPB->setObjectName(QStringLiteral("couplerPB"));
        couplerPB->setGeometry(QRect(208, 104, 68, 24));
        xGroup = new QGroupBox(centralwidget);
        xGroup->setObjectName(QStringLiteral("xGroup"));
        xGroup->setGeometry(QRect(8, 28, 84, 221));
        xMotorPB = new QPushButton(xGroup);
        xMotorPB->setObjectName(QStringLiteral("xMotorPB"));
        xMotorPB->setGeometry(QRect(8, 20, 68, 24));
        xCtrlPB = new QPushButton(xGroup);
        xCtrlPB->setObjectName(QStringLiteral("xCtrlPB"));
        xCtrlPB->setGeometry(QRect(8, 48, 68, 24));
        xCSRPB = new QPushButton(xGroup);
        xCSRPB->setObjectName(QStringLiteral("xCSRPB"));
        xCSRPB->setGeometry(QRect(8, 76, 68, 24));
        xRRegsPB = new QPushButton(xGroup);
        xRRegsPB->setObjectName(QStringLiteral("xRRegsPB"));
        xRRegsPB->setGeometry(QRect(8, 104, 68, 24));
        xWtRamPB = new QPushButton(xGroup);
        xWtRamPB->setObjectName(QStringLiteral("xWtRamPB"));
        xWtRamPB->setGeometry(QRect(8, 132, 68, 24));
        xWtEEPPB = new QPushButton(xGroup);
        xWtEEPPB->setObjectName(QStringLiteral("xWtEEPPB"));
        xWtEEPPB->setGeometry(QRect(8, 160, 68, 24));
        xFeaturePB = new QPushButton(xGroup);
        xFeaturePB->setObjectName(QStringLiteral("xFeaturePB"));
        xFeaturePB->setGeometry(QRect(8, 188, 68, 24));
        yGroup = new QGroupBox(centralwidget);
        yGroup->setObjectName(QStringLiteral("yGroup"));
        yGroup->setGeometry(QRect(100, 28, 84, 221));
        yMotorPB = new QPushButton(yGroup);
        yMotorPB->setObjectName(QStringLiteral("yMotorPB"));
        yMotorPB->setGeometry(QRect(8, 20, 68, 24));
        yCtrlPB = new QPushButton(yGroup);
        yCtrlPB->setObjectName(QStringLiteral("yCtrlPB"));
        yCtrlPB->setGeometry(QRect(8, 48, 68, 24));
        yCSRPB = new QPushButton(yGroup);
        yCSRPB->setObjectName(QStringLiteral("yCSRPB"));
        yCSRPB->setGeometry(QRect(8, 76, 68, 24));
        yRRegsPB = new QPushButton(yGroup);
        yRRegsPB->setObjectName(QStringLiteral("yRRegsPB"));
        yRRegsPB->setGeometry(QRect(8, 104, 68, 24));
        yWtRamPB = new QPushButton(yGroup);
        yWtRamPB->setObjectName(QStringLiteral("yWtRamPB"));
        yWtRamPB->setGeometry(QRect(8, 132, 68, 24));
        yWtEEPPB = new QPushButton(yGroup);
        yWtEEPPB->setObjectName(QStringLiteral("yWtEEPPB"));
        yWtEEPPB->setGeometry(QRect(8, 160, 68, 24));
        yFeaturePB = new QPushButton(yGroup);
        yFeaturePB->setObjectName(QStringLiteral("yFeaturePB"));
        yFeaturePB->setGeometry(QRect(8, 188, 68, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 318, 20));
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
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        AdcDacPB->setText(QApplication::translate("MainWindow", "ADC-DAC", 0));
        hiddenPB->setText(QApplication::translate("MainWindow", "Hidden", 0));
        couplerPB->setText(QApplication::translate("MainWindow", "Coupler", 0));
        xGroup->setTitle(QApplication::translate("MainWindow", "X Axis", 0));
        xMotorPB->setText(QApplication::translate("MainWindow", "Motor", 0));
        xCtrlPB->setText(QApplication::translate("MainWindow", "Control", 0));
        xCSRPB->setText(QApplication::translate("MainWindow", "CSR", 0));
        xRRegsPB->setText(QApplication::translate("MainWindow", "readReg", 0));
        xWtRamPB->setText(QApplication::translate("MainWindow", "writeRAM", 0));
        xWtEEPPB->setText(QApplication::translate("MainWindow", "wtEEPROM", 0));
        xFeaturePB->setText(QApplication::translate("MainWindow", "Feature", 0));
        yGroup->setTitle(QApplication::translate("MainWindow", "Y Axis", 0));
        yMotorPB->setText(QApplication::translate("MainWindow", "Motor", 0));
        yCtrlPB->setText(QApplication::translate("MainWindow", "Control", 0));
        yCSRPB->setText(QApplication::translate("MainWindow", "CSR", 0));
        yRRegsPB->setText(QApplication::translate("MainWindow", "readReg", 0));
        yWtRamPB->setText(QApplication::translate("MainWindow", "writeRAM", 0));
        yWtEEPPB->setText(QApplication::translate("MainWindow", "wtEEPROM", 0));
        yFeaturePB->setText(QApplication::translate("MainWindow", "Feature", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
