/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Mar 13 15:27:19 2013
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
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "QBitStatus.h"
#include "QEBitStatus.h"
#include "QEComboBox.h"
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEPushButton.h"
#include "imageframe.h"
#include "xygraph.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFile;
    QAction *actionQuit;
    QWidget *centralwidget;
    QELabel *qelabelWFType;
    QEComboBox *qecombobox;
    QELabel *qelabelMin;
    QELineEdit *qelineedit;
    QELabel *qelabelMax;
    QELineEdit *qelineedit_2;
    QELabel *qelabelNPTS;
    QELineEdit *qelineedit_3;
    QEPushButton *qebushbutton;
    QBitStatus *qbitstatus;
    QEBitStatus *qebitstatus;
    XYGraph *xygraph;
    ImageFrame *imageframe;
    QEPushButton *qebushbutton_2;
    QMenuBar *menubar;
    QMenu *menuQuit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(404, 595);
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        qelabelWFType = new QELabel(centralwidget);
        qelabelWFType->setObjectName(QString::fromUtf8("qelabelWFType"));
        qelabelWFType->setGeometry(QRect(28, 20, 101, 16));
        qelabelWFType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qecombobox = new QEComboBox(centralwidget);
        qecombobox->setObjectName(QString::fromUtf8("qecombobox"));
        qecombobox->setGeometry(QRect(132, 16, 74, 22));
        qecombobox->setSubscribe(true);
        qelabelMin = new QELabel(centralwidget);
        qelabelMin->setObjectName(QString::fromUtf8("qelabelMin"));
        qelabelMin->setGeometry(QRect(28, 52, 101, 16));
        qelabelMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit = new QELineEdit(centralwidget);
        qelineedit->setObjectName(QString::fromUtf8("qelineedit"));
        qelineedit->setGeometry(QRect(132, 48, 73, 21));
        qelabelMax = new QELabel(centralwidget);
        qelabelMax->setObjectName(QString::fromUtf8("qelabelMax"));
        qelabelMax->setGeometry(QRect(220, 20, 80, 16));
        qelabelMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_2 = new QELineEdit(centralwidget);
        qelineedit_2->setObjectName(QString::fromUtf8("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(304, 16, 73, 21));
        qelabelNPTS = new QELabel(centralwidget);
        qelabelNPTS->setObjectName(QString::fromUtf8("qelabelNPTS"));
        qelabelNPTS->setGeometry(QRect(220, 52, 80, 16));
        qelabelNPTS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_3 = new QELineEdit(centralwidget);
        qelineedit_3->setObjectName(QString::fromUtf8("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(304, 48, 73, 21));
        qebushbutton = new QEPushButton(centralwidget);
        qebushbutton->setObjectName(QString::fromUtf8("qebushbutton"));
        qebushbutton->setGeometry(QRect(307, 80, 69, 25));
        qebushbutton->setSubscribe(false);
        qbitstatus = new QBitStatus(centralwidget);
        qbitstatus->setObjectName(QString::fromUtf8("qbitstatus"));
        qbitstatus->setGeometry(QRect(332, 212, 12, 96));
        qbitstatus->setValue(150);
        qbitstatus->setOrientation(QBitStatus::LSB_On_Top);
        qebitstatus = new QEBitStatus(centralwidget);
        qebitstatus->setObjectName(QString::fromUtf8("qebitstatus"));
        qebitstatus->setGeometry(QRect(364, 212, 12, 96));
        qebitstatus->setValue(15);
        qebitstatus->setOrientation(QBitStatus::LSB_On_Bottom);
        xygraph = new XYGraph(centralwidget);
        xygraph->setObjectName(QString::fromUtf8("xygraph"));
        xygraph->setGeometry(QRect(28, 88, 240, 160));
        xygraph->setProperty("gridEnableMajorX", QVariant(true));
        xygraph->setProperty("gridEnableMinorX", QVariant(true));
        xygraph->setProperty("gridEnableMajorY", QVariant(true));
        xygraph->setProperty("gridEnableMinorY", QVariant(true));
        xygraph->setBackgroundColor(QColor(191, 200, 212));
        imageframe = new ImageFrame(centralwidget);
        imageframe->setObjectName(QString::fromUtf8("imageframe"));
        imageframe->setGeometry(QRect(16, 272, 293, 213));
        imageframe->setPixmap(QPixmap(QString::fromUtf8("21.png")));
        qebushbutton_2 = new QEPushButton(centralwidget);
        qebushbutton_2->setObjectName(QString::fromUtf8("qebushbutton_2"));
        qebushbutton_2->setGeometry(QRect(307, 116, 69, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 404, 20));
        menuQuit = new QMenu(menubar);
        menuQuit->setObjectName(QString::fromUtf8("menuQuit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuQuit->menuAction());
        menuQuit->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionFile->setText(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        qelabelWFType->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):MBBO:WF:TYPE.DESC", 0, QApplication::UnicodeUTF8)));
        qelabelWFType->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qecombobox->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):MBBO:WF:TYPE", 0, QApplication::UnicodeUTF8)));
        qecombobox->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qelabelMin->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:MIN.DESC", 0, QApplication::UnicodeUTF8)));
        qelabelMin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:MIN", 0, QApplication::UnicodeUTF8)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qelabelMax->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:MAX.DESC", 0, QApplication::UnicodeUTF8)));
        qelabelMax->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:MAX", 0, QApplication::UnicodeUTF8)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qelabelNPTS->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:NPTS.DESC", 0, QApplication::UnicodeUTF8)));
        qelabelNPTS->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:NPTS", 0, QApplication::UnicodeUTF8)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qebushbutton->setText(QApplication::translate("MainWindow", "Make", 0, QApplication::UnicodeUTF8));
        qebushbutton->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):ASUB:WAVEFORMS.PROC", 0, QApplication::UnicodeUTF8)));
        qebushbutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        qebitstatus->setProperty("variable", QVariant(QApplication::translate("MainWindow", "QTPLOT:MBBO:WF:TYPE", 0, QApplication::UnicodeUTF8)));
        xygraph->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "QTPLOT:WF:DATA", 0, QApplication::UnicodeUTF8)));
        qebushbutton_2->setText(QApplication::translate("MainWindow", "Make", 0, QApplication::UnicodeUTF8));
        qebushbutton_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):ASUB:WAVEFORMS.PROC", 0, QApplication::UnicodeUTF8)));
        qebushbutton_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=QTPLOT", 0, QApplication::UnicodeUTF8)));
        menuQuit->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
