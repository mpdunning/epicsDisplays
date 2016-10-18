/********************************************************************************
** Form generated from reading UI file 'writeramsa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITERAMSA_H
#define UI_WRITERAMSA_H

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

class Ui_WriteRam
{
public:
    QFrame *frame;
    QPushButton *wrClosePB;
    QELabel *qelabel;
    QELabel *qelabel_6;
    QEForm *qeform;

    void setupUi(QDialog *WriteRam)
    {
        if (WriteRam->objectName().isEmpty())
            WriteRam->setObjectName(QStringLiteral("WriteRam"));
        WriteRam->resize(461, 349);
        frame = new QFrame(WriteRam);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 453, 33));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        wrClosePB = new QPushButton(frame);
        wrClosePB->setObjectName(QStringLiteral("wrClosePB"));
        wrClosePB->setGeometry(QRect(372, 4, 74, 24));
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
        qeform = new QEForm(WriteRam);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(4, 42, 452, 300));

        retranslateUi(WriteRam);

        QMetaObject::connectSlotsByName(WriteRam);
    } // setupUi

    void retranslateUi(QDialog *WriteRam)
    {
        WriteRam->setWindowTitle(QApplication::translate("WriteRam", "Dialog", 0));
        wrClosePB->setText(QApplication::translate("WriteRam", "Close", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("WriteRam", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("WriteRam", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("WriteRam", "$(P):MBBI:$(M)-$(N):MOTOR:STATE", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("WriteRam", "P=CHA,M=2531-1,N=2", 0)));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("WriteRam", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/writeram.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class WriteRam: public Ui_WriteRam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITERAMSA_H
