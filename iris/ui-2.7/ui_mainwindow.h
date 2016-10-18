/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Oct 14 20:48:53 2013
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
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEPushButton.h"
#include "QEShape.h"
#include "QESlider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QESlider *qeslider;
    QEShape *irisEye;
    QEShape *irisFrame;
    QEShape *irisHole;
    QELineEdit *qelineedit;
    QELabel *qelabel;
    QELabel *qelabel_2;
    QEPushButton *qepushbutton;
    QELabel *qelabel_3;
    QELabel *qelabel_14;
    QWidget *tab_2;
    QELabel *qelabel_4;
    QELineEdit *qelineedit_2;
    QELabel *qelabel_5;
    QELineEdit *qelineedit_3;
    QELabel *qelabel_6;
    QELineEdit *qelineedit_4;
    QELineEdit *qelineedit_9;
    QELabel *qelabel_13;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QEShape *qeshape;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(365, 306);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(4, 24, 353, 229));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        qeslider = new QESlider(tab_1);
        qeslider->setObjectName(QString::fromUtf8("qeslider"));
        qeslider->setGeometry(QRect(24, 52, 297, 17));
        qeslider->setMaximum(36);
        qeslider->setPageStep(1);
        qeslider->setOrientation(Qt::Horizontal);
        qeslider->setTickPosition(QSlider::TicksBelow);
        qeslider->setTickInterval(4);
        irisEye = new QEShape(tab_1);
        irisEye->setObjectName(QString::fromUtf8("irisEye"));
        irisEye->setGeometry(QRect(256, 108, 51, 51));
        irisEye->setProperty("scale1", QVariant(0.0278));
        irisEye->setProperty("scale2", QVariant(0.0278));
        irisEye->setProperty("scale3", QVariant(-0.6944));
        irisEye->setProperty("scale4", QVariant(-0.6944));
        irisEye->setProperty("offset1", QVariant(0));
        irisEye->setProperty("offset3", QVariant(25));
        irisEye->setProperty("offset4", QVariant(25));
        irisEye->setProperty("shape", QVariant(QEShape::Ellipse));
        irisEye->setProperty("point2", QVariant(QPoint(50, 50)));
        irisEye->setProperty("color1", QVariant(QColor(179, 210, 255)));
        irisFrame = new QEShape(tab_1);
        irisFrame->setObjectName(QString::fromUtf8("irisFrame"));
        irisFrame->setGeometry(QRect(248, 100, 70, 70));
        irisFrame->setProperty("point2", QVariant(QPoint(70, 70)));
        irisFrame->setProperty("color1", QVariant(QColor(1, 59, 122)));
        irisHole = new QEShape(tab_1);
        irisHole->setObjectName(QString::fromUtf8("irisHole"));
        irisHole->setGeometry(QRect(256, 108, 51, 51));
        irisHole->setProperty("shape", QVariant(QEShape::Ellipse));
        irisHole->setProperty("point2", QVariant(QPoint(50, 50)));
        irisHole->setProperty("color1", QVariant(QColor(0, 24, 45)));
        qelineedit = new QELineEdit(tab_1);
        qelineedit->setObjectName(QString::fromUtf8("qelineedit"));
        qelineedit->setGeometry(QRect(253, 16, 65, 21));
        qelabel = new QELabel(tab_1);
        qelabel->setObjectName(QString::fromUtf8("qelabel"));
        qelabel->setGeometry(QRect(240, 80, 77, 15));
        qelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2 = new QELabel(tab_1);
        qelabel_2->setObjectName(QString::fromUtf8("qelabel_2"));
        qelabel_2->setGeometry(QRect(165, 16, 85, 15));
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qepushbutton = new QEPushButton(tab_1);
        qepushbutton->setObjectName(QString::fromUtf8("qepushbutton"));
        qepushbutton->setGeometry(QRect(100, 164, 49, 25));
        qelabel_3 = new QELabel(tab_1);
        qelabel_3->setObjectName(QString::fromUtf8("qelabel_3"));
        qelabel_3->setGeometry(QRect(18, 168, 77, 15));
        qelabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_14 = new QELabel(tab_1);
        qelabel_14->setObjectName(QString::fromUtf8("qelabel_14"));
        qelabel_14->setGeometry(QRect(165, 80, 69, 15));
        qelabel_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(tab_1, QString());
        qeslider->raise();
        irisFrame->raise();
        irisHole->raise();
        qelineedit->raise();
        qelabel->raise();
        qelabel_2->raise();
        qepushbutton->raise();
        qelabel_3->raise();
        qelabel_14->raise();
        irisEye->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        qelabel_4 = new QELabel(tab_2);
        qelabel_4->setObjectName(QString::fromUtf8("qelabel_4"));
        qelabel_4->setGeometry(QRect(8, 32, 57, 16));
        qelabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_2 = new QELineEdit(tab_2);
        qelineedit_2->setObjectName(QString::fromUtf8("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(72, 28, 73, 21));
        qelineedit_2->setAddUnits(false);
        qelabel_5 = new QELabel(tab_2);
        qelabel_5->setObjectName(QString::fromUtf8("qelabel_5"));
        qelabel_5->setGeometry(QRect(8, 56, 57, 16));
        qelabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_3 = new QELineEdit(tab_2);
        qelineedit_3->setObjectName(QString::fromUtf8("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(72, 52, 73, 21));
        qelineedit_3->setAddUnits(false);
        qelabel_6 = new QELabel(tab_2);
        qelabel_6->setObjectName(QString::fromUtf8("qelabel_6"));
        qelabel_6->setGeometry(QRect(8, 104, 57, 16));
        qelabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_4 = new QELineEdit(tab_2);
        qelineedit_4->setObjectName(QString::fromUtf8("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(72, 100, 73, 21));
        qelineedit_9 = new QELineEdit(tab_2);
        qelineedit_9->setObjectName(QString::fromUtf8("qelineedit_9"));
        qelineedit_9->setGeometry(QRect(72, 124, 73, 21));
        qelabel_13 = new QELabel(tab_2);
        qelabel_13->setObjectName(QString::fromUtf8("qelabel_13"));
        qelabel_13->setGeometry(QRect(8, 128, 57, 16));
        qelabel_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(4, 4, 337, 81));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(172, 12, 157, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(172, 28, 157, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(172, 48, 157, 17));
        tabWidget->addTab(tab_2, QString());
        groupBox->raise();
        qelabel_4->raise();
        qelineedit_2->raise();
        qelabel_5->raise();
        qelineedit_3->raise();
        qelabel_6->raise();
        qelineedit_4->raise();
        qelineedit_9->raise();
        qelabel_13->raise();
        qeshape = new QEShape(centralwidget);
        qeshape->setObjectName(QString::fromUtf8("qeshape"));
        qeshape->setGeometry(QRect(288, 12, 17, 17));
        qeshape->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape->setProperty("scale1", QVariant(120));
        qeshape->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape->setProperty("color1", QVariant(QColor(0, 255, 0)));
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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        qeslider->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:SC:OPENING", 0, QApplication::UnicodeUTF8)));
        qeslider->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:IRIS", 0, QApplication::UnicodeUTF8)));
        irisEye->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AI:MONITOR", 0, QApplication::UnicodeUTF8)));
        irisEye->setProperty("variable2", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AI:MONITOR", 0, QApplication::UnicodeUTF8)));
        irisEye->setProperty("variable3", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AI:MONITOR", 0, QApplication::UnicodeUTF8)));
        irisEye->setProperty("variable4", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AI:MONITOR", 0, QApplication::UnicodeUTF8)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AO:SC:OPENING", 0, QApplication::UnicodeUTF8)));
        qelabel->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AI:MONITOR", 0, QApplication::UnicodeUTF8)));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AO:SC:OPENING.DESC", 0, QApplication::UnicodeUTF8)));
        qepushbutton->setText(QString());
        qepushbutton->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:BO:RESET.PROC", 0, QApplication::UnicodeUTF8)));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:BO:RESET.DESC", 0, QApplication::UnicodeUTF8)));
        qelabel_14->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AI:MONITOR.DESC", 0, QApplication::UnicodeUTF8)));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "Control", 0, QApplication::UnicodeUTF8));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AO:CONV:OFF.DESC", 0, QApplication::UnicodeUTF8)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AO:CONV:OFF", 0, QApplication::UnicodeUTF8)));
        qelabel_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AO:CONV:SLOPE.DESC", 0, QApplication::UnicodeUTF8)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:AO:CONV:SLOPE", 0, QApplication::UnicodeUTF8)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:LO:SC:MAXV.DESC", 0, QApplication::UnicodeUTF8)));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:LO:SC:MAXV", 0, QApplication::UnicodeUTF8)));
        qelineedit_9->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:LO:SC:MAXA", 0, QApplication::UnicodeUTF8)));
        qelabel_13->setProperty("variable", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:LO:SC:MAXA.DESC", 0, QApplication::UnicodeUTF8)));
        groupBox->setTitle(QApplication::translate("MainWindow", "Conversion Coefficients", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Size opening gets", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "converted to steps:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "steps=off+(mm*slope)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qeshape->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "ESB:IRIS:BI:BLINK", 0, QApplication::UnicodeUTF8)));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
