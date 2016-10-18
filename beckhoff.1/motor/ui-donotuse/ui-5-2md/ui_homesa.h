/********************************************************************************
** Form generated from reading UI file 'homesa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESA_H
#define UI_HOMESA_H

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

class Ui_HomeSA
{
public:
    QFrame *frame;
    QPushButton *hmClosePB;
    QELabel *qelabel;
    QELabel *qelabel_6;
    QEForm *homeQEF;

    void setupUi(QDialog *HomeSA)
    {
        if (HomeSA->objectName().isEmpty())
            HomeSA->setObjectName(QStringLiteral("HomeSA"));
        HomeSA->resize(461, 349);
        frame = new QFrame(HomeSA);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 453, 33));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        hmClosePB = new QPushButton(frame);
        hmClosePB->setObjectName(QStringLiteral("hmClosePB"));
        hmClosePB->setGeometry(QRect(372, 4, 74, 24));
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
        homeQEF = new QEForm(HomeSA);
        homeQEF->setObjectName(QStringLiteral("homeQEF"));
        homeQEF->setGeometry(QRect(4, 42, 452, 300));

        retranslateUi(HomeSA);

        QMetaObject::connectSlotsByName(HomeSA);
    } // setupUi

    void retranslateUi(QDialog *HomeSA)
    {
        HomeSA->setWindowTitle(QApplication::translate("HomeSA", "Dialog", 0));
        hmClosePB->setText(QApplication::translate("HomeSA", "Close", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("HomeSA", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("HomeSA", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("HomeSA", "$(P):MBBI:$(M)-$(N):MOTOR:STATE", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("HomeSA", "P=CHA,M=2531-1,N=2", 0)));
        homeQEF->setProperty("uiFile", QVariant(QApplication::translate("HomeSA", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/home.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class HomeSA: public Ui_HomeSA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESA_H
