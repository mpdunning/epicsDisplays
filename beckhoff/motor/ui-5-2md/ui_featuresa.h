/********************************************************************************
** Form generated from reading UI file 'featuresa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURESA_H
#define UI_FEATURESA_H

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

class Ui_Feature
{
public:
    QFrame *frame;
    QPushButton *featClosePB;
    QELabel *qelabel;
    QELabel *qelabel_6;
    QEForm *qeform;

    void setupUi(QDialog *Feature)
    {
        if (Feature->objectName().isEmpty())
            Feature->setObjectName(QStringLiteral("Feature"));
        Feature->resize(461, 349);
        frame = new QFrame(Feature);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 453, 33));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        featClosePB = new QPushButton(frame);
        featClosePB->setObjectName(QStringLiteral("featClosePB"));
        featClosePB->setGeometry(QRect(372, 4, 74, 24));
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
        qeform = new QEForm(Feature);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(4, 42, 452, 300));

        retranslateUi(Feature);

        QMetaObject::connectSlotsByName(Feature);
    } // setupUi

    void retranslateUi(QDialog *Feature)
    {
        Feature->setWindowTitle(QApplication::translate("Feature", "Dialog", 0));
        featClosePB->setText(QApplication::translate("Feature", "Close", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("Feature", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("Feature", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_6->setProperty("variable", QVariant(QApplication::translate("Feature", "$(P):MBBI:$(M)-$(N):MOTOR:STATE", 0)));
        qelabel_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("Feature", "P=CHA,M=2531-1,N=2", 0)));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("Feature", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/feature.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class Feature: public Ui_Feature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURESA_H
