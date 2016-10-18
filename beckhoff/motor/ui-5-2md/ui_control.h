/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "QBitStatus.h"
#include "QEBitStatus.h"
#include "QELabel.h"
#include "QELineEdit.h"
#include "abutton.h"
#include "ashape.h"
#include "cabutton.h"
#include "cashape.h"

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QLabel *label;
    QLabel *SB_label_4;
    QLabel *SB_label_6;
    QLabel *SB_label_2;
    QLabel *label_2;
    QLabel *SB_label_5;
    QLabel *SB_label_3;
    QEBitStatus *qebitstatus;
    QLabel *SB_label_1;
    QLabel *SB_label_0;
    QLabel *label_3;
    QLabel *SB_label_7;
    QEBitStatus *qebitstatus_10;
    QLabel *label_7;
    QLabel *label_23;
    QEBitStatus *qebitstatus_9;
    QLabel *label_24;
    QEBitStatus *qebitstatus_8;
    QLabel *label_8;
    QEBitStatus *qebitstatus_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_4;
    QELabel *qelabel_9;
    QELineEdit *qelineedit_5;
    QELineEdit *qelineedit_6;
    QELabel *qelabel_10;
    QELabel *qelabel_11;
    QELineEdit *qelineedit_7;
    QELabel *qelabel_12;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QELineEdit *qelineedit_8;
    QGroupBox *groupBox;
    QLabel *label_16;
    QELabel *qelabel_2;
    QELabel *qelabel_3;
    QELabel *qelabel_4;
    QLabel *label_17;
    QFrame *line;
    QLabel *label_18;
    QELabel *qelabel_5;
    CAButton *cabutton_7;
    QLabel *label_27;
    QLabel *label_25;
    CAButton *cabutton;
    CAButton *cabutton_2;
    CAButton *cabutton_3;
    CAButton *cabutton_4;
    CAButton *cabutton_5;
    QELabel *qelabel_6;
    QELineEdit *qelineedit;
    CAShape *cashape;
    QELabel *qelabel_7;
    QELabel *errMessage1;

    void setupUi(QDialog *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QStringLiteral("Control"));
        Control->resize(461, 313);
        label = new QLabel(Control);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 38, 69, 16));
        SB_label_4 = new QLabel(Control);
        SB_label_4->setObjectName(QStringLiteral("SB_label_4"));
        SB_label_4->setGeometry(QRect(36, 94, 65, 12));
        QFont font;
        font.setPointSize(7);
        SB_label_4->setFont(font);
        SB_label_6 = new QLabel(Control);
        SB_label_6->setObjectName(QStringLiteral("SB_label_6"));
        SB_label_6->setGeometry(QRect(36, 70, 65, 12));
        SB_label_6->setFont(font);
        SB_label_2 = new QLabel(Control);
        SB_label_2->setObjectName(QStringLiteral("SB_label_2"));
        SB_label_2->setGeometry(QRect(36, 118, 65, 12));
        SB_label_2->setFont(font);
        label_2 = new QLabel(Control);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(6, 142, 12, 12));
        QFont font1;
        font1.setPointSize(8);
        label_2->setFont(font1);
        SB_label_5 = new QLabel(Control);
        SB_label_5->setObjectName(QStringLiteral("SB_label_5"));
        SB_label_5->setGeometry(QRect(36, 82, 65, 12));
        SB_label_5->setFont(font);
        SB_label_3 = new QLabel(Control);
        SB_label_3->setObjectName(QStringLiteral("SB_label_3"));
        SB_label_3->setGeometry(QRect(36, 106, 65, 12));
        SB_label_3->setFont(font);
        qebitstatus = new QEBitStatus(Control);
        qebitstatus->setObjectName(QStringLiteral("qebitstatus"));
        qebitstatus->setGeometry(QRect(20, 58, 12, 96));
        qebitstatus->setOrientation(QBitStatus::LSB_On_Bottom);
        qebitstatus->setOffColour(QColor(157, 171, 193));
        SB_label_1 = new QLabel(Control);
        SB_label_1->setObjectName(QStringLiteral("SB_label_1"));
        SB_label_1->setGeometry(QRect(36, 130, 65, 12));
        SB_label_1->setFont(font);
        SB_label_0 = new QLabel(Control);
        SB_label_0->setObjectName(QStringLiteral("SB_label_0"));
        SB_label_0->setGeometry(QRect(36, 142, 65, 12));
        SB_label_0->setFont(font);
        label_3 = new QLabel(Control);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(6, 58, 12, 12));
        label_3->setFont(font1);
        SB_label_7 = new QLabel(Control);
        SB_label_7->setObjectName(QStringLiteral("SB_label_7"));
        SB_label_7->setGeometry(QRect(36, 58, 65, 12));
        SB_label_7->setFont(font);
        qebitstatus_10 = new QEBitStatus(Control);
        qebitstatus_10->setObjectName(QStringLiteral("qebitstatus_10"));
        qebitstatus_10->setGeometry(QRect(18, 228, 16, 16));
        qebitstatus_10->setNumberOfBits(1);
        qebitstatus_10->setShift(5);
        qebitstatus_10->setOnColour(QColor(0, 255, 0));
        qebitstatus_10->setOffColour(QColor(255, 0, 0));
        label_7 = new QLabel(Control);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(38, 228, 56, 15));
        label_23 = new QLabel(Control);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(38, 208, 56, 15));
        qebitstatus_9 = new QEBitStatus(Control);
        qebitstatus_9->setObjectName(QStringLiteral("qebitstatus_9"));
        qebitstatus_9->setGeometry(QRect(18, 188, 16, 16));
        qebitstatus_9->setNumberOfBits(1);
        qebitstatus_9->setShift(1);
        qebitstatus_9->setOnColour(QColor(0, 255, 0));
        qebitstatus_9->setOffColour(QColor(156, 173, 194));
        label_24 = new QLabel(Control);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(38, 188, 56, 15));
        qebitstatus_8 = new QEBitStatus(Control);
        qebitstatus_8->setObjectName(QStringLiteral("qebitstatus_8"));
        qebitstatus_8->setGeometry(QRect(18, 208, 16, 16));
        qebitstatus_8->setNumberOfBits(1);
        qebitstatus_8->setShift(0);
        qebitstatus_8->setOnColour(QColor(0, 255, 0));
        qebitstatus_8->setOffColour(QColor(156, 173, 194));
        label_8 = new QLabel(Control);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(38, 168, 56, 15));
        qebitstatus_7 = new QEBitStatus(Control);
        qebitstatus_7->setObjectName(QStringLiteral("qebitstatus_7"));
        qebitstatus_7->setGeometry(QRect(18, 168, 16, 16));
        qebitstatus_7->setNumberOfBits(1);
        qebitstatus_7->setShift(3);
        qebitstatus_7->setOnColour(QColor(0, 255, 0));
        qebitstatus_7->setOffColour(QColor(156, 173, 194));
        label_4 = new QLabel(Control);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(156, 40, 33, 20));
        label_5 = new QLabel(Control);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(156, 64, 77, 20));
        label_6 = new QLabel(Control);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(156, 88, 81, 20));
        groupBox_4 = new QGroupBox(Control);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(108, 128, 173, 123));
        qelabel_9 = new QELabel(groupBox_4);
        qelabel_9->setObjectName(QStringLiteral("qelabel_9"));
        qelabel_9->setGeometry(QRect(120, 100, 41, 16));
        qelabel_9->setDisplayAlarmState(false);
        qelineedit_5 = new QELineEdit(groupBox_4);
        qelineedit_5->setObjectName(QStringLiteral("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(72, 48, 45, 21));
        qelineedit_6 = new QELineEdit(groupBox_4);
        qelineedit_6->setObjectName(QStringLiteral("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(72, 72, 45, 21));
        qelabel_10 = new QELabel(groupBox_4);
        qelabel_10->setObjectName(QStringLiteral("qelabel_10"));
        qelabel_10->setGeometry(QRect(120, 52, 41, 16));
        qelabel_10->setDisplayAlarmState(false);
        qelabel_11 = new QELabel(groupBox_4);
        qelabel_11->setObjectName(QStringLiteral("qelabel_11"));
        qelabel_11->setGeometry(QRect(120, 28, 41, 16));
        qelabel_11->setDisplayAlarmState(false);
        qelineedit_7 = new QELineEdit(groupBox_4);
        qelineedit_7->setObjectName(QStringLiteral("qelineedit_7"));
        qelineedit_7->setGeometry(QRect(72, 96, 45, 21));
        qelabel_12 = new QELabel(groupBox_4);
        qelabel_12->setObjectName(QStringLiteral("qelabel_12"));
        qelabel_12->setGeometry(QRect(120, 76, 41, 16));
        qelabel_12->setDisplayAlarmState(false);
        label_47 = new QLabel(groupBox_4);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(12, 28, 56, 15));
        label_47->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_48 = new QLabel(groupBox_4);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(12, 52, 56, 15));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_49 = new QLabel(groupBox_4);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(7, 76, 61, 15));
        label_49->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_50 = new QLabel(groupBox_4);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(7, 100, 61, 15));
        label_50->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_8 = new QELineEdit(groupBox_4);
        qelineedit_8->setObjectName(QStringLiteral("qelineedit_8"));
        qelineedit_8->setGeometry(QRect(72, 24, 45, 21));
        groupBox = new QGroupBox(Control);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(288, 100, 169, 153));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(84, 122, 49, 16));
        qelabel_2 = new QELabel(groupBox);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(80, 48, 84, 16));
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2->setDisplayAlarmState(false);
        qelabel_2->setTrailingZeros(false);
        qelabel_3 = new QELabel(groupBox);
        qelabel_3->setObjectName(QStringLiteral("qelabel_3"));
        qelabel_3->setGeometry(QRect(68, 26, 96, 16));
        qelabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_3->setDisplayAlarmState(false);
        qelabel_3->setTrailingZeros(false);
        qelabel_4 = new QELabel(groupBox);
        qelabel_4->setObjectName(QStringLiteral("qelabel_4"));
        qelabel_4->setGeometry(QRect(80, 68, 84, 16));
        qelabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_4->setDisplayAlarmState(false);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(4, 20, 56, 15));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(8, 84, 156, 8));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(8, 90, 49, 15));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5 = new QELabel(groupBox);
        qelabel_5->setObjectName(QStringLiteral("qelabel_5"));
        qelabel_5->setGeometry(QRect(72, 94, 92, 16));
        qelabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5->setDisplayAlarmState(false);
        qelabel_5->setTrailingZeros(false);
        cabutton_7 = new CAButton(groupBox);
        cabutton_7->setObjectName(QStringLiteral("cabutton_7"));
        cabutton_7->setGeometry(QRect(136, 120, 20, 20));
        cabutton_7->setAutoDefault(false);
        cabutton_7->setUseTextColor(true);
        cabutton_7->setProperty("writeOnRelease", QVariant(true));
        cabutton_7->setProperty("writeBits", QVariant(false));
        cabutton_7->setShowLabel(false);
        cabutton_7->setProperty("bitNumber", QVariant(6u));
        cabutton_7->setSubscribe(true);
        cabutton_7->setProperty("AlarmEnable", QVariant(false));
        label_27 = new QLabel(Control);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(276, 40, 89, 20));
        label_25 = new QLabel(Control);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(276, 64, 45, 20));
        cabutton = new CAButton(Control);
        cabutton->setObjectName(QStringLiteral("cabutton"));
        cabutton->setGeometry(QRect(132, 40, 20, 20));
        cabutton->setAutoDefault(false);
        cabutton->setUseTextColor(true);
        cabutton->setProperty("writeOnRelease", QVariant(true));
        cabutton->setProperty("writeOnClick", QVariant(true));
        cabutton->setProperty("writeBits", QVariant(false));
        cabutton->setShowLabel(false);
        cabutton->setProperty("bitNumber", QVariant(6u));
        cabutton->setSubscribe(true);
        cabutton->setProperty("AlarmEnable", QVariant(false));
        cabutton_2 = new CAButton(Control);
        cabutton_2->setObjectName(QStringLiteral("cabutton_2"));
        cabutton_2->setGeometry(QRect(132, 64, 20, 20));
        cabutton_2->setAutoDefault(false);
        cabutton_2->setUseTextColor(true);
        cabutton_2->setProperty("writeOnRelease", QVariant(true));
        cabutton_2->setProperty("writeBits", QVariant(true));
        cabutton_2->setShowLabel(false);
        cabutton_2->setProperty("bitNumber", QVariant(13u));
        cabutton_2->setSubscribe(true);
        cabutton_2->setProperty("AlarmEnable", QVariant(false));
        cabutton_3 = new CAButton(Control);
        cabutton_3->setObjectName(QStringLiteral("cabutton_3"));
        cabutton_3->setGeometry(QRect(132, 88, 20, 20));
        cabutton_3->setAutoDefault(false);
        cabutton_3->setUseTextColor(true);
        cabutton_3->setProperty("writeOnRelease", QVariant(true));
        cabutton_3->setProperty("writeBits", QVariant(false));
        cabutton_3->setShowLabel(false);
        cabutton_3->setProperty("bitNumber", QVariant(0u));
        cabutton_3->setSubscribe(true);
        cabutton_3->setProperty("AlarmEnable", QVariant(false));
        cabutton_4 = new CAButton(Control);
        cabutton_4->setObjectName(QStringLiteral("cabutton_4"));
        cabutton_4->setGeometry(QRect(252, 40, 20, 20));
        cabutton_4->setCheckable(true);
        cabutton_4->setAutoDefault(false);
        cabutton_4->setUseTextColor(true);
        cabutton_4->setProperty("writeOnPress", QVariant(false));
        cabutton_4->setProperty("writeOnRelease", QVariant(false));
        cabutton_4->setProperty("writeOnClick", QVariant(true));
        cabutton_4->setProperty("writeBits", QVariant(false));
        cabutton_4->setShowLabel(false);
        cabutton_4->setProperty("bitNumber", QVariant(0u));
        cabutton_4->setSubscribe(true);
        cabutton_4->setProperty("AlarmEnable", QVariant(false));
        cabutton_5 = new CAButton(Control);
        cabutton_5->setObjectName(QStringLiteral("cabutton_5"));
        cabutton_5->setGeometry(QRect(252, 64, 20, 20));
        cabutton_5->setCheckable(true);
        cabutton_5->setAutoDefault(false);
        cabutton_5->setUseTextColor(true);
        cabutton_5->setProperty("writeOnPress", QVariant(false));
        cabutton_5->setProperty("writeOnRelease", QVariant(false));
        cabutton_5->setProperty("writeOnClick", QVariant(true));
        cabutton_5->setProperty("writeBits", QVariant(true));
        cabutton_5->setShowLabel(false);
        cabutton_5->setProperty("bitNumber", QVariant(0u));
        cabutton_5->setSubscribe(true);
        cabutton_5->setProperty("AlarmEnable", QVariant(false));
        qelabel_6 = new QELabel(Control);
        qelabel_6->setObjectName(QStringLiteral("qelabel_6"));
        qelabel_6->setGeometry(QRect(256, 8, 81, 16));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        qelabel_6->setFont(font2);
        qelabel_6->setDisplayAlarmState(false);
        qelineedit = new QELineEdit(Control);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(2, 6, 201, 20));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        qelineedit->setFont(font3);
        cashape = new CAShape(Control);
        cashape->setObjectName(QStringLiteral("cashape"));
        cashape->setGeometry(QRect(368, 6, 60, 24));
        cashape->setLineWidth(2u);
        cashape->setProperty("rectangle", QVariant(QRect(0, 0, 60, 24)));
        cashape->setColor1(QColor(0, 255, 0));
        cashape->setColor2(QColor(255, 0, 0));
        qelabel_7 = new QELabel(Control);
        qelabel_7->setObjectName(QStringLiteral("qelabel_7"));
        qelabel_7->setGeometry(QRect(370, 8, 56, 20));
        qelabel_7->setAlignment(Qt::AlignCenter);
        qelabel_7->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        errMessage1 = new QELabel(Control);
        errMessage1->setObjectName(QStringLiteral("errMessage1"));
        errMessage1->setGeometry(QRect(26, 256, 429, 16));
        errMessage1->setStyleSheet(QStringLiteral(""));
        errMessage1->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));

        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QDialog *Control)
    {
        Control->setWindowTitle(QApplication::translate("Control", "Dialog", 0));
        label->setText(QApplication::translate("Control", "StatusByte", 0));
        SB_label_4->setText(QApplication::translate("Control", "Idle", 0));
        SB_label_6->setText(QApplication::translate("Control", "Error", 0));
        SB_label_2->setText(QApplication::translate("Control", "LoadAngle 2", 0));
        label_2->setText(QApplication::translate("Control", "0", 0));
        SB_label_5->setText(QApplication::translate("Control", "Warning", 0));
        SB_label_3->setText(QApplication::translate("Control", "LoadAngle 3", 0));
        qebitstatus->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):SBYTE", 0)));
        qebitstatus->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        SB_label_1->setText(QApplication::translate("Control", "LoadAngle 1", 0));
        SB_label_0->setText(QApplication::translate("Control", "Ready", 0));
        label_3->setText(QApplication::translate("Control", "7", 0));
        SB_label_7->setText(QApplication::translate("Control", "RegAccess", 0));
        qebitstatus_10->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):CBYTE", 0)));
        qebitstatus_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        label_7->setText(QApplication::translate("Control", "autoStop", 0));
        label_23->setText(QApplication::translate("Control", "Input 1", 0));
        qebitstatus_9->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):SWORD", 0)));
        qebitstatus_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        label_24->setText(QApplication::translate("Control", "Input 2", 0));
        qebitstatus_8->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):SWORD", 0)));
        qebitstatus_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        label_8->setText(QApplication::translate("Control", "atTarget", 0));
        qebitstatus_7->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):SWORD", 0)));
        qebitstatus_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        label_4->setText(QApplication::translate("Control", "Reset", 0));
        label_5->setText(QApplication::translate("Control", "ClearPosition", 0));
        label_6->setText(QApplication::translate("Control", "Set Position", 0));
        groupBox_4->setTitle(QApplication::translate("Control", "Motion Parameters", 0));
        qelabel_9->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):RWR:MAXD", 0)));
        qelabel_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):RWR:MINV", 0)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelineedit_6->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):RWR:MAXA", 0)));
        qelineedit_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_10->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):RWR:MINV", 0)));
        qelabel_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_11->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):RWR:MAXV", 0)));
        qelabel_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelineedit_7->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):RWR:MAXD", 0)));
        qelineedit_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_12->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):RWR:MAXA", 0)));
        qelabel_12->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        label_47->setText(QApplication::translate("Control", "maxVelo", 0));
        label_48->setText(QApplication::translate("Control", "minVelo", 0));
        label_49->setText(QApplication::translate("Control", "maxAccel", 0));
        label_50->setText(QApplication::translate("Control", "maxDecel", 0));
        qelineedit_8->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):RWR:MAXV", 0)));
        qelineedit_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        groupBox->setTitle(QApplication::translate("Control", "Actual Position", 0));
        label_16->setText(QApplication::translate("Control", "Refresh", 0));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):CALC:$(M)-$(N):POS:MM", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):POS", 0)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):CALC:$(M)-$(N):SET:POS:TOREV", 0)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        label_17->setText(QApplication::translate("Control", "Absolute", 0));
        label_18->setText(QApplication::translate("Control", "Relative", 0));
        qelabel_5->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):CALC:$(M)-$(N):SET:INC:STEP", 0)));
        qelabel_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        cabutton_7->setOnText(QApplication::translate("Control", "Yes", 0));
        cabutton_7->setOffText(QApplication::translate("Control", "Not", 0));
        cabutton_7->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):BO:$(M)-$(N):READ:POS", 0)));
        cabutton_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        label_27->setText(QApplication::translate("Control", "keep enabled", 0));
        label_25->setText(QApplication::translate("Control", "Enable", 0));
        cabutton->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):CBYTE", 0)));
        cabutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        cabutton_2->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):CWORD", 0)));
        cabutton_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        cabutton_3->setOnText(QApplication::translate("Control", "Yes", 0));
        cabutton_3->setOffText(QApplication::translate("Control", "Not", 0));
        cabutton_3->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):BO:$(M)-$(N):SET:CURR:POS", 0)));
        cabutton_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        cabutton_4->setOnText(QApplication::translate("Control", "Yes", 0));
        cabutton_4->setOffText(QApplication::translate("Control", "Not", 0));
        cabutton_4->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):BO:$(M)-$(N):MOT:ENABL", 0)));
        cabutton_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        cabutton_5->setOnText(QApplication::translate("Control", "Yes", 0));
        cabutton_5->setOffText(QApplication::translate("Control", "Not", 0));
        cabutton_5->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LO:$(M)-$(N):CBYTE", 0)));
        cabutton_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):MBBI:$(M)-$(N):MOTOR:STATE", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        cashape->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):BI:$(M)-$(N):ERROR", 0)));
        cashape->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_7->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):BI:$(M)-$(N):ERROR", 0)));
        qelabel_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
        errMessage1->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):WF:$(M)-$(N):MESSAGE", 0)));
        errMessage1->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,M=2531-1,N=2", 0)));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
