/********************************************************************************
** Form generated from reading UI file 'setupdialog.ui'
**
** Created: Fri Apr 19 20:40:35 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPDIALOG_H
#define UI_SETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "QCaComboBoxPlugin.h"
#include "QCaLabelPlugin.h"
#include "QCaLineEditPlugin.h"

QT_BEGIN_NAMESPACE

class Ui_SetupDialog
{
public:
    QPushButton *PushButtonExit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCaLabelPlugin *QCaLabelName;
    QCaLabelPlugin *QCaLabelDesc;
    QCaLabelPlugin *QCaLabelDesc_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCaLineEditPlugin *QCaLineEditHLM;
    QCaLineEditPlugin *QCaLineEditLLM;
    QCaLineEditPlugin *QCaLineEditDHLM;
    QCaLineEditPlugin *QCaLineEditDLLM;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *tab_2;
    QCaLineEditPlugin *QCaLineEditSMAX;
    QCaLineEditPlugin *QCaLineEditS;
    QCaLineEditPlugin *QCaLineEditSBAK;
    QCaLineEditPlugin *QCaLineEditSBAS;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QCaLineEditPlugin *QCaLineEditSBAS_2;
    QCaLineEditPlugin *QCaLineEditSBAS_3;
    QLabel *label_8;
    QCaLineEditPlugin *QCaLineEditSBAS_4;
    QCaLineEditPlugin *QCaLineEditSBAS_5;
    QCaLineEditPlugin *QCaLineEditSBAS_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QCaLabelPlugin *qcalabelplugin;
    QLabel *label_12;
    QCaLabelPlugin *qcalabelplugin_2;
    QLabel *label_13;
    QLabel *label_28;
    QLabel *label_29;
    QWidget *tab_3;
    QCaLineEditPlugin *qcalineeditplugin;
    QLabel *label_14;
    QCaLineEditPlugin *qcalineeditplugin_2;
    QCaLineEditPlugin *qcalineeditplugin_3;
    QCaLineEditPlugin *qcalineeditplugin_4;
    QCaLineEditPlugin *qcalineeditplugin_5;
    QCaLineEditPlugin *qcalineeditplugin_6;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QCaLabelPlugin *qcalabelplugin_4;
    QCaLabelPlugin *qcalabelplugin_5;
    QCaLabelPlugin *qcalabelplugin_6;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QCaLineEditPlugin *qcalineeditplugin_7;
    QLabel *label_23;
    QLabel *label_24;
    QWidget *tab_4;
    QCaLineEditPlugin *qcalineeditplugin_8;
    QCaLabelPlugin *qcalabelplugin_3;
    QLabel *label_25;
    QCaLineEditPlugin *qcalineeditplugin_9;
    QCaLineEditPlugin *qcalineeditplugin_10;
    QLabel *label_26;
    QLabel *label_27;
    QCaComboBoxPlugin *qcacomboboxplugin;
    QCaComboBoxPlugin *qcacomboboxplugin_2;

    void setupUi(QDialog *SetupDialog)
    {
        if (SetupDialog->objectName().isEmpty())
            SetupDialog->setObjectName(QString::fromUtf8("SetupDialog"));
        SetupDialog->resize(359, 383);
        PushButtonExit = new QPushButton(SetupDialog);
        PushButtonExit->setObjectName(QString::fromUtf8("PushButtonExit"));
        PushButtonExit->setGeometry(QRect(264, 344, 83, 29));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        PushButtonExit->setFont(font);
        PushButtonExit->setAutoDefault(false);
        layoutWidget = new QWidget(SetupDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 9, 350, 50));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        QCaLabelName = new QCaLabelPlugin(layoutWidget);
        QCaLabelName->setObjectName(QString::fromUtf8("QCaLabelName"));
        QCaLabelName->setMinimumSize(QSize(254, 16));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        QCaLabelName->setFont(font1);
        QCaLabelName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(QCaLabelName, 0, 0, 1, 1);

        QCaLabelDesc = new QCaLabelPlugin(layoutWidget);
        QCaLabelDesc->setObjectName(QString::fromUtf8("QCaLabelDesc"));
        QCaLabelDesc->setMinimumSize(QSize(260, 16));
        QCaLabelDesc->setFont(font);
        QCaLabelDesc->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(QCaLabelDesc, 1, 0, 1, 1);

        QCaLabelDesc_2 = new QCaLabelPlugin(layoutWidget);
        QCaLabelDesc_2->setObjectName(QString::fromUtf8("QCaLabelDesc_2"));
        QCaLabelDesc_2->setFont(font);
        QCaLabelDesc_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(QCaLabelDesc_2, 1, 1, 1, 1);

        tabWidget = new QTabWidget(SetupDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(8, 67, 337, 273));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        QCaLineEditHLM = new QCaLineEditPlugin(tab);
        QCaLineEditHLM->setObjectName(QString::fromUtf8("QCaLineEditHLM"));
        QCaLineEditHLM->setGeometry(QRect(80, 40, 80, 21));
        QCaLineEditHLM->setPrecision(5u);
        QCaLineEditHLM->setAddUnits(false);
        QCaLineEditLLM = new QCaLineEditPlugin(tab);
        QCaLineEditLLM->setObjectName(QString::fromUtf8("QCaLineEditLLM"));
        QCaLineEditLLM->setGeometry(QRect(80, 68, 80, 21));
        QCaLineEditLLM->setPrecision(5u);
        QCaLineEditLLM->setAddUnits(false);
        QCaLineEditDHLM = new QCaLineEditPlugin(tab);
        QCaLineEditDHLM->setObjectName(QString::fromUtf8("QCaLineEditDHLM"));
        QCaLineEditDHLM->setGeometry(QRect(172, 40, 80, 21));
        QCaLineEditDHLM->setPrecision(5u);
        QCaLineEditDHLM->setAddUnits(false);
        QCaLineEditDLLM = new QCaLineEditPlugin(tab);
        QCaLineEditDLLM->setObjectName(QString::fromUtf8("QCaLineEditDLLM"));
        QCaLineEditDLLM->setGeometry(QRect(172, 68, 80, 21));
        QCaLineEditDLLM->setPrecision(5u);
        QCaLineEditDLLM->setAddUnits(false);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 44, 57, 15));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 68, 57, 15));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 20, 57, 15));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(172, 20, 57, 15));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        QCaLineEditSMAX = new QCaLineEditPlugin(tab_2);
        QCaLineEditSMAX->setObjectName(QString::fromUtf8("QCaLineEditSMAX"));
        QCaLineEditSMAX->setGeometry(QRect(152, 20, 80, 21));
        QCaLineEditSMAX->setPrecision(5u);
        QCaLineEditSMAX->setAddUnits(false);
        QCaLineEditS = new QCaLineEditPlugin(tab_2);
        QCaLineEditS->setObjectName(QString::fromUtf8("QCaLineEditS"));
        QCaLineEditS->setGeometry(QRect(152, 48, 80, 21));
        QCaLineEditS->setPrecision(5u);
        QCaLineEditS->setAddUnits(false);
        QCaLineEditSBAK = new QCaLineEditPlugin(tab_2);
        QCaLineEditSBAK->setObjectName(QString::fromUtf8("QCaLineEditSBAK"));
        QCaLineEditSBAK->setGeometry(QRect(240, 48, 80, 21));
        QCaLineEditSBAK->setPrecision(5u);
        QCaLineEditSBAK->setAddUnits(false);
        QCaLineEditSBAS = new QCaLineEditPlugin(tab_2);
        QCaLineEditSBAS->setObjectName(QString::fromUtf8("QCaLineEditSBAS"));
        QCaLineEditSBAS->setGeometry(QRect(152, 76, 80, 21));
        QCaLineEditSBAS->setPrecision(5u);
        QCaLineEditSBAS->setAddUnits(false);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(44, 24, 105, 16));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(44, 48, 105, 16));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(36, 76, 113, 16));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QCaLineEditSBAS_2 = new QCaLineEditPlugin(tab_2);
        QCaLineEditSBAS_2->setObjectName(QString::fromUtf8("QCaLineEditSBAS_2"));
        QCaLineEditSBAS_2->setGeometry(QRect(152, 104, 80, 21));
        QCaLineEditSBAS_2->setPrecision(5u);
        QCaLineEditSBAS_2->setAddUnits(false);
        QCaLineEditSBAS_3 = new QCaLineEditPlugin(tab_2);
        QCaLineEditSBAS_3->setObjectName(QString::fromUtf8("QCaLineEditSBAS_3"));
        QCaLineEditSBAS_3->setGeometry(QRect(240, 104, 80, 21));
        QCaLineEditSBAS_3->setPrecision(5u);
        QCaLineEditSBAS_3->setAddUnits(false);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(36, 104, 113, 16));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QCaLineEditSBAS_4 = new QCaLineEditPlugin(tab_2);
        QCaLineEditSBAS_4->setObjectName(QString::fromUtf8("QCaLineEditSBAS_4"));
        QCaLineEditSBAS_4->setGeometry(QRect(240, 132, 80, 21));
        QCaLineEditSBAS_4->setPrecision(5u);
        QCaLineEditSBAS_4->setAddUnits(false);
        QCaLineEditSBAS_5 = new QCaLineEditPlugin(tab_2);
        QCaLineEditSBAS_5->setObjectName(QString::fromUtf8("QCaLineEditSBAS_5"));
        QCaLineEditSBAS_5->setGeometry(QRect(152, 160, 80, 21));
        QCaLineEditSBAS_5->setPrecision(5u);
        QCaLineEditSBAS_5->setAddUnits(false);
        QCaLineEditSBAS_6 = new QCaLineEditPlugin(tab_2);
        QCaLineEditSBAS_6->setObjectName(QString::fromUtf8("QCaLineEditSBAS_6"));
        QCaLineEditSBAS_6->setGeometry(QRect(152, 188, 80, 21));
        QCaLineEditSBAS_6->setPrecision(5u);
        QCaLineEditSBAS_6->setAddUnits(false);
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(4, 132, 121, 16));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(36, 160, 113, 16));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(12, 192, 93, 16));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalabelplugin = new QCaLabelPlugin(tab_2);
        qcalabelplugin->setObjectName(QString::fromUtf8("qcalabelplugin"));
        qcalabelplugin->setGeometry(QRect(124, 132, 29, 16));
        qcalabelplugin->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(152, 132, 16, 16));
        qcalabelplugin_2 = new QCaLabelPlugin(tab_2);
        qcalabelplugin_2->setObjectName(QString::fromUtf8("qcalabelplugin_2"));
        qcalabelplugin_2->setGeometry(QRect(104, 192, 29, 16));
        qcalabelplugin_2->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(132, 192, 16, 16));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(152, 2, 57, 15));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(240, 2, 57, 15));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        qcalineeditplugin = new QCaLineEditPlugin(tab_3);
        qcalineeditplugin->setObjectName(QString::fromUtf8("qcalineeditplugin"));
        qcalineeditplugin->setGeometry(QRect(116, 12, 89, 20));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(56, 14, 57, 15));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalineeditplugin_2 = new QCaLineEditPlugin(tab_3);
        qcalineeditplugin_2->setObjectName(QString::fromUtf8("qcalineeditplugin_2"));
        qcalineeditplugin_2->setGeometry(QRect(116, 36, 89, 20));
        qcalineeditplugin_2->setAddUnits(false);
        qcalineeditplugin_3 = new QCaLineEditPlugin(tab_3);
        qcalineeditplugin_3->setObjectName(QString::fromUtf8("qcalineeditplugin_3"));
        qcalineeditplugin_3->setGeometry(QRect(116, 60, 89, 20));
        qcalineeditplugin_3->setAddUnits(false);
        qcalineeditplugin_4 = new QCaLineEditPlugin(tab_3);
        qcalineeditplugin_4->setObjectName(QString::fromUtf8("qcalineeditplugin_4"));
        qcalineeditplugin_4->setGeometry(QRect(116, 84, 89, 20));
        qcalineeditplugin_4->setAddUnits(false);
        qcalineeditplugin_5 = new QCaLineEditPlugin(tab_3);
        qcalineeditplugin_5->setObjectName(QString::fromUtf8("qcalineeditplugin_5"));
        qcalineeditplugin_5->setGeometry(QRect(116, 108, 89, 20));
        qcalineeditplugin_5->setAddUnits(false);
        qcalineeditplugin_6 = new QCaLineEditPlugin(tab_3);
        qcalineeditplugin_6->setObjectName(QString::fromUtf8("qcalineeditplugin_6"));
        qcalineeditplugin_6->setGeometry(QRect(116, 132, 201, 20));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(56, 38, 57, 15));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(56, 62, 57, 15));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(56, 86, 57, 15));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(48, 110, 65, 15));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(40, 134, 73, 15));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalabelplugin_4 = new QCaLabelPlugin(tab_3);
        qcalabelplugin_4->setObjectName(QString::fromUtf8("qcalabelplugin_4"));
        qcalabelplugin_4->setGeometry(QRect(208, 64, 21, 16));
        qcalabelplugin_5 = new QCaLabelPlugin(tab_3);
        qcalabelplugin_5->setObjectName(QString::fromUtf8("qcalabelplugin_5"));
        qcalabelplugin_5->setGeometry(QRect(208, 88, 21, 16));
        qcalabelplugin_6 = new QCaLabelPlugin(tab_3);
        qcalabelplugin_6->setObjectName(QString::fromUtf8("qcalabelplugin_6"));
        qcalabelplugin_6->setGeometry(QRect(208, 112, 21, 16));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(208, 40, 65, 16));
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(232, 64, 33, 16));
        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(232, 88, 37, 16));
        qcalineeditplugin_7 = new QCaLineEditPlugin(tab_3);
        qcalineeditplugin_7->setObjectName(QString::fromUtf8("qcalineeditplugin_7"));
        qcalineeditplugin_7->setGeometry(QRect(116, 160, 89, 20));
        qcalineeditplugin_7->setAddUnits(false);
        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(12, 164, 101, 15));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(208, 162, 25, 16));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        qcalineeditplugin_8 = new QCaLineEditPlugin(tab_4);
        qcalineeditplugin_8->setObjectName(QString::fromUtf8("qcalineeditplugin_8"));
        qcalineeditplugin_8->setGeometry(QRect(132, 12, 80, 20));
        qcalineeditplugin_8->setAddUnits(false);
        qcalabelplugin_3 = new QCaLabelPlugin(tab_4);
        qcalabelplugin_3->setObjectName(QString::fromUtf8("qcalabelplugin_3"));
        qcalabelplugin_3->setGeometry(QRect(214, 14, 21, 16));
        label_25 = new QLabel(tab_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(60, 14, 69, 15));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcalineeditplugin_9 = new QCaLineEditPlugin(tab_4);
        qcalineeditplugin_9->setObjectName(QString::fromUtf8("qcalineeditplugin_9"));
        qcalineeditplugin_9->setGeometry(QRect(132, 36, 80, 20));
        qcalineeditplugin_9->setAddUnits(false);
        qcalineeditplugin_10 = new QCaLineEditPlugin(tab_4);
        qcalineeditplugin_10->setObjectName(QString::fromUtf8("qcalineeditplugin_10"));
        qcalineeditplugin_10->setGeometry(QRect(132, 60, 80, 20));
        qcalineeditplugin_10->setAddUnits(false);
        label_26 = new QLabel(tab_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(56, 38, 73, 15));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_27 = new QLabel(tab_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(60, 62, 69, 15));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qcacomboboxplugin = new QCaComboBoxPlugin(tab_4);
        qcacomboboxplugin->setObjectName(QString::fromUtf8("qcacomboboxplugin"));
        qcacomboboxplugin->setGeometry(QRect(132, 112, 101, 21));
        qcacomboboxplugin->setSubscribe(true);
        qcacomboboxplugin_2 = new QCaComboBoxPlugin(tab_4);
        qcacomboboxplugin_2->setObjectName(QString::fromUtf8("qcacomboboxplugin_2"));
        qcacomboboxplugin_2->setGeometry(QRect(132, 140, 101, 21));
        qcacomboboxplugin_2->setSubscribe(true);
        tabWidget->addTab(tab_4, QString());

        retranslateUi(SetupDialog);
        QObject::connect(PushButtonExit, SIGNAL(clicked(bool)), SetupDialog, SLOT(close()));

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(SetupDialog);
    } // setupUi

    void retranslateUi(QDialog *SetupDialog)
    {
        SetupDialog->setWindowTitle(QApplication::translate("SetupDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        PushButtonExit->setText(QApplication::translate("SetupDialog", "Close", 0, QApplication::UnicodeUTF8));
        PushButtonExit->setShortcut(QString());
        QCaLabelName->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.NAME", 0, QApplication::UnicodeUTF8)));
        QCaLabelDesc->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.DESC", 0, QApplication::UnicodeUTF8)));
        QCaLabelDesc_2->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.DTYP", 0, QApplication::UnicodeUTF8)));
        QCaLineEditHLM->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.HLM", 0, QApplication::UnicodeUTF8)));
        QCaLineEditLLM->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.LLM", 0, QApplication::UnicodeUTF8)));
        QCaLineEditDHLM->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.DHLM", 0, QApplication::UnicodeUTF8)));
        QCaLineEditDLLM->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.DLLM", 0, QApplication::UnicodeUTF8)));
        label->setText(QApplication::translate("SetupDialog", "High:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SetupDialog", "Low:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SetupDialog", "User", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SetupDialog", "Dial", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SetupDialog", "Limits", 0, QApplication::UnicodeUTF8));
        QCaLineEditSMAX->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.SMAX", 0, QApplication::UnicodeUTF8)));
        QCaLineEditSMAX->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        QCaLineEditS->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.S", 0, QApplication::UnicodeUTF8)));
        QCaLineEditSBAK->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.SBAK", 0, QApplication::UnicodeUTF8)));
        QCaLineEditSBAS->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.SBAS", 0, QApplication::UnicodeUTF8)));
        label_5->setText(QApplication::translate("SetupDialog", "Max Speed (rps)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SetupDialog", "Speed (rps)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SetupDialog", "Base Speed (rps)", 0, QApplication::UnicodeUTF8));
        QCaLineEditSBAS_2->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.ACCL", 0, QApplication::UnicodeUTF8)));
        QCaLineEditSBAS_3->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.BACC", 0, QApplication::UnicodeUTF8)));
        label_8->setText(QApplication::translate("SetupDialog", "Accel Time (s)", 0, QApplication::UnicodeUTF8));
        QCaLineEditSBAS_4->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.BDST", 0, QApplication::UnicodeUTF8)));
        QCaLineEditSBAS_5->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.FRAC", 0, QApplication::UnicodeUTF8)));
        QCaLineEditSBAS_6->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.HVEL", 0, QApplication::UnicodeUTF8)));
        label_9->setText(QApplication::translate("SetupDialog", "Backlash Dist (", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SetupDialog", "Move Fraction", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SetupDialog", "Home Speed (", 0, QApplication::UnicodeUTF8));
        qcalabelplugin->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):MOTR.EGU", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        label_12->setText(QApplication::translate("SetupDialog", ")", 0, QApplication::UnicodeUTF8));
        qcalabelplugin_2->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):MOTR.EGU", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        label_13->setText(QApplication::translate("SetupDialog", "/s)", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("SetupDialog", "Normal", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("SetupDialog", "Backlash", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SetupDialog", "Dynamics", 0, QApplication::UnicodeUTF8));
        qcalineeditplugin->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.EGU", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        label_14->setText(QApplication::translate("SetupDialog", "Units", 0, QApplication::UnicodeUTF8));
        qcalineeditplugin_2->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.SREV", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_3->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.UREV", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_4->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.ERES", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_5->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.RRES", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_6->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.RDBL", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        label_15->setText(QApplication::translate("SetupDialog", "Motor", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("SetupDialog", "Motor", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("SetupDialog", "Encoder", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("SetupDialog", "Readback", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("SetupDialog", "RBV in Link", 0, QApplication::UnicodeUTF8));
        qcalabelplugin_4->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):MOTR.EGU", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_5->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):MOTR.EGU", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_6->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):MOTR.EGU", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        label_20->setText(QApplication::translate("SetupDialog", "Steps/rev", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("SetupDialog", "/rev", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("SetupDialog", "/step", 0, QApplication::UnicodeUTF8));
        qcalineeditplugin_7->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.DLY", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        label_23->setText(QApplication::translate("SetupDialog", "Readback Delay", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("SetupDialog", "sec", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SetupDialog", "Resolution", 0, QApplication::UnicodeUTF8));
        qcalineeditplugin_8->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.RDBD", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_3->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):MOTR.EGU", 0, QApplication::UnicodeUTF8)));
        qcalabelplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        label_25->setText(QApplication::translate("SetupDialog", "Deadband", 0, QApplication::UnicodeUTF8));
        qcalineeditplugin_9->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.RTRY", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_10->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):MOTR.PREC", 0, QApplication::UnicodeUTF8)));
        qcalineeditplugin_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        label_26->setText(QApplication::translate("SetupDialog", "Max Retries", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("SetupDialog", "Precision", 0, QApplication::UnicodeUTF8));
        qcacomboboxplugin->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):CALC:VAL.SCAN", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin_2->setProperty("variable", QVariant(QApplication::translate("SetupDialog", "$(P):$(M):CALC:RBV.SCAN", 0, QApplication::UnicodeUTF8)));
        qcacomboboxplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SetupDialog", "Misc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetupDialog: public Ui_SetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPDIALOG_H
