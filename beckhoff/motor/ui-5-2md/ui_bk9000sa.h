/********************************************************************************
** Form generated from reading UI file 'bk9000sa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BK9000SA_H
#define UI_BK9000SA_H

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

class Ui_BK9000
{
public:
    QFrame *frame;
    QPushButton *CouplerPB;
    QELabel *qelabel;
    QELabel *qelabel_6;
    QEForm *couplerQEF;

    void setupUi(QDialog *BK9000)
    {
        if (BK9000->objectName().isEmpty())
            BK9000->setObjectName(QStringLiteral("BK9000"));
        BK9000->resize(461, 392);
        frame = new QFrame(BK9000);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 453, 33));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        CouplerPB = new QPushButton(frame);
        CouplerPB->setObjectName(QStringLiteral("CouplerPB"));
        CouplerPB->setGeometry(QRect(372, 4, 74, 24));
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
        couplerQEF = new QEForm(BK9000);
        couplerQEF->setObjectName(QStringLiteral("couplerQEF"));
        couplerQEF->setGeometry(QRect(4, 42, 452, 341));

        retranslateUi(BK9000);

        QMetaObject::connectSlotsByName(BK9000);
    } // setupUi

    void retranslateUi(QDialog *BK9000)
    {
        BK9000->setWindowTitle(QApplication::translate("BK9000", "Dialog", 0));
        CouplerPB->setText(QApplication::translate("BK9000", "Close", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("BK9000", "$(P):MBBI:$(M)-$(N):MOTOR:STATE", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("BK9000", "P=CHA,M=2531-1,N=2", 0)));
        couplerQEF->setProperty("uiFile", QVariant(QApplication::translate("BK9000", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/bk9000.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class BK9000: public Ui_BK9000 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BK9000SA_H
