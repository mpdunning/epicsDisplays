/********************************************************************************
** Form generated from reading UI file 'adccoef.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCCOEF_H
#define UI_ADCCOEF_H

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
    QLabel *label_2;
    QLabel *label_3;
    QELineEdit *qelineedit_2;
    QELineEdit *qelineedit;
    QLabel *label_4;
    QLabel *label_5;
    QELineEdit *qelineedit_3;
    QELineEdit *qelineedit_4;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;

    void setupUi(QDialog *ADCCoef)
    {
        if (ADCCoef->objectName().isEmpty())
            ADCCoef->setObjectName(QStringLiteral("ADCCoef"));
        ADCCoef->resize(248, 197);
        frame = new QFrame(ADCCoef);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 2, 249, 35));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 8, 147, 16));
        closePB = new QPushButton(frame);
        closePB->setObjectName(QStringLiteral("closePB"));
        closePB->setGeometry(QRect(182, 4, 56, 24));
        closePB->setAutoDefault(false);
        label_2 = new QLabel(ADCCoef);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(58, 60, 65, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ADCCoef);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(58, 84, 65, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_2 = new QELineEdit(ADCCoef);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(128, 84, 89, 20));
        qelineedit = new QELineEdit(ADCCoef);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(128, 60, 89, 20));
        label_4 = new QLabel(ADCCoef);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(58, 140, 65, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(ADCCoef);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(58, 164, 65, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_3 = new QELineEdit(ADCCoef);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(128, 164, 89, 20));
        qelineedit_4 = new QELineEdit(ADCCoef);
        qelineedit_4->setObjectName(QStringLiteral("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(128, 140, 89, 20));
        groupBox = new QGroupBox(ADCCoef);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(32, 38, 193, 71));
        groupBox_2 = new QGroupBox(ADCCoef);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(34, 116, 191, 73));
        groupBox_2->raise();
        groupBox->raise();
        frame->raise();
        label_2->raise();
        label_3->raise();
        qelineedit_2->raise();
        qelineedit->raise();
        label_4->raise();
        label_5->raise();
        qelineedit_3->raise();
        qelineedit_4->raise();

        retranslateUi(ADCCoef);

        QMetaObject::connectSlotsByName(ADCCoef);
    } // setupUi

    void retranslateUi(QDialog *ADCCoef)
    {
        ADCCoef->setWindowTitle(QApplication::translate("ADCCoef", "Dialog", 0));
        label->setText(QApplication::translate("ADCCoef", "Conversion: V to mm", 0));
        closePB->setText(QApplication::translate("ADCCoef", "Close", 0));
        label_2->setText(QApplication::translate("ADCCoef", "Intercept", 0));
        label_3->setText(QApplication::translate("ADCCoef", "Slope", 0));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH1:B", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH1:A", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        label_4->setText(QApplication::translate("ADCCoef", "Intercept", 0));
        label_5->setText(QApplication::translate("ADCCoef", "Slope", 0));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH2:B", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("ADCCoef", "$(P):AO:$(R)-$(N):CH2:A", 0)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("ADCCoef", "P=CHA,R=3132,N=2", 0)));
        groupBox->setTitle(QApplication::translate("ADCCoef", "ADC Chan 1", 0));
        groupBox_2->setTitle(QApplication::translate("ADCCoef", "ADC Chan 2", 0));
    } // retranslateUi

};

namespace Ui {
    class ADCCoef: public Ui_ADCCoef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCCOEF_H
