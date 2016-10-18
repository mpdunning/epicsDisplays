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
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "QEComboBox.h"
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Main;
    QELabel *qelabel;
    QGroupBox *groupBox;
    QELabel *qelabel_2;
    QELabel *qelabel_3;
    QLabel *label;
    QELabel *qelabel_4;
    QELabel *qelabel_5;
    QFrame *line;
    QFrame *line_2;
    QEComboBox *qecombobox;
    QEComboBox *qecombobox_2;
    QLabel *label_2;
    QWidget *Setup;
    QEPushButton *qepushbutton;
    QLabel *label_4;
    QELabel *qelabel_7;
    QELineEdit *qelineedit;
    QELabel *qelabel_8;
    QELineEdit *qelineedit_2;
    QELabel *qelabel_9;
    QELabel *qelabel_10;
    QELineEdit *qelineedit_3;
    QELineEdit *qelineedit_4;
    QELabel *qelabel_11;
    QELineEdit *qelineedit_5;
    QELabel *qelabel_6;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(426, 390);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(12, 20, 393, 281));
        Main = new QWidget();
        Main->setObjectName(QString::fromUtf8("Main"));
        qelabel = new QELabel(Main);
        qelabel->setObjectName(QString::fromUtf8("qelabel"));
        qelabel->setGeometry(QRect(16, 8, 201, 29));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        qelabel->setFont(font);
        groupBox = new QGroupBox(Main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(44, 40, 308, 157));
        qelabel_2 = new QELabel(groupBox);
        qelabel_2->setObjectName(QString::fromUtf8("qelabel_2"));
        qelabel_2->setGeometry(QRect(8, 36, 293, 73));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        qelabel_2->setFont(font1);
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2->setProperty("notation", QVariant(QELabel::Automatic));
        qelabel_3 = new QELabel(groupBox);
        qelabel_3->setObjectName(QString::fromUtf8("qelabel_3"));
        qelabel_3->setGeometry(QRect(12, 20, 129, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(8, 132, 33, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_4 = new QELabel(groupBox);
        qelabel_4->setObjectName(QString::fromUtf8("qelabel_4"));
        qelabel_4->setGeometry(QRect(48, 132, 105, 16));
        qelabel_4->setAlignment(Qt::AlignCenter);
        qelabel_5 = new QELabel(groupBox);
        qelabel_5->setObjectName(QString::fromUtf8("qelabel_5"));
        qelabel_5->setGeometry(QRect(196, 132, 69, 16));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1, 120, 305, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(160, 127, 8, 28));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        qecombobox = new QEComboBox(Main);
        qecombobox->setObjectName(QString::fromUtf8("qecombobox"));
        qecombobox->setGeometry(QRect(237, 208, 113, 21));
        qecombobox->setSubscribe(true);
        qecombobox_2 = new QEComboBox(Main);
        qecombobox_2->setObjectName(QString::fromUtf8("qecombobox_2"));
        qecombobox_2->setGeometry(QRect(92, 208, 74, 21));
        qecombobox_2->setSubscribe(true);
        label_2 = new QLabel(Main);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(52, 208, 37, 15));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(Main, QString());
        Setup = new QWidget();
        Setup->setObjectName(QString::fromUtf8("Setup"));
        qepushbutton = new QEPushButton(Setup);
        qepushbutton->setObjectName(QString::fromUtf8("qepushbutton"));
        qepushbutton->setGeometry(QRect(259, 208, 65, 25));
        qepushbutton->setSubscribe(false);
        qepushbutton->setWriteOnPress(false);
        label_4 = new QLabel(Setup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(212, 212, 41, 15));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_7 = new QELabel(Setup);
        qelabel_7->setObjectName(QString::fromUtf8("qelabel_7"));
        qelabel_7->setGeometry(QRect(84, 16, 81, 20));
        qelabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit = new QELineEdit(Setup);
        qelineedit->setObjectName(QString::fromUtf8("qelineedit"));
        qelineedit->setGeometry(QRect(168, 16, 81, 20));
        qelabel_8 = new QELabel(Setup);
        qelabel_8->setObjectName(QString::fromUtf8("qelabel_8"));
        qelabel_8->setGeometry(QRect(84, 40, 81, 20));
        qelabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_2 = new QELineEdit(Setup);
        qelineedit_2->setObjectName(QString::fromUtf8("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(168, 40, 81, 20));
        qelabel_9 = new QELabel(Setup);
        qelabel_9->setObjectName(QString::fromUtf8("qelabel_9"));
        qelabel_9->setGeometry(QRect(84, 92, 81, 20));
        qelabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_10 = new QELabel(Setup);
        qelabel_10->setObjectName(QString::fromUtf8("qelabel_10"));
        qelabel_10->setGeometry(QRect(84, 68, 81, 20));
        qelabel_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_3 = new QELineEdit(Setup);
        qelineedit_3->setObjectName(QString::fromUtf8("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(168, 92, 81, 20));
        qelineedit_4 = new QELineEdit(Setup);
        qelineedit_4->setObjectName(QString::fromUtf8("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(168, 68, 81, 20));
        qelabel_11 = new QELabel(Setup);
        qelabel_11->setObjectName(QString::fromUtf8("qelabel_11"));
        qelabel_11->setGeometry(QRect(12, 120, 153, 20));
        qelabel_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_5 = new QELineEdit(Setup);
        qelineedit_5->setObjectName(QString::fromUtf8("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(168, 120, 81, 20));
        tabWidget->addTab(Setup, QString());
        qelabel_6 = new QELabel(centralwidget);
        qelabel_6->setObjectName(QString::fromUtf8("qelabel_6"));
        qelabel_6->setGeometry(QRect(52, 312, 357, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(8, 312, 37, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        qelabel->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:VERS", 0, QApplication::UnicodeUTF8)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        groupBox->setTitle(QApplication::translate("MainWindow", "Display", 0, QApplication::UnicodeUTF8));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):CALC:READ", 0, QApplication::UnicodeUTF8)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:HEAD", 0, QApplication::UnicodeUTF8)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label->setText(QApplication::translate("MainWindow", "Res:", 0, QApplication::UnicodeUTF8));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:RESOL", 0, QApplication::UnicodeUTF8)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelabel_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LI:WL:CORR", 0, QApplication::UnicodeUTF8)));
        qelabel_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qecombobox->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:READ.SCAN", 0, QApplication::UnicodeUTF8)));
        qecombobox->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qecombobox_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):MBBO:ZERO", 0, QApplication::UnicodeUTF8)));
        qecombobox_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label_2->setText(QApplication::translate("MainWindow", "Zero:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Main), QApplication::translate("MainWindow", "Main", 0, QApplication::UnicodeUTF8));
        qepushbutton->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        qepushbutton->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:CLEAR.PROC", 0, QApplication::UnicodeUTF8)));
        qepushbutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label_4->setText(QApplication::translate("MainWindow", "Error:", 0, QApplication::UnicodeUTF8));
        qelabel_7->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:1.DESC", 0, QApplication::UnicodeUTF8)));
        qelabel_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:1", 0, QApplication::UnicodeUTF8)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelabel_8->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:2.DESC", 0, QApplication::UnicodeUTF8)));
        qelabel_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MULT:2", 0, QApplication::UnicodeUTF8)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelabel_9->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:2.DESC", 0, QApplication::UnicodeUTF8)));
        qelabel_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelabel_10->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:1.DESC", 0, QApplication::UnicodeUTF8)));
        qelabel_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:2", 0, QApplication::UnicodeUTF8)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:OFST:1", 0, QApplication::UnicodeUTF8)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelabel_11->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:WL:CORR.DESC", 0, QApplication::UnicodeUTF8)));
        qelabel_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:WL:CORR", 0, QApplication::UnicodeUTF8)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        tabWidget->setTabText(tabWidget->indexOf(Setup), QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:ERROR", 0, QApplication::UnicodeUTF8)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESA:OPEM", 0, QApplication::UnicodeUTF8)));
        label_3->setText(QApplication::translate("MainWindow", "Error:", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
