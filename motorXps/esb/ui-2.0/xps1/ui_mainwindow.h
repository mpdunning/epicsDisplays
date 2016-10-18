/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Apr 19 20:40:35 2013
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "QEPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QEPushButton *QEPushButtonMotor;
    QEPushButton *qepushbutton;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QEPushButton *QEPushButtonMotor_2;
    QEPushButton *qepushbutton_2;
    QEPushButton *qepushbutton_3;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QEPushButton *QEPushButtonMotor_3;
    QEPushButton *qepushbutton_4;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QEPushButton *QEPushButtonMotor_4;
    QEPushButton *qepushbutton_5;
    QEPushButton *qepushbutton_6;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(409, 213);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(8, 4, 193, 60));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 20, 158, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        QEPushButtonMotor = new QEPushButton(layoutWidget);
        QEPushButtonMotor->setObjectName(QString::fromUtf8("QEPushButtonMotor"));

        horizontalLayout->addWidget(QEPushButtonMotor);

        qepushbutton = new QEPushButton(layoutWidget);
        qepushbutton->setObjectName(QString::fromUtf8("qepushbutton"));

        horizontalLayout->addWidget(qepushbutton);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(8, 68, 193, 60));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(16, 20, 158, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        QEPushButtonMotor_2 = new QEPushButton(layoutWidget1);
        QEPushButtonMotor_2->setObjectName(QString::fromUtf8("QEPushButtonMotor_2"));

        horizontalLayout_2->addWidget(QEPushButtonMotor_2);

        qepushbutton_2 = new QEPushButton(layoutWidget1);
        qepushbutton_2->setObjectName(QString::fromUtf8("qepushbutton_2"));

        horizontalLayout_2->addWidget(qepushbutton_2);

        qepushbutton_3 = new QEPushButton(centralWidget);
        qepushbutton_3->setObjectName(QString::fromUtf8("qepushbutton_3"));
        qepushbutton_3->setGeometry(QRect(24, 136, 157, 25));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(204, 4, 193, 60));
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(16, 20, 158, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        QEPushButtonMotor_3 = new QEPushButton(layoutWidget_2);
        QEPushButtonMotor_3->setObjectName(QString::fromUtf8("QEPushButtonMotor_3"));

        horizontalLayout_3->addWidget(QEPushButtonMotor_3);

        qepushbutton_4 = new QEPushButton(layoutWidget_2);
        qepushbutton_4->setObjectName(QString::fromUtf8("qepushbutton_4"));

        horizontalLayout_3->addWidget(qepushbutton_4);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(204, 68, 193, 60));
        layoutWidget_3 = new QWidget(groupBox_4);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(16, 20, 158, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        QEPushButtonMotor_4 = new QEPushButton(layoutWidget_3);
        QEPushButtonMotor_4->setObjectName(QString::fromUtf8("QEPushButtonMotor_4"));

        horizontalLayout_4->addWidget(QEPushButtonMotor_4);

        qepushbutton_5 = new QEPushButton(layoutWidget_3);
        qepushbutton_5->setObjectName(QString::fromUtf8("qepushbutton_5"));

        horizontalLayout_4->addWidget(qepushbutton_5);

        qepushbutton_6 = new QEPushButton(centralWidget);
        qepushbutton_6->setObjectName(QString::fromUtf8("qepushbutton_6"));
        qepushbutton_6->setGeometry(QRect(252, 132, 92, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 409, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Motor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "Motor Control", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "PhaseShifter 1", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor->setText(QApplication::translate("MainWindow", "Motion", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor->setProperty("variableSubstitutions", QVariant(QString()));
        QEPushButtonMotor->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "motor-m1", 0, QApplication::UnicodeUTF8)));
        qepushbutton->setText(QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qepushbutton->setProperty("variableSubstitutions", QVariant(QString()));
        qepushbutton->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "setup-m1", 0, QApplication::UnicodeUTF8)));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "PhaseShifter 2", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor_2->setText(QApplication::translate("MainWindow", "Motion", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor_2->setProperty("variableSubstitutions", QVariant(QString()));
        QEPushButtonMotor_2->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "motor-m2", 0, QApplication::UnicodeUTF8)));
        qepushbutton_2->setText(QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qepushbutton_2->setProperty("variableSubstitutions", QVariant(QString()));
        qepushbutton_2->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "setup-m2", 0, QApplication::UnicodeUTF8)));
        qepushbutton_3->setText(QApplication::translate("MainWindow", "Phase & Amplitude", 0, QApplication::UnicodeUTF8));
        qepushbutton_3->setProperty("variableSubstitutions", QVariant(QString()));
        qepushbutton_3->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "phasedialog.ui", 0, QApplication::UnicodeUTF8)));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "800nm WavePlate", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor_3->setText(QApplication::translate("MainWindow", "Motion", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor_3->setProperty("variableSubstitutions", QVariant(QString()));
        QEPushButtonMotor_3->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "motor-m3", 0, QApplication::UnicodeUTF8)));
        qepushbutton_4->setText(QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qepushbutton_4->setProperty("variableSubstitutions", QVariant(QString()));
        qepushbutton_4->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "setup-m3", 0, QApplication::UnicodeUTF8)));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "1600nm WavePlate", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor_4->setText(QApplication::translate("MainWindow", "Motion", 0, QApplication::UnicodeUTF8));
        QEPushButtonMotor_4->setProperty("variableSubstitutions", QVariant(QString()));
        QEPushButtonMotor_4->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "motor-m4", 0, QApplication::UnicodeUTF8)));
        qepushbutton_5->setText(QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qepushbutton_5->setProperty("variableSubstitutions", QVariant(QString()));
        qepushbutton_5->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "setup-m4", 0, QApplication::UnicodeUTF8)));
        qepushbutton_6->setText(QApplication::translate("MainWindow", "Motor", 0, QApplication::UnicodeUTF8));
        qepushbutton_6->setProperty("variableSubstitutions", QVariant(QString()));
        qepushbutton_6->setProperty("guiFile", QVariant(QApplication::translate("MainWindow", "motor-m1", 0, QApplication::UnicodeUTF8)));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
