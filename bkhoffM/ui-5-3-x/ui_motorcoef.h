/********************************************************************************
** Form generated from reading UI file 'motorcoef.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORCOEF_H
#define UI_MOTORCOEF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "QELineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_MotorCoef
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *closePB;
    QLabel *label_2;
    QELineEdit *qelineedit;
    QLabel *label_3;
    QELineEdit *qelineedit_2;

    void setupUi(QDialog *MotorCoef)
    {
        if (MotorCoef->objectName().isEmpty())
            MotorCoef->setObjectName(QStringLiteral("MotorCoef"));
        MotorCoef->resize(245, 100);
        frame = new QFrame(MotorCoef);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-2, 0, 249, 35));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 8, 147, 16));
        closePB = new QPushButton(frame);
        closePB->setObjectName(QStringLiteral("closePB"));
        closePB->setGeometry(QRect(182, 4, 56, 24));
        closePB->setAutoDefault(false);
        label_2 = new QLabel(MotorCoef);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(18, 40, 65, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit = new QELineEdit(MotorCoef);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(88, 40, 89, 20));
        label_3 = new QLabel(MotorCoef);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(18, 64, 65, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_2 = new QELineEdit(MotorCoef);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(88, 64, 89, 20));

        retranslateUi(MotorCoef);

        QMetaObject::connectSlotsByName(MotorCoef);
    } // setupUi

    void retranslateUi(QDialog *MotorCoef)
    {
        MotorCoef->setWindowTitle(QApplication::translate("MotorCoef", "Dialog", 0));
        label->setText(QApplication::translate("MotorCoef", "Conversion: mm to rev", 0));
        closePB->setText(QApplication::translate("MotorCoef", "Close", 0));
        label_2->setText(QApplication::translate("MotorCoef", "Intercept", 0));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("MotorCoef", "$(P):AO:$(Q)-$(N):CH1:CONV:POS:A", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCoef", "P=CHA,Q=2531-1,N=2", 0)));
        label_3->setText(QApplication::translate("MotorCoef", "Slope", 0));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("MotorCoef", "$(P):AO:$(Q)-$(N):CH1:CONV:POS:B", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCoef", "P=CHA,Q=2531-1,N=2", 0)));
    } // retranslateUi

};

namespace Ui {
    class MotorCoef: public Ui_MotorCoef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORCOEF_H
