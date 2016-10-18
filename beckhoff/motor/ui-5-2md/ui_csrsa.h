/********************************************************************************
** Form generated from reading UI file 'csrsa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSRSA_H
#define UI_CSRSA_H

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

class Ui_CSR
{
public:
    QFrame *frame;
    QELabel *qelabel;
    QPushButton *csrClosePB;
    QEForm *qeform;

    void setupUi(QDialog *CSR)
    {
        if (CSR->objectName().isEmpty())
            CSR->setObjectName(QStringLiteral("CSR"));
        CSR->resize(451, 319);
        frame = new QFrame(CSR);
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
        csrClosePB = new QPushButton(frame);
        csrClosePB->setObjectName(QStringLiteral("csrClosePB"));
        csrClosePB->setGeometry(QRect(376, 4, 57, 25));
        csrClosePB->setAutoDefault(false);
        qeform = new QEForm(CSR);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(4, 40, 443, 265));

        retranslateUi(CSR);

        QMetaObject::connectSlotsByName(CSR);
    } // setupUi

    void retranslateUi(QDialog *CSR)
    {
        CSR->setWindowTitle(QApplication::translate("CSR", "Dialog", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("CSR", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("CSR", "P=CHA,M=2531-1,N=2", 0)));
        csrClosePB->setText(QApplication::translate("CSR", "Close", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("CSR", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/csr.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class CSR: public Ui_CSR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSRSA_H
