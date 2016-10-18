/********************************************************************************
** Form generated from reading UI file 'bk9000.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BK9000_H
#define UI_BK9000_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "QELabel.h"
#include "QELineEdit.h"
#include "abutton.h"
#include "cabutton.h"

QT_BEGIN_NAMESPACE

class Ui_BK9000
{
public:
    QELabel *qelabel;
    QELabel *qelabel_2;
    QELabel *qelabel_3;
    QLabel *label;
    QLabel *label_2;
    QELabel *qelabel_4;
    QLabel *label_3;
    QELabel *qelabel_5;
    QELabel *qelabel_6;
    QLabel *label_4;
    QELabel *qelabel_7;
    QELabel *qelabel_8;
    QELabel *qelabel_9;
    QLabel *label_5;
    QELabel *qelabel_10;
    QELabel *qelabel_11;
    QLabel *label_6;
    QELabel *qelabel_12;
    QELabel *qelabel_13;
    QLabel *label_7;
    QELabel *qelabel_14;
    QELabel *qelabel_15;
    QLabel *label_8;
    QELabel *qelabel_16;
    QELabel *qelabel_17;
    QELabel *qelabel_18;
    QELabel *qelabel_19;
    QELineEdit *qelineedit;
    QELineEdit *qelineedit_2;
    QELineEdit *qelineedit_3;
    QELineEdit *qelineedit_4;
    QELineEdit *qelineedit_5;
    QELineEdit *qelineedit_6;
    QELabel *qelabel_20;
    QELabel *qelabel_21;
    QELabel *qelabel_22;
    QELabel *qelabel_23;
    QELineEdit *qelineedit_7;
    QELabel *qelabel_24;
    QFrame *line;
    QLabel *label_9;
    QLabel *label_10;
    CAButton *cabutton;
    CAButton *cabutton_2;
    QPushButton *dbgPB;

    void setupUi(QDialog *BK9000)
    {
        if (BK9000->objectName().isEmpty())
            BK9000->setObjectName(QStringLiteral("BK9000"));
        BK9000->resize(374, 335);
        qelabel = new QELabel(BK9000);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(12, 10, 144, 16));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        qelabel->setFont(font);
        qelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel->setDisplayAlarmState(false);
        qelabel_2 = new QELabel(BK9000);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(12, 30, 144, 16));
        qelabel_2->setFont(font);
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2->setDisplayAlarmState(false);
        qelabel_3 = new QELabel(BK9000);
        qelabel_3->setObjectName(QStringLiteral("qelabel_3"));
        qelabel_3->setGeometry(QRect(168, 10, 49, 16));
        qelabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_3->setDisplayAlarmState(false);
        qelabel_3->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_3->setRadix(16u);
        label = new QLabel(BK9000);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(156, 10, 16, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(BK9000);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(156, 30, 16, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_4 = new QELabel(BK9000);
        qelabel_4->setObjectName(QStringLiteral("qelabel_4"));
        qelabel_4->setGeometry(QRect(168, 30, 49, 16));
        qelabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_4->setDisplayAlarmState(false);
        qelabel_4->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_4->setRadix(16u);
        label_3 = new QLabel(BK9000);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(156, 50, 16, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5 = new QELabel(BK9000);
        qelabel_5->setObjectName(QStringLiteral("qelabel_5"));
        qelabel_5->setGeometry(QRect(12, 50, 144, 16));
        qelabel_5->setFont(font);
        qelabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5->setDisplayAlarmState(false);
        qelabel_6 = new QELabel(BK9000);
        qelabel_6->setObjectName(QStringLiteral("qelabel_6"));
        qelabel_6->setGeometry(QRect(168, 50, 49, 16));
        qelabel_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_6->setDisplayAlarmState(false);
        qelabel_6->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_6->setRadix(16u);
        label_4 = new QLabel(BK9000);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(156, 74, 16, 16));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_7 = new QELabel(BK9000);
        qelabel_7->setObjectName(QStringLiteral("qelabel_7"));
        qelabel_7->setGeometry(QRect(12, 74, 144, 16));
        qelabel_7->setFont(font);
        qelabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_7->setDisplayAlarmState(false);
        qelabel_8 = new QELabel(BK9000);
        qelabel_8->setObjectName(QStringLiteral("qelabel_8"));
        qelabel_8->setGeometry(QRect(168, 74, 49, 16));
        qelabel_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_8->setDisplayAlarmState(false);
        qelabel_8->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_8->setRadix(16u);
        qelabel_9 = new QELabel(BK9000);
        qelabel_9->setObjectName(QStringLiteral("qelabel_9"));
        qelabel_9->setGeometry(QRect(12, 94, 144, 16));
        qelabel_9->setFont(font);
        qelabel_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_9->setDisplayAlarmState(false);
        label_5 = new QLabel(BK9000);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(156, 94, 16, 16));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_10 = new QELabel(BK9000);
        qelabel_10->setObjectName(QStringLiteral("qelabel_10"));
        qelabel_10->setGeometry(QRect(168, 94, 49, 16));
        qelabel_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_10->setDisplayAlarmState(false);
        qelabel_10->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_10->setRadix(16u);
        qelabel_11 = new QELabel(BK9000);
        qelabel_11->setObjectName(QStringLiteral("qelabel_11"));
        qelabel_11->setGeometry(QRect(12, 114, 144, 16));
        qelabel_11->setFont(font);
        qelabel_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_11->setDisplayAlarmState(false);
        label_6 = new QLabel(BK9000);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(156, 114, 16, 16));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_12 = new QELabel(BK9000);
        qelabel_12->setObjectName(QStringLiteral("qelabel_12"));
        qelabel_12->setGeometry(QRect(168, 114, 49, 16));
        qelabel_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_12->setDisplayAlarmState(false);
        qelabel_12->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_12->setRadix(16u);
        qelabel_13 = new QELabel(BK9000);
        qelabel_13->setObjectName(QStringLiteral("qelabel_13"));
        qelabel_13->setGeometry(QRect(12, 134, 144, 16));
        qelabel_13->setFont(font);
        qelabel_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_13->setDisplayAlarmState(false);
        label_7 = new QLabel(BK9000);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(156, 134, 16, 16));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_14 = new QELabel(BK9000);
        qelabel_14->setObjectName(QStringLiteral("qelabel_14"));
        qelabel_14->setGeometry(QRect(168, 134, 49, 16));
        qelabel_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_14->setDisplayAlarmState(false);
        qelabel_14->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_14->setRadix(16u);
        qelabel_15 = new QELabel(BK9000);
        qelabel_15->setObjectName(QStringLiteral("qelabel_15"));
        qelabel_15->setGeometry(QRect(168, 158, 49, 16));
        qelabel_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_15->setDisplayAlarmState(false);
        qelabel_15->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_15->setRadix(16u);
        label_8 = new QLabel(BK9000);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(156, 158, 16, 16));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_16 = new QELabel(BK9000);
        qelabel_16->setObjectName(QStringLiteral("qelabel_16"));
        qelabel_16->setGeometry(QRect(12, 158, 144, 16));
        qelabel_16->setFont(font);
        qelabel_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_16->setDisplayAlarmState(false);
        qelabel_17 = new QELabel(BK9000);
        qelabel_17->setObjectName(QStringLiteral("qelabel_17"));
        qelabel_17->setGeometry(QRect(12, 182, 144, 20));
        qelabel_17->setFont(font);
        qelabel_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_17->setDisplayAlarmState(false);
        qelabel_18 = new QELabel(BK9000);
        qelabel_18->setObjectName(QStringLiteral("qelabel_18"));
        qelabel_18->setGeometry(QRect(12, 202, 144, 20));
        qelabel_18->setFont(font);
        qelabel_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_18->setDisplayAlarmState(false);
        qelabel_19 = new QELabel(BK9000);
        qelabel_19->setObjectName(QStringLiteral("qelabel_19"));
        qelabel_19->setGeometry(QRect(7, 222, 149, 20));
        qelabel_19->setFont(font);
        qelabel_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_19->setDisplayAlarmState(false);
        qelineedit = new QELineEdit(BK9000);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(156, 182, 60, 20));
        qelineedit_2 = new QELineEdit(BK9000);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(156, 202, 60, 20));
        qelineedit_3 = new QELineEdit(BK9000);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(156, 222, 60, 20));
        qelineedit_4 = new QELineEdit(BK9000);
        qelineedit_4->setObjectName(QStringLiteral("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(156, 242, 60, 20));
        qelineedit_5 = new QELineEdit(BK9000);
        qelineedit_5->setObjectName(QStringLiteral("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(156, 262, 60, 20));
        qelineedit_6 = new QELineEdit(BK9000);
        qelineedit_6->setObjectName(QStringLiteral("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(156, 282, 60, 20));
        qelabel_20 = new QELabel(BK9000);
        qelabel_20->setObjectName(QStringLiteral("qelabel_20"));
        qelabel_20->setGeometry(QRect(12, 242, 144, 20));
        qelabel_20->setFont(font);
        qelabel_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_20->setDisplayAlarmState(false);
        qelabel_21 = new QELabel(BK9000);
        qelabel_21->setObjectName(QStringLiteral("qelabel_21"));
        qelabel_21->setGeometry(QRect(12, 262, 144, 20));
        qelabel_21->setFont(font);
        qelabel_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_21->setDisplayAlarmState(false);
        qelabel_22 = new QELabel(BK9000);
        qelabel_22->setObjectName(QStringLiteral("qelabel_22"));
        qelabel_22->setGeometry(QRect(12, 282, 144, 20));
        qelabel_22->setFont(font);
        qelabel_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_22->setDisplayAlarmState(false);
        qelabel_23 = new QELabel(BK9000);
        qelabel_23->setObjectName(QStringLiteral("qelabel_23"));
        qelabel_23->setGeometry(QRect(12, 310, 144, 20));
        qelabel_23->setFont(font);
        qelabel_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_23->setDisplayAlarmState(false);
        qelineedit_7 = new QELineEdit(BK9000);
        qelineedit_7->setObjectName(QStringLiteral("qelineedit_7"));
        qelineedit_7->setGeometry(QRect(156, 310, 60, 20));
        qelabel_24 = new QELabel(BK9000);
        qelabel_24->setObjectName(QStringLiteral("qelabel_24"));
        qelabel_24->setGeometry(QRect(216, 310, 41, 20));
        qelabel_24->setFont(font);
        qelabel_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_24->setDisplayAlarmState(false);
        line = new QFrame(BK9000);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(224, 246, 57, 16));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        label_9 = new QLabel(BK9000);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 186, 25, 16));
        label_10 = new QLabel(BK9000);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(220, 206, 25, 16));
        cabutton = new CAButton(BK9000);
        cabutton->setObjectName(QStringLiteral("cabutton"));
        cabutton->setGeometry(QRect(280, 26, 72, 24));
        cabutton->setAutoDefault(false);
        cabutton->setProperty("writeOnRelease", QVariant(true));
        cabutton->setProperty("AlarmEnable", QVariant(false));
        cabutton->setLiteralLabel(true);
        cabutton_2 = new CAButton(BK9000);
        cabutton_2->setObjectName(QStringLiteral("cabutton_2"));
        cabutton_2->setGeometry(QRect(288, 242, 72, 24));
        cabutton_2->setAutoDefault(false);
        cabutton_2->setProperty("writeOnRelease", QVariant(true));
        cabutton_2->setProperty("AlarmEnable", QVariant(false));
        cabutton_2->setLiteralLabel(true);
        dbgPB = new QPushButton(BK9000);
        dbgPB->setObjectName(QStringLiteral("dbgPB"));
        dbgPB->setGeometry(QRect(288, 306, 80, 20));

        retranslateUi(BK9000);

        QMetaObject::connectSlotsByName(BK9000);
    } // setupUi

    void retranslateUi(QDialog *BK9000)
    {
        BK9000->setWindowTitle(QApplication::translate("BK9000", "Dialog", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG10.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG11.DESC", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG10", 0)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label->setText(QApplication::translate("BK9000", "0x", 0));
        label_2->setText(QApplication::translate("BK9000", "0x", 0));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG11", 0)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label_3->setText(QApplication::translate("BK9000", "0x", 0));
        qelabel_5->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG12.DESC", 0)));
        qelabel_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG12", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label_4->setText(QApplication::translate("BK9000", "0x", 0));
        qelabel_7->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG16.DESC", 0)));
        qelabel_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_8->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG16", 0)));
        qelabel_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_9->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG17.DESC", 0)));
        qelabel_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label_5->setText(QApplication::translate("BK9000", "0x", 0));
        qelabel_10->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG17", 0)));
        qelabel_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_11->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG18.DESC", 0)));
        qelabel_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label_6->setText(QApplication::translate("BK9000", "0x", 0));
        qelabel_12->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG18", 0)));
        qelabel_12->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_13->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG19.DESC", 0)));
        qelabel_13->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label_7->setText(QApplication::translate("BK9000", "0x", 0));
        qelabel_14->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG19", 0)));
        qelabel_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_15->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG32", 0)));
        qelabel_15->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label_8->setText(QApplication::translate("BK9000", "0x", 0));
        qelabel_16->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:900R-$(N):REG32.DESC", 0)));
        qelabel_16->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_17->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG0.DESC", 0)));
        qelabel_17->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_18->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG1.DESC", 0)));
        qelabel_18->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_19->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG22.DESC", 0)));
        qelabel_19->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG0", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG1", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG22", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG23", 0)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG24", 0)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelineedit_6->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG25", 0)));
        qelineedit_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_20->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG23.DESC", 0)));
        qelabel_20->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_21->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG24.DESC", 0)));
        qelabel_21->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_22->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:900W-$(N):REG25.DESC", 0)));
        qelabel_22->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_23->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:DEBUG-$(N):ALLOW:INLQ.DESC", 0)));
        qelabel_23->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelineedit_7->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:DEBUG-$(N):ALLOW:INLQ", 0)));
        qelineedit_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        qelabel_24->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LO:SC:DEBUG-$(N):ALLOW:INLQ", 0)));
        qelabel_24->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        label_9->setText(QApplication::translate("BK9000", "hex", 0));
        label_10->setText(QApplication::translate("BK9000", "hex", 0));
        cabutton->setOnText(QApplication::translate("BK9000", "1", 0));
        cabutton->setOffText(QApplication::translate("BK9000", "0", 0));
        cabutton->setOnLabel(QApplication::translate("BK9000", "Refresh", 0));
        cabutton->setOffLabel(QApplication::translate("BK9000", "Refresh", 0));
        cabutton->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):BO:900R-$(N):REFRESH.PROC", 0)));
        cabutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        cabutton_2->setOnText(QApplication::translate("BK9000", "1", 0));
        cabutton_2->setOffText(QApplication::translate("BK9000", "0", 0));
        cabutton_2->setOnLabel(QApplication::translate("BK9000", "Reset", 0));
        cabutton_2->setOffLabel(QApplication::translate("BK9000", "Reset", 0));
        cabutton_2->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):BO:900W-$(N):WD:RESET.PROC", 0)));
        cabutton_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,N=2", 0)));
        dbgPB->setText(QApplication::translate("BK9000", "Debug", 0));
    } // retranslateUi

};

namespace Ui {
    class BK9000: public Ui_BK9000 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BK9000_H
