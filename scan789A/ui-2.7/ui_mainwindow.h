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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QEComboBox.h"
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEPushButton.h"
#include "QEShape.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QELineEdit *qelineedit;
    QELineEdit *qelineedit_2;
    QEPushButton *qepushbutton;
    QEPushButton *qepushbutton_2;
    QEPushButton *qepushbutton_8;
    QEShape *qeshape;
    QEShape *qeshape_2;
    QEShape *qeshape_3;
    QEShape *qeshape_4;
    QEShape *qeshape_5;
    QEShape *qeshape_6;
    QEShape *qeshape_7;
    QGroupBox *groupBox;
    QEPushButton *qepushbutton_10;
    QEPushButton *qepushbutton_9;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *tab_2;
    QELineEdit *qelineedit_3;
    QELineEdit *qelineedit_4;
    QELineEdit *qelineedit_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QEPushButton *qepushbutton_3;
    QEPushButton *qepushbutton_4;
    QEPushButton *qepushbutton_5;
    QLabel *label_15;
    QWidget *tab_3;
    QEComboBox *qecombobox;
    QEComboBox *qecombobox_1;
    QLabel *label_11;
    QLabel *label_12;
    QEPushButton *qepushbutton_13;
    QELabel *qelabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QEPushButton *qepushbutton_14;
    QHBoxLayout *horizontalLayout;
    QLabel *label_16;
    QEShape *qeshape_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 270);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(4, 4, 351, 261));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(8, 12, 56, 15));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(8, 40, 56, 15));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(8, 68, 56, 15));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 108, 64, 15));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 136, 64, 15));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 164, 64, 15));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 192, 64, 15));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit = new QELineEdit(tab);
        qelineedit->setObjectName(QString::fromUtf8("qelineedit"));
        qelineedit->setGeometry(QRect(148, 20, 77, 20));
        qelineedit->setAddUnits(false);
        qelineedit->setProperty("format", QVariant(QELineEdit::Floating));
        qelineedit_2 = new QELineEdit(tab);
        qelineedit_2->setObjectName(QString::fromUtf8("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(148, 44, 77, 20));
        qelineedit_2->setAddUnits(false);
        qelineedit_2->setProperty("format", QVariant(QELineEdit::Floating));
        qepushbutton = new QEPushButton(tab);
        qepushbutton->setObjectName(QString::fromUtf8("qepushbutton"));
        qepushbutton->setGeometry(QRect(256, 20, 20, 20));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        qepushbutton->setFont(font);
        qepushbutton_2 = new QEPushButton(tab);
        qepushbutton_2->setObjectName(QString::fromUtf8("qepushbutton_2"));
        qepushbutton_2->setGeometry(QRect(256, 44, 20, 20));
        qepushbutton_2->setFont(font);
        qepushbutton_8 = new QEPushButton(tab);
        qepushbutton_8->setObjectName(QString::fromUtf8("qepushbutton_8"));
        qepushbutton_8->setGeometry(QRect(212, 80, 64, 28));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        qepushbutton_8->setFont(font1);
        qeshape = new QEShape(tab);
        qeshape->setObjectName(QString::fromUtf8("qeshape"));
        qeshape->setGeometry(QRect(72, 12, 18, 18));
        qeshape->setProperty("animation1", QVariant(QEShape::ColourValue));
        qeshape->setProperty("animation6", QVariant(QEShape::ColourHue));
        qeshape->setProperty("scale1", QVariant(190));
        qeshape->setProperty("offset1", QVariant(60));
        qeshape->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape->setProperty("color1", QVariant(QColor(255, 100, 48)));
        qeshape_2 = new QEShape(tab);
        qeshape_2->setObjectName(QString::fromUtf8("qeshape_2"));
        qeshape_2->setGeometry(QRect(72, 40, 18, 18));
        qeshape_2->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_2->setProperty("scale1", QVariant(120));
        qeshape_2->setProperty("offset1", QVariant(0));
        qeshape_2->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape_2->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape_2->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qeshape_3 = new QEShape(tab);
        qeshape_3->setObjectName(QString::fromUtf8("qeshape_3"));
        qeshape_3->setGeometry(QRect(72, 68, 18, 18));
        qeshape_3->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_3->setProperty("scale1", QVariant(120));
        qeshape_3->setProperty("offset1", QVariant(0));
        qeshape_3->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape_3->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape_3->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qeshape_4 = new QEShape(tab);
        qeshape_4->setObjectName(QString::fromUtf8("qeshape_4"));
        qeshape_4->setGeometry(QRect(72, 108, 18, 18));
        qeshape_4->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_4->setProperty("scale1", QVariant(120));
        qeshape_4->setProperty("offset1", QVariant(0));
        qeshape_4->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape_4->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape_4->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qeshape_5 = new QEShape(tab);
        qeshape_5->setObjectName(QString::fromUtf8("qeshape_5"));
        qeshape_5->setGeometry(QRect(72, 136, 18, 18));
        qeshape_5->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_5->setProperty("scale1", QVariant(120));
        qeshape_5->setProperty("offset1", QVariant(0));
        qeshape_5->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape_5->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape_5->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qeshape_6 = new QEShape(tab);
        qeshape_6->setObjectName(QString::fromUtf8("qeshape_6"));
        qeshape_6->setGeometry(QRect(72, 164, 18, 18));
        qeshape_6->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_6->setProperty("scale1", QVariant(120));
        qeshape_6->setProperty("offset1", QVariant(0));
        qeshape_6->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape_6->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape_6->setProperty("color1", QVariant(QColor(0, 255, 0)));
        qeshape_7 = new QEShape(tab);
        qeshape_7->setObjectName(QString::fromUtf8("qeshape_7"));
        qeshape_7->setGeometry(QRect(72, 192, 18, 18));
        qeshape_7->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_7->setProperty("scale1", QVariant(120));
        qeshape_7->setProperty("offset1", QVariant(0));
        qeshape_7->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape_7->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape_7->setProperty("color1", QVariant(QColor(0, 255, 0)));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(128, 156, 201, 65));
        qepushbutton_10 = new QEPushButton(groupBox);
        qepushbutton_10->setObjectName(QString::fromUtf8("qepushbutton_10"));
        qepushbutton_10->setGeometry(QRect(104, 24, 77, 25));
        qepushbutton_9 = new QEPushButton(groupBox);
        qepushbutton_9->setObjectName(QString::fromUtf8("qepushbutton_9"));
        qepushbutton_9->setGeometry(QRect(20, 24, 77, 25));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(228, 46, 25, 16));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(228, 22, 25, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        qelineedit_3 = new QELineEdit(tab_2);
        qelineedit_3->setObjectName(QString::fromUtf8("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(100, 52, 110, 20));
        qelineedit_4 = new QELineEdit(tab_2);
        qelineedit_4->setObjectName(QString::fromUtf8("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(100, 80, 110, 20));
        qelineedit_5 = new QELineEdit(tab_2);
        qelineedit_5->setObjectName(QString::fromUtf8("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(100, 108, 110, 20));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(16, 54, 84, 15));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(16, 82, 84, 15));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(16, 110, 84, 15));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qepushbutton_3 = new QEPushButton(tab_2);
        qepushbutton_3->setObjectName(QString::fromUtf8("qepushbutton_3"));
        qepushbutton_3->setGeometry(QRect(216, 52, 28, 20));
        qepushbutton_4 = new QEPushButton(tab_2);
        qepushbutton_4->setObjectName(QString::fromUtf8("qepushbutton_4"));
        qepushbutton_4->setGeometry(QRect(216, 80, 28, 20));
        qepushbutton_5 = new QEPushButton(tab_2);
        qepushbutton_5->setObjectName(QString::fromUtf8("qepushbutton_5"));
        qepushbutton_5->setGeometry(QRect(216, 108, 28, 20));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(104, 28, 121, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        qecombobox = new QEComboBox(tab_3);
        qecombobox->setObjectName(QString::fromUtf8("qecombobox"));
        qecombobox->setGeometry(QRect(104, 16, 97, 21));
        qecombobox->setSubscribe(true);
        qecombobox->setUseDbEnumerations(true);
        qecombobox_1 = new QEComboBox(tab_3);
        qecombobox_1->setObjectName(QString::fromUtf8("qecombobox_1"));
        qecombobox_1->setGeometry(QRect(104, 44, 97, 21));
        qecombobox_1->setSubscribe(true);
        qecombobox_1->setUseDbEnumerations(true);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 89, 15));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 50, 89, 15));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qepushbutton_13 = new QEPushButton(tab_3);
        qepushbutton_13->setObjectName(QString::fromUtf8("qepushbutton_13"));
        qepushbutton_13->setEnabled(true);
        qepushbutton_13->setGeometry(QRect(12, 92, 81, 28));
        qepushbutton_13->setFont(font1);
        qelabel = new QELabel(tab_3);
        qelabel->setObjectName(QString::fromUtf8("qelabel"));
        qelabel->setGeometry(QRect(100, 100, 185, 16));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 150, 171, 81));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qepushbutton_14 = new QEPushButton(groupBox_2);
        qepushbutton_14->setObjectName(QString::fromUtf8("qepushbutton_14"));
        qepushbutton_14->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qepushbutton_14->sizePolicy().hasHeightForWidth());
        qepushbutton_14->setSizePolicy(sizePolicy);
        qepushbutton_14->setFont(font1);
        qepushbutton_14->setConfirmAction(true);
        qepushbutton_14->setArguments(QStringList() << QString::fromUtf8("sioc-esb-scan1") << QString::fromUtf8("ESB:ACSW8") << QString::fromUtf8("13"));

        verticalLayout->addWidget(qepushbutton_14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout->addWidget(label_16);

        qeshape_8 = new QEShape(groupBox_2);
        qeshape_8->setObjectName(QString::fromUtf8("qeshape_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qeshape_8->sizePolicy().hasHeightForWidth());
        qeshape_8->setSizePolicy(sizePolicy1);
        qeshape_8->setMinimumSize(QSize(25, 25));
        qeshape_8->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_8->setProperty("scale1", QVariant(120));
        qeshape_8->setProperty("offset1", QVariant(0));
        qeshape_8->setProperty("shape", QVariant(QEShape::Ellipse));
        qeshape_8->setProperty("point2", QVariant(QPoint(16, 16)));
        qeshape_8->setProperty("color1", QVariant(QColor(0, 255, 0)));

        horizontalLayout->addWidget(qeshape_8, 0, Qt::AlignRight|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Hi Limit", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Low Limit", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Stopped", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Moving", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Moving Hi", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Slewing", 0, QApplication::UnicodeUTF8));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MOVE:UP", 0, QApplication::UnicodeUTF8)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):AO:MOVE:DWN", 0, QApplication::UnicodeUTF8)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qepushbutton->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        qepushbutton->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:UP", 0, QApplication::UnicodeUTF8)));
        qepushbutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qepushbutton_2->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        qepushbutton_2->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:DWN", 0, QApplication::UnicodeUTF8)));
        qepushbutton_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qepushbutton_8->setText(QApplication::translate("MainWindow", "Abort", 0, QApplication::UnicodeUTF8));
        qepushbutton_8->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:ABORT", 0, QApplication::UnicodeUTF8)));
        qepushbutton_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qeshape->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:HOME", 0, QApplication::UnicodeUTF8)));
        qeshape->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qeshape_2->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:HI:LIM", 0, QApplication::UnicodeUTF8)));
        qeshape_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qeshape_3->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:LO:LIM", 0, QApplication::UnicodeUTF8)));
        qeshape_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qeshape_4->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:STOPPED", 0, QApplication::UnicodeUTF8)));
        qeshape_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qeshape_5->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:MOVING", 0, QApplication::UnicodeUTF8)));
        qeshape_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qeshape_6->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:MOVING:HI", 0, QApplication::UnicodeUTF8)));
        qeshape_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qeshape_7->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "$(P):BI:SLEW", 0, QApplication::UnicodeUTF8)));
        qeshape_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        groupBox->setTitle(QApplication::translate("MainWindow", "Debug", 0, QApplication::UnicodeUTF8));
        qepushbutton_10->setText(QApplication::translate("MainWindow", "get State", 0, QApplication::UnicodeUTF8));
        qepushbutton_10->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:STAT.PROC", 0, QApplication::UnicodeUTF8)));
        qepushbutton_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qepushbutton_9->setText(QApplication::translate("MainWindow", "get Limits", 0, QApplication::UnicodeUTF8));
        qepushbutton_9->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:LIMITS.PROC", 0, QApplication::UnicodeUTF8)));
        qepushbutton_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_13->setText(QApplication::translate("MainWindow", "nm", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "nm", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Motion", 0, QApplication::UnicodeUTF8));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:STRT:VELO", 0, QApplication::UnicodeUTF8)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:ACCEL", 0, QApplication::UnicodeUTF8)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):LO:VELO", 0, QApplication::UnicodeUTF8)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_8->setText(QApplication::translate("MainWindow", "Start Velocity", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Acceleration", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Velocity", 0, QApplication::UnicodeUTF8));
        qepushbutton_3->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        qepushbutton_3->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:STRT:VELO", 0, QApplication::UnicodeUTF8)));
        qepushbutton_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qepushbutton_4->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        qepushbutton_4->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:ACCEL", 0, QApplication::UnicodeUTF8)));
        qepushbutton_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qepushbutton_5->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        qepushbutton_5->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:VELOCITY", 0, QApplication::UnicodeUTF8)));
        qepushbutton_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_15->setText(QApplication::translate("MainWindow", "Units: steps & sec", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        qecombobox->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:MOVE:STAT.SCAN", 0, QApplication::UnicodeUTF8)));
        qecombobox->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qecombobox_1->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:LIMITS.SCAN", 0, QApplication::UnicodeUTF8)));
        qecombobox_1->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        label_11->setText(QApplication::translate("MainWindow", "Moving State", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Limits", 0, QApplication::UnicodeUTF8));
        qepushbutton_13->setText(QApplication::translate("MainWindow", "examine", 0, QApplication::UnicodeUTF8));
        qepushbutton_13->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):BO:EXAMINE.PROC", 0, QApplication::UnicodeUTF8)));
        qepushbutton_13->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        qelabel->setProperty("variable", QVariant(QApplication::translate("MainWindow", "$(P):SI:PARAMS", 0, QApplication::UnicodeUTF8)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("MainWindow", "P=ESB:SCAN", 0, QApplication::UnicodeUTF8)));
        groupBox_2->setTitle(QString());
        qepushbutton_14->setText(QApplication::translate("MainWindow", "restart device", 0, QApplication::UnicodeUTF8));
        qepushbutton_14->setProperty("variable", QVariant(QString()));
        qepushbutton_14->setProperty("variableSubstitutions", QVariant(QString()));
        qepushbutton_14->setProgram(QApplication::translate("MainWindow", "/afs/slac/g/testfac/extras/scripts/restartDevice.sh", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "AC Power", 0, QApplication::UnicodeUTF8));
        qeshape_8->setProperty("variable1", QVariant(QApplication::translate("MainWindow", "ESB:ACSW8:BO:SC:STATE:13", 0, QApplication::UnicodeUTF8)));
        qeshape_8->setProperty("variableSubstitutions", QVariant(QString()));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "More", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
