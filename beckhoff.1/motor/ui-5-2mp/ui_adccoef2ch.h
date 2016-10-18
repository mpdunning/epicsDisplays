/********************************************************************************
** Form generated from reading UI file 'adccoef2ch.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCCOEF2CH_H
#define UI_ADCCOEF2CH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "QELineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_ADCCoef
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *closePB;
    QGroupBox *groupBox;
    QLabel *label_3;
    QELineEdit *qelineedit_2;
    QLabel *label_2;
    QELineEdit *qelineedit;
    QELineEdit *qelineedit_5;
    QLabel *label_6;
    QLabel *label_7;
    QELineEdit *qelineedit_6;
    QLabel *label_8;
    QELineEdit *qelineedit_7;
    QELineEdit *qelineedit_11;
    QLabel *label_12;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_4;
    QELineEdit *qelineedit_4;
    QELineEdit *qelineedit_3;
    QLabel *label_9;
    QELineEdit *qelineedit_8;
    QELineEdit *qelineedit_9;
    QLabel *label_10;
    QLabel *label_11;
    QELineEdit *qelineedit_10;
    QELineEdit *qelineedit_17;
    QLabel *label_18;

    void setupUi(QDialog *ADCCoef)
    {
        if (ADCCoef->objectName().isEmpty())
            ADCCoef->setObjectName(QStringLiteral("ADCCoef"));
        ADCCoef->resize(356, 253);
        frame = new QFrame(ADCCoef);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 2, 355, 35));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 8, 147, 16));
        closePB = new QPushButton(frame);
        closePB->setObjectName(QStringLiteral("closePB"));
        closePB->setGeometry(QRect(288, 4, 56, 24));
        closePB->setAutoDefault(false);
        groupBox = new QGroupBox(ADCCoef);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(6, 44, 344, 97));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(8, 46, 65, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_2 = new QELineEdit(groupBox);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(78, 46, 89, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(8, 22, 65, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit = new QELineEdit(groupBox);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(78, 22, 89, 20));
        qelineedit_5 = new QELineEdit(groupBox);
        qelineedit_5->setObjectName(QStringLiteral("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(78, 70, 89, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(8, 70, 65, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(176, 24, 65, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_6 = new QELineEdit(groupBox);
        qelineedit_6->setObjectName(QStringLiteral("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(246, 24, 89, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(176, 46, 65, 20));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_7 = new QELineEdit(groupBox);
        qelineedit_7->setObjectName(QStringLiteral("qelineedit_7"));
        qelineedit_7->setGeometry(QRect(246, 46, 89, 20));
        qelineedit_11 = new QELineEdit(groupBox);
        qelineedit_11->setObjectName(QStringLiteral("qelineedit_11"));
        qelineedit_11->setGeometry(QRect(246, 70, 89, 20));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(176, 70, 65, 20));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(ADCCoef);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(6, 148, 344, 99));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(8, 48, 65, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(8, 24, 65, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_4 = new QELineEdit(groupBox_2);
        qelineedit_4->setObjectName(QStringLiteral("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(78, 24, 89, 20));
        qelineedit_3 = new QELineEdit(groupBox_2);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(78, 48, 89, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(8, 72, 65, 20));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_8 = new QELineEdit(groupBox_2);
        qelineedit_8->setObjectName(QStringLiteral("qelineedit_8"));
        qelineedit_8->setGeometry(QRect(78, 72, 89, 20));
        qelineedit_9 = new QELineEdit(groupBox_2);
        qelineedit_9->setObjectName(QStringLiteral("qelineedit_9"));
        qelineedit_9->setGeometry(QRect(244, 46, 89, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(174, 46, 65, 20));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(174, 24, 65, 20));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_10 = new QELineEdit(groupBox_2);
        qelineedit_10->setObjectName(QStringLiteral("qelineedit_10"));
        qelineedit_10->setGeometry(QRect(244, 24, 89, 20));
        qelineedit_17 = new QELineEdit(groupBox_2);
        qelineedit_17->setObjectName(QStringLiteral("qelineedit_17"));
        qelineedit_17->setGeometry(QRect(244, 72, 89, 20));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(174, 72, 65, 20));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_2->raise();
        groupBox->raise();
        frame->raise();

        retranslateUi(ADCCoef);

        QMetaObject::connectSlotsByName(ADCCoef);
    } // setupUi

    void retranslateUi(QDialog *ADCCoef)
    {
        ADCCoef->setWindowTitle(QApplication::translate("ADCCoef", "Dialog", 0));
        label->setText(QApplication::translate("ADCCoef", "Conversion: V to Unit", 0));
        closePB->setText(QApplication::translate("ADCCoef", "Close", 0));
        groupBox->setTitle(QApplication::translate("ADCCoef", "ADC Chan 1", 0));
        label_3->setText(QApplication::translate("ADCCoef", "Slope", 0));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH1:B", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_2->setText(QApplication::translate("ADCCoef", "Intercept", 0));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH1:A", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH1:C", 0)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_6->setText(QApplication::translate("ADCCoef", "2nd Order", 0));
        label_7->setText(QApplication::translate("ADCCoef", "3rd Order", 0));
        qelineedit_6->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH1:D", 0)));
        qelineedit_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_8->setText(QApplication::translate("ADCCoef", "4th Order", 0));
        qelineedit_7->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH1:E", 0)));
        qelineedit_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        qelineedit_11->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):CALC:$(R)-$(N):CH1.EGU", 0)));
        qelineedit_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_12->setText(QApplication::translate("ADCCoef", "Unit", 0));
        groupBox_2->setTitle(QApplication::translate("ADCCoef", "ADC Chan 2", 0));
        label_5->setText(QApplication::translate("ADCCoef", "Slope", 0));
        label_4->setText(QApplication::translate("ADCCoef", "Intercept", 0));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH2:A", 0)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH2:B", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_9->setText(QApplication::translate("ADCCoef", "2nd Order", 0));
        qelineedit_8->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH2:C", 0)));
        qelineedit_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        qelineedit_9->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH2:E", 0)));
        qelineedit_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_10->setText(QApplication::translate("ADCCoef", "4th Order", 0));
        label_11->setText(QApplication::translate("ADCCoef", "3rd Order", 0));
        qelineedit_10->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH2:D", 0)));
        qelineedit_10->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        qelineedit_17->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):CALC:$(R)-$(N):CH2.EGU", 0)));
        qelineedit_17->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_18->setText(QApplication::translate("ADCCoef", "Unit", 0));
    } // retranslateUi

};

namespace Ui {
    class ADCCoef: public Ui_ADCCoef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCCOEF2CH_H
