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
    QELabel *errMessage1;
    QELabel *qelError;
    CAShape *cashape;
    QPushButton *pbBkh;
    QGroupBox *groupBox1;
    QEForm *qeform1;
    QEForm *qeform2;
    QGroupBox *groupBox2;
    QEForm *qeform3;
    QEForm *qeform4;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(695, 314);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        errMessage1 = new QELabel(centralwidget);
        errMessage1->setObjectName(QStringLiteral("errMessage1"));
        errMessage1->setGeometry(QRect(12, 268, 297, 16));
        errMessage1->setStyleSheet(QStringLiteral("QWidget { color: grey }"));
        errMessage1->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        qelError = new QELabel(centralwidget);
        qelError->setObjectName(QStringLiteral("qelError"));
        qelError->setGeometry(QRect(248, 6, 56, 20));
        qelError->setAlignment(Qt::AlignCenter);
        qelError->setStyleSheet(QStringLiteral("QWidget { color: grey }"));
        qelError->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        cashape = new CAShape(centralwidget);
        cashape->setObjectName(QStringLiteral("cashape"));
        cashape->setGeometry(QRect(246, 4, 60, 24));
        cashape->setLineWidth(2u);
        cashape->setProperty("rectangle", QVariant(QRect(0, 0, 60, 24)));
        cashape->setColor1(QColor(0, 255, 0));
        cashape->setColor2(QColor(255, 0, 0));
        pbBkh = new QPushButton(centralwidget);
        pbBkh->setObjectName(QStringLiteral("pbBkh"));
        pbBkh->setGeometry(QRect(408, 6, 80, 20));
        groupBox1 = new QGroupBox(centralwidget);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        groupBox1->setGeometry(QRect(4, 36, 340, 220));
        qeform1 = new QEForm(groupBox1);
        qeform1->setObjectName(QStringLiteral("qeform1"));
        qeform1->setGeometry(QRect(6, 26, 162, 187));
        qeform2 = new QEForm(groupBox1);
        qeform2->setObjectName(QStringLiteral("qeform2"));
        qeform2->setGeometry(QRect(172, 26, 162, 187));
        groupBox2 = new QGroupBox(centralwidget);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        groupBox2->setGeometry(QRect(352, 36, 340, 220));
        qeform3 = new QEForm(groupBox2);
        qeform3->setObjectName(QStringLiteral("qeform3"));
        qeform3->setGeometry(QRect(4, 26, 162, 187));
        qeform4 = new QEForm(groupBox2);
        qeform4->setObjectName(QStringLiteral("qeform4"));
        qeform4->setGeometry(QRect(172, 26, 162, 187));
        MainWindow->setCentralWidget(centralwidget);
        cashape->raise();
        errMessage1->raise();
        qelError->raise();
        pbBkh->raise();
        groupBox1->raise();
        groupBox2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 695, 20));
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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        errMessage1->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):WF:BKHERR-$(N):MESSAGE", 0)));
        errMessage1->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,N=2", 0)));
        qelError->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BI:BKHERR-$(N):ERROR", 0)));
        qelError->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,N=2", 0)));
        cashape->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BI:BKHERR-$(N):ERROR", 0)));
        cashape->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CHA,N=2", 0)));
        pbBkh->setText(QApplication::translate("MainWindow", "Bkh More...", 0));
        groupBox1->setTitle(QApplication::translate("MainWindow", "ESTB Horizontal Colimator", 0));
        qeform1->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/motormovepot.ui", 0)));
        qeform1->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M1),N=$(N),A=$(A1),C=$(C1)", 0)));
        qeform2->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/motormovepot.ui", 0)));
        qeform2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M2),N=$(N),A=$(A1),C=$(C2)", 0)));
        groupBox2->setTitle(QApplication::translate("MainWindow", "ESTB Vertical Colimator", 0));
        qeform3->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/motormovepot.ui", 0)));
        qeform3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M3),N=$(N),A=$(A1),C=$(C3)", 0)));
        qeform4->setProperty("uiFile", QVariant(QApplication::translate("MainWindow", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/motormovepot.ui", 0)));
        qeform4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=$(P),M=$(M4),N=$(N),A=$(A1),C=$(C4)", 0)));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
