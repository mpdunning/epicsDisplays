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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QEImage.h"
#include "QELabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QELabel *qelabel;
    QEImage *qeimage;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(668, 572);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        qelabel = new QELabel(centralwidget);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(344, 368, 65, 16));
        qeimage = new QEImage(centralwidget);
        qeimage->setObjectName(QStringLiteral("qeimage"));
        qeimage->setGeometry(QRect(0, 0, 661, 525));
        qeimage->setProperty("displayAlarmStateOption", QVariant(QEImage::Never));
        qeimage->setProperty("bitDepth", QVariant(8u));
        qeimage->setDisplayEllipse(true);
        qeimage->setDisplayButtonBar(false);
        qeimage->setShowTime(true);
        qeimage->setExternalControls(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 668, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):image1:UniqueId_RBV", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=PS1", 0)));
        qeimage->setProperty("imageVariable", QVariant(QApplication::translate("MainWindow", "$(P):image1:ArrayData", 0)));
        qeimage->setProperty("formatVariable", QVariant(QString()));
        qeimage->setProperty("widthVariable", QVariant(QApplication::translate("MainWindow", "$(P):cam1:ArraySizeX_RBV", 0)));
        qeimage->setProperty("heightVariable", QVariant(QApplication::translate("MainWindow", "$(P):cam1:ArraySizeY_RBV", 0)));
        qeimage->setProperty("profileHozThicknessVariable", QVariant(QApplication::translate("MainWindow", "500", 0)));
        qeimage->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=CPS1", 0)));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
