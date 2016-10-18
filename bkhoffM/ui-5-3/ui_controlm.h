/********************************************************************************
** Form generated from reading UI file 'controlm.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLM_H
#define UI_CONTROLM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "QEForm.h"
#include "QELabel.h"

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QFrame *frame;
    QPushButton *ctrlClosePB;
    QELabel *qelabel;
    QELabel *qelabel_6;
    QPushButton *convCoefPB;
    QEForm *qeform;

    void setupUi(QDialog *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QStringLiteral("Control"));
        Control->resize(461, 349);
        frame = new QFrame(Control);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 453, 33));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        ctrlClosePB = new QPushButton(frame);
        ctrlClosePB->setObjectName(QStringLiteral("ctrlClosePB"));
        ctrlClosePB->setGeometry(QRect(372, 4, 74, 24));
        qelabel = new QELabel(frame);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(8, 4, 81, 25));
        QFont font;
        font.setPointSize(12);
        qelabel->setFont(font);
        qelabel->setDisplayAlarmState(false);
        qelabel_6 = new QELabel(frame);
        qelabel_6->setObjectName(QStringLiteral("qelabel_6"));
        qelabel_6->setGeometry(QRect(96, 8, 81, 16));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        qelabel_6->setFont(font1);
        qelabel_6->setDisplayAlarmState(false);
        convCoefPB = new QPushButton(frame);
        convCoefPB->setObjectName(QStringLiteral("convCoefPB"));
        convCoefPB->setGeometry(QRect(231, 4, 120, 24));
        qeform = new QEForm(Control);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(4, 42, 452, 300));

        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QDialog *Control)
    {
        Control->setWindowTitle(QApplication::translate("Control", "Dialog", 0));
        ctrlClosePB->setText(QApplication::translate("Control", "Close", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):LI:$(Q)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,Q=2531-1,N=2", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("Control", "$(P):MBBI:$(Q)-$(N):CH1:MOTOR:STATE", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("Control", "P=CHA,Q=2531-1,N=2", 0)));
        convCoefPB->setText(QApplication::translate("Control", "conversionCoefs", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("Control", "../ui-common/control.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLM_H
