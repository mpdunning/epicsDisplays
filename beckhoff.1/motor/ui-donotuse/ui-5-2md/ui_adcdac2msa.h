/********************************************************************************
** Form generated from reading UI file 'adcdac2msa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCDAC2MSA_H
#define UI_ADCDAC2MSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "QEForm.h"

QT_BEGIN_NAMESPACE

class Ui_AdcDac2MSA
{
public:
    QFrame *frame;
    QPushButton *adcClosePB;
    QLabel *label;
    QEForm *adcDacQEF;

    void setupUi(QDialog *AdcDac2MSA)
    {
        if (AdcDac2MSA->objectName().isEmpty())
            AdcDac2MSA->setObjectName(QStringLiteral("AdcDac2MSA"));
        AdcDac2MSA->resize(461, 349);
        frame = new QFrame(AdcDac2MSA);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 453, 33));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        adcClosePB = new QPushButton(frame);
        adcClosePB->setObjectName(QStringLiteral("adcClosePB"));
        adcClosePB->setGeometry(QRect(372, 4, 74, 24));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 8, 151, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        adcDacQEF = new QEForm(AdcDac2MSA);
        adcDacQEF->setObjectName(QStringLiteral("adcDacQEF"));
        adcDacQEF->setGeometry(QRect(4, 42, 452, 300));

        retranslateUi(AdcDac2MSA);

        QMetaObject::connectSlotsByName(AdcDac2MSA);
    } // setupUi

    void retranslateUi(QDialog *AdcDac2MSA)
    {
        AdcDac2MSA->setWindowTitle(QApplication::translate("AdcDac2MSA", "Dialog", 0));
        adcClosePB->setText(QApplication::translate("AdcDac2MSA", "Close", 0));
        label->setText(QApplication::translate("AdcDac2MSA", "ADC and DAC Page", 0));
        adcDacQEF->setProperty("uiFile", QVariant(QApplication::translate("AdcDac2MSA", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/adcdac2m.ui", 0)));
        adcDacQEF->setProperty("variableSubstitutions", QVariant(QApplication::translate("AdcDac2MSA", "P=$(P),R=$(R),N=$(N)", 0)));
    } // retranslateUi

};

namespace Ui {
    class AdcDac2MSA: public Ui_AdcDac2MSA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCDAC2MSA_H
