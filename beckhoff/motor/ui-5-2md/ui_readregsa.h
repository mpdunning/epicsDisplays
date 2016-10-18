/********************************************************************************
** Form generated from reading UI file 'readregsa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READREGSA_H
#define UI_READREGSA_H

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

class Ui_ReadReg
{
public:
    QFrame *frame;
    QELabel *qelabel;
    QPushButton *rrClosePB;
    QEForm *qeform;

    void setupUi(QDialog *ReadReg)
    {
        if (ReadReg->objectName().isEmpty())
            ReadReg->setObjectName(QStringLiteral("ReadReg"));
        ReadReg->resize(451, 309);
        frame = new QFrame(ReadReg);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 444, 32));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        qelabel = new QELabel(frame);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(12, 4, 81, 25));
        QFont font;
        font.setPointSize(12);
        qelabel->setFont(font);
        qelabel->setDisplayAlarmState(false);
        rrClosePB = new QPushButton(frame);
        rrClosePB->setObjectName(QStringLiteral("rrClosePB"));
        rrClosePB->setGeometry(QRect(376, 4, 57, 25));
        rrClosePB->setAutoDefault(false);
        qeform = new QEForm(ReadReg);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(4, 40, 443, 265));

        retranslateUi(ReadReg);

        QMetaObject::connectSlotsByName(ReadReg);
    } // setupUi

    void retranslateUi(QDialog *ReadReg)
    {
        ReadReg->setWindowTitle(QApplication::translate("ReadReg", "Dialog", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        rrClosePB->setText(QApplication::translate("ReadReg", "Close", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("ReadReg", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/readreg.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class ReadReg: public Ui_ReadReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READREGSA_H
