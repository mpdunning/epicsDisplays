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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "QEForm.h"
#include "QELabel.h"
#include "ashape.h"
#include "cashape.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *motor1;
    QTabWidget *motor1_tab;
    QWidget *tab_5;
    QEForm *xHomeQEF;
    QWidget *control;
    QPushButton *motorXPB;
    QEForm *qeform;
    QWidget *csr;
    QEForm *qeform_3;
    QWidget *readreg;
    QEForm *qeform_5;
    QWidget *writeram;
    QEForm *qeform_7;
    QWidget *writeeeprom;
    QEForm *qeform_9;
    QWidget *feature1;
    QEForm *qeform_11;
    QWidget *motor2;
    QTabWidget *motor2_tab;
    QWidget *tab_6;
    QEForm *yHomeQEF;
    QWidget *control_2;
    QPushButton *motorYPB;
    QEForm *qeform_2;
    QWidget *csr_2;
    QEForm *qeform_4;
    QWidget *readreg_2;
    QEForm *qeform_6;
    QWidget *writeram_2;
    QEForm *qeform_8;
    QWidget *writeeeprom_2;
    QEForm *qeform_10;
    QWidget *feature1_2;
    QEForm *qeform_12;
    QWidget *adc;
    QEForm *adcQEF;
    QWidget *hidden;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QEForm *qeform_14;
    QWidget *tab_2;
    QEForm *qeform_15;
    QWidget *tab_3;
    QEForm *qeform_16;
    QWidget *tab_4;
    QEForm *qeform_17;
    QWidget *bk9000;
    QEForm *cplQEF;
    QELabel *errMessage1;
    QELabel *qelError;
    CAShape *cashape;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(536, 486);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(8, 32, 521, 395));
        motor1 = new QWidget();
        motor1->setObjectName(QStringLiteral("motor1"));
        motor1_tab = new QTabWidget(motor1);
        motor1_tab->setObjectName(QStringLiteral("motor1_tab"));
        motor1_tab->setGeometry(QRect(6, 6, 505, 353));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        xHomeQEF = new QEForm(tab_5);
        xHomeQEF->setObjectName(QStringLiteral("xHomeQEF"));
        xHomeQEF->setGeometry(QRect(20, 14, 464, 280));
        motor1_tab->addTab(tab_5, QString());
        control = new QWidget();
        control->setObjectName(QStringLiteral("control"));
        motorXPB = new QPushButton(control);
        motorXPB->setObjectName(QStringLiteral("motorXPB"));
        motorXPB->setGeometry(QRect(6, 294, 83, 25));
        qeform = new QEForm(control);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(6, 6, 470, 279));
        motor1_tab->addTab(control, QString());
        qeform->raise();
        motorXPB->raise();
        csr = new QWidget();
        csr->setObjectName(QStringLiteral("csr"));
        qeform_3 = new QEForm(csr);
        qeform_3->setObjectName(QStringLiteral("qeform_3"));
        qeform_3->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(csr, QString());
        readreg = new QWidget();
        readreg->setObjectName(QStringLiteral("readreg"));
        qeform_5 = new QEForm(readreg);
        qeform_5->setObjectName(QStringLiteral("qeform_5"));
        qeform_5->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(readreg, QString());
        writeram = new QWidget();
        writeram->setObjectName(QStringLiteral("writeram"));
        qeform_7 = new QEForm(writeram);
        qeform_7->setObjectName(QStringLiteral("qeform_7"));
        qeform_7->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(writeram, QString());
        writeeeprom = new QWidget();
        writeeeprom->setObjectName(QStringLiteral("writeeeprom"));
        qeform_9 = new QEForm(writeeeprom);
        qeform_9->setObjectName(QStringLiteral("qeform_9"));
        qeform_9->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(writeeeprom, QString());
        feature1 = new QWidget();
        feature1->setObjectName(QStringLiteral("feature1"));
        qeform_11 = new QEForm(feature1);
        qeform_11->setObjectName(QStringLiteral("qeform_11"));
        qeform_11->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(feature1, QString());
        tabWidget->addTab(motor1, QString());
        motor2 = new QWidget();
        motor2->setObjectName(QStringLiteral("motor2"));
        motor2_tab = new QTabWidget(motor2);
        motor2_tab->setObjectName(QStringLiteral("motor2_tab"));
        motor2_tab->setGeometry(QRect(6, 6, 505, 353));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        yHomeQEF = new QEForm(tab_6);
        yHomeQEF->setObjectName(QStringLiteral("yHomeQEF"));
        yHomeQEF->setGeometry(QRect(20, 14, 464, 280));
        motor2_tab->addTab(tab_6, QString());
        control_2 = new QWidget();
        control_2->setObjectName(QStringLiteral("control_2"));
        motorYPB = new QPushButton(control_2);
        motorYPB->setObjectName(QStringLiteral("motorYPB"));
        motorYPB->setGeometry(QRect(6, 294, 83, 25));
        qeform_2 = new QEForm(control_2);
        qeform_2->setObjectName(QStringLiteral("qeform_2"));
        qeform_2->setGeometry(QRect(6, 6, 470, 281));
        motor2_tab->addTab(control_2, QString());
        csr_2 = new QWidget();
        csr_2->setObjectName(QStringLiteral("csr_2"));
        qeform_4 = new QEForm(csr_2);
        qeform_4->setObjectName(QStringLiteral("qeform_4"));
        qeform_4->setGeometry(QRect(6, 6, 470, 314));
        motor2_tab->addTab(csr_2, QString());
        readreg_2 = new QWidget();
        readreg_2->setObjectName(QStringLiteral("readreg_2"));
        qeform_6 = new QEForm(readreg_2);
        qeform_6->setObjectName(QStringLiteral("qeform_6"));
        qeform_6->setGeometry(QRect(6, 6, 470, 314));
        motor2_tab->addTab(readreg_2, QString());
        writeram_2 = new QWidget();
        writeram_2->setObjectName(QStringLiteral("writeram_2"));
        qeform_8 = new QEForm(writeram_2);
        qeform_8->setObjectName(QStringLiteral("qeform_8"));
        qeform_8->setGeometry(QRect(6, 6, 470, 314));
        motor2_tab->addTab(writeram_2, QString());
        writeeeprom_2 = new QWidget();
        writeeeprom_2->setObjectName(QStringLiteral("writeeeprom_2"));
        qeform_10 = new QEForm(writeeeprom_2);
        qeform_10->setObjectName(QStringLiteral("qeform_10"));
        qeform_10->setGeometry(QRect(6, 6, 470, 314));
        motor2_tab->addTab(writeeeprom_2, QString());
        feature1_2 = new QWidget();
        feature1_2->setObjectName(QStringLiteral("feature1_2"));
        qeform_12 = new QEForm(feature1_2);
        qeform_12->setObjectName(QStringLiteral("qeform_12"));
        qeform_12->setGeometry(QRect(6, 6, 470, 314));
        motor2_tab->addTab(feature1_2, QString());
        tabWidget->addTab(motor2, QString());
        adc = new QWidget();
        adc->setObjectName(QStringLiteral("adc"));
        adcQEF = new QEForm(adc);
        adcQEF->setObjectName(QStringLiteral("adcQEF"));
        adcQEF->setGeometry(QRect(14, 14, 470, 301));
        tabWidget->addTab(adc, QString());
        hidden = new QWidget();
        hidden->setObjectName(QStringLiteral("hidden"));
        tabWidget_2 = new QTabWidget(hidden);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(14, 14, 459, 325));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        qeform_14 = new QEForm(tab);
        qeform_14->setObjectName(QStringLiteral("qeform_14"));
        qeform_14->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        qeform_15 = new QEForm(tab_2);
        qeform_15->setObjectName(QStringLiteral("qeform_15"));
        qeform_15->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        qeform_16 = new QEForm(tab_3);
        qeform_16->setObjectName(QStringLiteral("qeform_16"));
        qeform_16->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        qeform_17 = new QEForm(tab_4);
        qeform_17->setObjectName(QStringLiteral("qeform_17"));
        qeform_17->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(hidden, QString());
        bk9000 = new QWidget();
        bk9000->setObjectName(QStringLiteral("bk9000"));
        cplQEF = new QEForm(bk9000);
        cplQEF->setObjectName(QStringLiteral("cplQEF"));
        cplQEF->setGeometry(QRect(14, 14, 417, 340));
        tabWidget->addTab(bk9000, QString());
        errMessage1 = new QELabel(centralwidget);
        errMessage1->setObjectName(QStringLiteral("errMessage1"));
        errMessage1->setGeometry(QRect(14, 436, 429, 16));
        errMessage1->setStyleSheet(QStringLiteral(""));
        errMessage1->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelError = new QELabel(centralwidget);
        qelError->setObjectName(QStringLiteral("qelError"));
        qelError->setGeometry(QRect(440, 8, 56, 20));
        qelError->setAlignment(Qt::AlignCenter);
        qelError->setStyleSheet(QStringLiteral(""));
        qelError->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        cashape = new CAShape(centralwidget);
        cashape->setObjectName(QStringLiteral("cashape"));
        cashape->setGeometry(QRect(438, 6, 60, 24));
        cashape->setLineWidth(2u);
        cashape->setProperty("rectangle", QVariant(QRect(0, 0, 60, 24)));
        cashape->setColor1(QColor(0, 255, 0));
        cashape->setColor2(QColor(255, 0, 0));
        MainWindow->setCentralWidget(centralwidget);
        cashape->raise();
        tabWidget->raise();
        errMessage1->raise();
        qelError->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 536, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        motor1_tab->setCurrentIndex(0);
        motor2_tab->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        xHomeQEF->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/home.ui", 0)));
        xHomeQEF->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(tab_5), QApplication::translate("MainWindow", "Home", 0));
        motorXPB->setText(QApplication::translate("MainWindow", "Motor 1", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/control.ui", 0)));
        qeform->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(control), QApplication::translate("MainWindow", "Control", 0));
        qeform_3->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/csr.ui", 0)));
        qeform_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(csr), QApplication::translate("MainWindow", "CSR", 0));
        qeform_5->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/readreg.ui", 0)));
        qeform_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(readreg), QApplication::translate("MainWindow", "readReg", 0));
        qeform_7->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/writeram.ui", 0)));
        qeform_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(writeram), QApplication::translate("MainWindow", "writeRAM", 0));
        qeform_9->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/writeeep.ui", 0)));
        qeform_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(writeeeprom), QApplication::translate("MainWindow", "writeEEPROM", 0));
        qeform_11->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/feature.ui", 0)));
        qeform_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(feature1), QApplication::translate("MainWindow", "Feature", 0));
        tabWidget->setTabText(tabWidget->indexOf(motor1), QApplication::translate("MainWindow", "Motor 1", 0));
        yHomeQEF->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/home.ui", 0)));
        yHomeQEF->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N)", 0)));
        motor2_tab->setTabText(motor2_tab->indexOf(tab_6), QApplication::translate("MainWindow", "Home", 0));
        motorYPB->setText(QApplication::translate("MainWindow", "Motor 2", 0));
        qeform_2->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/control.ui", 0)));
        qeform_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N)", 0)));
        motor2_tab->setTabText(motor2_tab->indexOf(control_2), QApplication::translate("MainWindow", "Control", 0));
        qeform_4->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/csr.ui", 0)));
        qeform_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N)", 0)));
        motor2_tab->setTabText(motor2_tab->indexOf(csr_2), QApplication::translate("MainWindow", "CSR", 0));
        qeform_6->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/readreg.ui", 0)));
        qeform_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N)", 0)));
        motor2_tab->setTabText(motor2_tab->indexOf(readreg_2), QApplication::translate("MainWindow", "readReg", 0));
        qeform_8->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/writeram.ui", 0)));
        qeform_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N)", 0)));
        motor2_tab->setTabText(motor2_tab->indexOf(writeram_2), QApplication::translate("MainWindow", "writeRAM", 0));
        qeform_10->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/writeeep.ui", 0)));
        qeform_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N)", 0)));
        motor2_tab->setTabText(motor2_tab->indexOf(writeeeprom_2), QApplication::translate("MainWindow", "writeEEPROM", 0));
        qeform_12->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/feature.ui", 0)));
        qeform_12->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N)", 0)));
        motor2_tab->setTabText(motor2_tab->indexOf(feature1_2), QApplication::translate("MainWindow", "Feature", 0));
        tabWidget->setTabText(tabWidget->indexOf(motor2), QApplication::translate("MainWindow", "Motor 2", 0));
        adcQEF->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/adcdac2m.ui", 0)));
        adcQEF->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),R=$(R),T=$(T),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(adc), QApplication::translate("MainWindow", "ADC/DAC", 0));
        qeform_14->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "Q=$(M1),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "Mot 1", 0));
        qeform_15->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_15->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "Q=$(M2),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "Mot 2", 0));
        qeform_16->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_16->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "Q=$(R),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "ADC", 0));
        qeform_17->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_17->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "Q=$(T),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "DAC", 0));
        tabWidget->setTabText(tabWidget->indexOf(hidden), QApplication::translate("MainWindow", "Hidden", 0));
        cplQEF->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/bk9000.ui", 0)));
        cplQEF->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(bk9000), QApplication::translate("MainWindow", "BK9000", 0));
        errMessage1->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):WF:BKHERR-$(N):MESSAGE", 0)));
        errMessage1->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,N=2", 0)));
        qelError->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BI:BKHERR-$(N):ERROR", 0)));
        qelError->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,N=2", 0)));
        cashape->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BI:BKHERR-$(N):ERROR", 0)));
        cashape->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,N=2", 0)));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
