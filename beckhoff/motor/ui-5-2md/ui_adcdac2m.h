/********************************************************************************
** Form generated from reading UI file 'adcdac2m.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCDAC2M_H
#define UI_ADCDAC2M_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include "QELabel.h"
#include "QELineEdit.h"
#include "ashape.h"
#include "cashape.h"

QT_BEGIN_NAMESPACE

class Ui_AdcDac2M
{
public:
    QELabel *qelabel_2;
    QLabel *label_3;
    QELabel *qelabel_3;
    QELabel *qelabel_4;
    QLabel *label_4;
    QELabel *qelabel_5;
    QLabel *label_5;
    QELabel *qelabel_6;
    QELabel *qelabel_7;
    QELabel *qelabel_8;
    QLabel *label_6;
    QELabel *qelabel_13;
    QLabel *label_7;
    QELabel *qelabel_14;
    QLabel *label_8;
    QELabel *qelabel_15;
    QLabel *label_9;
    QELabel *qelabel_16;
    QELineEdit *qelineedit;
    QELineEdit *qelineedit_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *frame_2;
    QPushButton *dacCh1PB;
    QELineEdit *qelineedit_5;
    QELineEdit *qelineedit_6;
    QFrame *frame_3;
    QPushButton *adcCh1PB;
    QELineEdit *qelineedit_3;
    QELabel *qelabel;
    QLabel *label_2;
    QELineEdit *qelineedit_4;
    QLabel *label;
    QELabel *errMessage1;
    CAShape *cashape;
    QELabel *qelabel_9;
    CAShape *cashape_2;
    QELabel *qelabel_10;
    QELabel *errMessage2;
    QLabel *label_15;
    QLabel *label_16;
    QListWidget *listWidget;
    QPushButton *adcCoefPB;

    void setupUi(QDialog *AdcDac2M)
    {
        if (AdcDac2M->objectName().isEmpty())
            AdcDac2M->setObjectName(QStringLiteral("AdcDac2M"));
        AdcDac2M->resize(435, 295);
        qelabel_2 = new QELabel(AdcDac2M);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(162, 106, 52, 20));
        qelabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_2->setDisplayAlarmState(false);
        qelabel_2->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_2->setRadix(16u);
        label_3 = new QLabel(AdcDac2M);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(154, 106, 17, 20));
        qelabel_3 = new QELabel(AdcDac2M);
        qelabel_3->setObjectName(QStringLiteral("qelabel_3"));
        qelabel_3->setGeometry(QRect(230, 106, 57, 20));
        qelabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_3->setDisplayAlarmState(false);
        qelabel_3->setLeadingZero(true);
        qelabel_4 = new QELabel(AdcDac2M);
        qelabel_4->setObjectName(QStringLiteral("qelabel_4"));
        qelabel_4->setGeometry(QRect(330, 106, 93, 20));
        qelabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_4->setDisplayAlarmState(false);
        qelabel_4->setPrecision(4);
        qelabel_4->setUseDbPrecision(false);
        qelabel_4->setLeadingZero(true);
        label_4 = new QLabel(AdcDac2M);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(154, 130, 17, 20));
        qelabel_5 = new QELabel(AdcDac2M);
        qelabel_5->setObjectName(QStringLiteral("qelabel_5"));
        qelabel_5->setGeometry(QRect(230, 130, 57, 20));
        qelabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5->setDisplayAlarmState(false);
        qelabel_5->setLeadingZero(true);
        label_5 = new QLabel(AdcDac2M);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 130, 17, 20));
        qelabel_6 = new QELabel(AdcDac2M);
        qelabel_6->setObjectName(QStringLiteral("qelabel_6"));
        qelabel_6->setGeometry(QRect(162, 130, 52, 20));
        qelabel_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_6->setDisplayAlarmState(false);
        qelabel_6->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_6->setRadix(16u);
        qelabel_7 = new QELabel(AdcDac2M);
        qelabel_7->setObjectName(QStringLiteral("qelabel_7"));
        qelabel_7->setGeometry(QRect(118, 130, 25, 20));
        qelabel_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_7->setDisplayAlarmState(false);
        qelabel_7->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_7->setRadix(16u);
        qelabel_8 = new QELabel(AdcDac2M);
        qelabel_8->setObjectName(QStringLiteral("qelabel_8"));
        qelabel_8->setGeometry(QRect(330, 130, 93, 20));
        qelabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_8->setDisplayAlarmState(false);
        qelabel_8->setPrecision(4);
        qelabel_8->setUseDbPrecision(false);
        qelabel_8->setLeadingZero(true);
        label_6 = new QLabel(AdcDac2M);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 164, 17, 20));
        qelabel_13 = new QELabel(AdcDac2M);
        qelabel_13->setObjectName(QStringLiteral("qelabel_13"));
        qelabel_13->setGeometry(QRect(118, 164, 25, 20));
        qelabel_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_13->setDisplayAlarmState(false);
        qelabel_13->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_13->setRadix(16u);
        label_7 = new QLabel(AdcDac2M);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 188, 17, 20));
        qelabel_14 = new QELabel(AdcDac2M);
        qelabel_14->setObjectName(QStringLiteral("qelabel_14"));
        qelabel_14->setGeometry(QRect(118, 188, 25, 20));
        qelabel_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_14->setDisplayAlarmState(false);
        qelabel_14->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_14->setRadix(16u);
        label_8 = new QLabel(AdcDac2M);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(154, 164, 17, 20));
        qelabel_15 = new QELabel(AdcDac2M);
        qelabel_15->setObjectName(QStringLiteral("qelabel_15"));
        qelabel_15->setGeometry(QRect(162, 164, 52, 20));
        qelabel_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_15->setDisplayAlarmState(false);
        qelabel_15->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_15->setRadix(16u);
        label_9 = new QLabel(AdcDac2M);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(154, 188, 17, 20));
        qelabel_16 = new QELabel(AdcDac2M);
        qelabel_16->setObjectName(QStringLiteral("qelabel_16"));
        qelabel_16->setGeometry(QRect(162, 188, 52, 20));
        qelabel_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_16->setDisplayAlarmState(false);
        qelabel_16->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_16->setRadix(16u);
        qelineedit = new QELineEdit(AdcDac2M);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(230, 164, 60, 20));
        qelineedit_2 = new QELineEdit(AdcDac2M);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(230, 188, 60, 20));
        label_10 = new QLabel(AdcDac2M);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(25, 82, 73, 15));
        label_11 = new QLabel(AdcDac2M);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(106, 82, 37, 16));
        label_12 = new QLabel(AdcDac2M);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(169, 82, 25, 16));
        label_13 = new QLabel(AdcDac2M);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(245, 82, 51, 16));
        label_14 = new QLabel(AdcDac2M);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(338, 82, 69, 16));
        frame_2 = new QFrame(AdcDac2M);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(6, 160, 299, 56));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        dacCh1PB = new QPushButton(frame_2);
        dacCh1PB->setObjectName(QStringLiteral("dacCh1PB"));
        dacCh1PB->setGeometry(QRect(2, -14, 92, 20));
        dacCh1PB->setAutoDefault(false);
        dacCh1PB->setFlat(true);
        qelineedit_5 = new QELineEdit(frame_2);
        qelineedit_5->setObjectName(QStringLiteral("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(4, 8, 95, 20));
        qelineedit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_6 = new QELineEdit(frame_2);
        qelineedit_6->setObjectName(QStringLiteral("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(4, 34, 95, 20));
        qelineedit_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_3 = new QFrame(AdcDac2M);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(6, 102, 421, 56));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        adcCh1PB = new QPushButton(frame_3);
        adcCh1PB->setObjectName(QStringLiteral("adcCh1PB"));
        adcCh1PB->setGeometry(QRect(2, -18, 92, 20));
        adcCh1PB->setAutoDefault(false);
        adcCh1PB->setFlat(true);
        qelineedit_3 = new QELineEdit(frame_3);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(4, 2, 95, 20));
        qelineedit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel = new QELabel(frame_3);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(112, 2, 25, 20));
        qelabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel->setDisplayAlarmState(false);
        qelabel->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel->setRadix(16u);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(102, 2, 17, 20));
        qelineedit_4 = new QELineEdit(frame_3);
        qelineedit_4->setObjectName(QStringLiteral("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(4, 28, 95, 20));
        qelineedit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AdcDac2M);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(28, 4, 373, 16));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Mono"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        errMessage1 = new QELabel(AdcDac2M);
        errMessage1->setObjectName(QStringLiteral("errMessage1"));
        errMessage1->setGeometry(QRect(110, 234, 309, 16));
        errMessage1->setStyleSheet(QStringLiteral(""));
        errMessage1->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        cashape = new CAShape(AdcDac2M);
        cashape->setObjectName(QStringLiteral("cashape"));
        cashape->setGeometry(QRect(46, 230, 60, 24));
        cashape->setLineWidth(2u);
        cashape->setProperty("rectangle", QVariant(QRect(0, 0, 60, 24)));
        cashape->setColor1(QColor(0, 255, 0));
        cashape->setColor2(QColor(255, 0, 0));
        qelabel_9 = new QELabel(AdcDac2M);
        qelabel_9->setObjectName(QStringLiteral("qelabel_9"));
        qelabel_9->setGeometry(QRect(48, 232, 56, 20));
        qelabel_9->setAlignment(Qt::AlignCenter);
        qelabel_9->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        cashape_2 = new CAShape(AdcDac2M);
        cashape_2->setObjectName(QStringLiteral("cashape_2"));
        cashape_2->setGeometry(QRect(46, 262, 60, 24));
        cashape_2->setLineWidth(2u);
        cashape_2->setProperty("rectangle", QVariant(QRect(0, 0, 60, 24)));
        cashape_2->setColor1(QColor(0, 255, 0));
        cashape_2->setColor2(QColor(255, 0, 0));
        qelabel_10 = new QELabel(AdcDac2M);
        qelabel_10->setObjectName(QStringLiteral("qelabel_10"));
        qelabel_10->setGeometry(QRect(48, 264, 56, 20));
        qelabel_10->setAlignment(Qt::AlignCenter);
        qelabel_10->setProperty("displayAlarmStateOption", QVariant(QELabel::WhenInAlarm));
        errMessage2 = new QELabel(AdcDac2M);
        errMessage2->setObjectName(QStringLiteral("errMessage2"));
        errMessage2->setGeometry(QRect(110, 266, 311, 16));
        errMessage2->setStyleSheet(QStringLiteral(""));
        errMessage2->setProperty("displayAlarmStateOption", QVariant(QELabel::Never));
        label_15 = new QLabel(AdcDac2M);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(14, 230, 25, 24));
        label_16 = new QLabel(AdcDac2M);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(14, 262, 25, 24));
        listWidget = new QListWidget(AdcDac2M);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(4, 20, 421, 53));
        QFont font1;
        font1.setPointSize(8);
        listWidget->setFont(font1);
        listWidget->setFrameShape(QFrame::Box);
        listWidget->setFrameShadow(QFrame::Plain);
        adcCoefPB = new QPushButton(AdcDac2M);
        adcCoefPB->setObjectName(QStringLiteral("adcCoefPB"));
        adcCoefPB->setGeometry(QRect(336, 208, 80, 20));
        frame_2->raise();
        frame_3->raise();
        qelabel_2->raise();
        label_3->raise();
        qelabel_3->raise();
        qelabel_4->raise();
        label_4->raise();
        qelabel_5->raise();
        label_5->raise();
        qelabel_6->raise();
        qelabel_7->raise();
        qelabel_8->raise();
        label_6->raise();
        qelabel_13->raise();
        label_7->raise();
        qelabel_14->raise();
        label_8->raise();
        qelabel_15->raise();
        label_9->raise();
        qelabel_16->raise();
        qelineedit->raise();
        qelineedit_2->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label->raise();
        errMessage1->raise();
        cashape->raise();
        qelabel_9->raise();
        cashape_2->raise();
        qelabel_10->raise();
        errMessage2->raise();
        label_15->raise();
        label_16->raise();
        listWidget->raise();
        adcCoefPB->raise();

        retranslateUi(AdcDac2M);

        QMetaObject::connectSlotsByName(AdcDac2M);
    } // setupUi

    void retranslateUi(QDialog *AdcDac2M)
    {
        AdcDac2M->setWindowTitle(QApplication::translate("AdcDac2M", "Dialog", 0));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(R)-$(N):DATA1", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        label_3->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):AI:$(R)-$(N):CH1", 0)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):CALC:$(R)-$(N):CH1", 0)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        label_4->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelabel_5->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):AI:$(R)-$(N):CH2", 0)));
        qelabel_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        label_5->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(R)-$(N):DATA2", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        qelabel_7->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(R)-$(N):SBYTE2", 0)));
        qelabel_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        qelabel_8->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):CALC:$(R)-$(N):CH2", 0)));
        qelabel_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        label_6->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelabel_13->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(T)-$(N):SBYTE1", 0)));
        qelabel_13->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        label_7->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelabel_14->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(T)-$(N):SBYTE2", 0)));
        qelabel_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        label_8->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelabel_15->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(T)-$(N):CH1", 0)));
        qelabel_15->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        label_9->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelabel_16->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(T)-$(N):CH2", 0)));
        qelabel_16->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):AO:$(T)-$(N):CH1", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):AO:$(T)-$(N):CH2", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        label_10->setText(QApplication::translate("AdcDac2M", "Chan Name", 0));
        label_11->setText(QApplication::translate("AdcDac2M", "SByte", 0));
        label_12->setText(QApplication::translate("AdcDac2M", "Raw", 0));
        label_13->setText(QApplication::translate("AdcDac2M", "Value(V)", 0));
        label_14->setText(QApplication::translate("AdcDac2M", "Converted", 0));
        dacCh1PB->setText(QApplication::translate("AdcDac2M", "PushButton", 0));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(T)-$(N):CH1.DESC", 0)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        qelineedit_6->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(T)-$(N):CH2.DESC", 0)));
        qelineedit_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        adcCh1PB->setText(QApplication::translate("AdcDac2M", "PushButton", 0));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):AI:$(R)-$(N):CH1.DESC", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        qelabel->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):LI:$(R)-$(N):SBYTE1", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        label_2->setText(QApplication::translate("AdcDac2M", "0x", 0));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):AI:$(R)-$(N):CH2.DESC", 0)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        label->setText(QApplication::translate("AdcDac2M", "Read Back Position From External Device", 0));
        errMessage1->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):WF:$(R)-$(N):MESSAGE", 0)));
        errMessage1->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        cashape->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):BI:$(R)-$(N):ERROR", 0)));
        cashape->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        qelabel_9->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):BI:$(R)-$(N):ERROR", 0)));
        qelabel_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,R=3132,N=2", 0)));
        cashape_2->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):BI:$(T)-$(N):ERROR", 0)));
        cashape_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        qelabel_10->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):BI:$(T)-$(N):ERROR", 0)));
        qelabel_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        errMessage2->setProperty("variable", QVariant(QApplication::translate("AdcDac2M", "$(P):WF:$(T)-$(N):MESSAGE", 0)));
        errMessage2->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2M", "P=CHA,T=4132,N=2", 0)));
        label_15->setText(QApplication::translate("AdcDac2M", "ADC", 0));
        label_16->setText(QApplication::translate("AdcDac2M", "DAC", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("AdcDac2M", "Shown are Parameters for ADC and DAC Channels.  The DAC is used", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("AdcDac2M", "to energize the position measuring device (potentiometer or LVDT)", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("AdcDac2M", "The ADC is used to measure the excitation voltage, converted to mm.", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        adcCoefPB->setText(QApplication::translate("AdcDac2M", "ADC Coeff", 0));
    } // retranslateUi

};

namespace Ui {
    class AdcDac2M: public Ui_AdcDac2M {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCDAC2M_H
