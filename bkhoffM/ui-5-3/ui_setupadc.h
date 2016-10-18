/********************************************************************************
** Form generated from reading UI file 'setupadc.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPADC_H
#define UI_SETUPADC_H

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
#include "QEComboBox.h"
#include "QELabel.h"
#include "QELineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_SetupADC
{
public:
    QFrame *frame;
    QPushButton *adpClosePB;
    QLabel *label_6;
    QELineEdit *qelineedit;
    QLabel *label;
    QGroupBox *groupBox;
    QEComboBox *qecombobox_4;
    QELineEdit *qelineedit_3;
    QLabel *label_5;
    QELineEdit *qelineedit_4;
    QELineEdit *qelineedit_2;
    QLabel *label_4;
    QELineEdit *qelineedit_5;
    QLabel *label_3;
    QEComboBox *qecombobox;
    QLabel *label_2;
    QEComboBox *qecombobox_2;
    QEComboBox *qecombobox_3;
    QGroupBox *groupBox_2;
    QELineEdit *qelineedit_7;
    QELabel *qelabel;
    QELineEdit *qelineedit_6;
    QELabel *qelabel_2;

    void setupUi(QDialog *SetupADC)
    {
        if (SetupADC->objectName().isEmpty())
            SetupADC->setObjectName(QStringLiteral("SetupADC"));
        SetupADC->resize(289, 300);
        frame = new QFrame(SetupADC);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 280, 32));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        adpClosePB = new QPushButton(frame);
        adpClosePB->setObjectName(QStringLiteral("adpClosePB"));
        adpClosePB->setGeometry(QRect(212, 4, 56, 24));
        adpClosePB->setAutoDefault(false);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(16, 8, 165, 16));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        qelineedit = new QELineEdit(SetupADC);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(100, 40, 141, 20));
        qelineedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit->setDisplayAlarmState(false);
        label = new QLabel(SetupADC);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(7, 40, 89, 20));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox = new QGroupBox(SetupADC);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(12, 60, 260, 132));
        qecombobox_4 = new QEComboBox(groupBox);
        qecombobox_4->setObjectName(QStringLiteral("qecombobox_4"));
        qecombobox_4->setGeometry(QRect(148, 96, 97, 20));
        qelineedit_3 = new QELineEdit(groupBox);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(76, 48, 69, 20));
        qelineedit_3->setDisplayAlarmState(false);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(16, 96, 56, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_4 = new QELineEdit(groupBox);
        qelineedit_4->setObjectName(QStringLiteral("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(76, 72, 69, 20));
        qelineedit_4->setDisplayAlarmState(false);
        qelineedit_2 = new QELineEdit(groupBox);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(76, 24, 69, 20));
        qelineedit_2->setDisplayAlarmState(false);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(16, 72, 56, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_5 = new QELineEdit(groupBox);
        qelineedit_5->setObjectName(QStringLiteral("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(76, 96, 69, 20));
        qelineedit_5->setDisplayAlarmState(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(16, 48, 56, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qecombobox = new QEComboBox(groupBox);
        qecombobox->setObjectName(QStringLiteral("qecombobox"));
        qecombobox->setGeometry(QRect(148, 24, 97, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(16, 24, 56, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qecombobox_2 = new QEComboBox(groupBox);
        qecombobox_2->setObjectName(QStringLiteral("qecombobox_2"));
        qecombobox_2->setGeometry(QRect(148, 48, 97, 20));
        qecombobox_3 = new QEComboBox(groupBox);
        qecombobox_3->setObjectName(QStringLiteral("qecombobox_3"));
        qecombobox_3->setGeometry(QRect(148, 72, 97, 20));
        groupBox_2 = new QGroupBox(SetupADC);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(92, 200, 180, 76));
        qelineedit_7 = new QELineEdit(groupBox_2);
        qelineedit_7->setObjectName(QStringLiteral("qelineedit_7"));
        qelineedit_7->setGeometry(QRect(84, 44, 80, 20));
        qelineedit_7->setDisplayAlarmState(false);
        qelineedit_7->setUseDbPrecision(false);
        qelabel = new QELabel(groupBox_2);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(12, 20, 73, 20));
        qelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel->setDisplayAlarmState(false);
        qelineedit_6 = new QELineEdit(groupBox_2);
        qelineedit_6->setObjectName(QStringLiteral("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(84, 20, 80, 20));
        qelineedit_6->setDisplayAlarmState(false);
        qelineedit_6->setUseDbPrecision(false);
        qelabel_2 = new QELabel(groupBox_2);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(12, 44, 73, 20));
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2->setDisplayAlarmState(false);

        retranslateUi(SetupADC);

        QMetaObject::connectSlotsByName(SetupADC);
    } // setupUi

    void retranslateUi(QDialog *SetupADC)
    {
        SetupADC->setWindowTitle(QApplication::translate("SetupADC", "Dialog", 0));
        adpClosePB->setText(QApplication::translate("SetupADC", "Close", 0));
        label_6->setText(QApplication::translate("SetupADC", "Change ADC Params", 0));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).DESC", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        label->setText(QApplication::translate("SetupADC", "Channel Name", 0));
        groupBox->setTitle(QApplication::translate("SetupADC", "Alarm Setup", 0));
        qecombobox_4->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).LLSV", 0)));
        qecombobox_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).HIGH", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        label_5->setText(QApplication::translate("SetupADC", "Low low", 0));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).LOW", 0)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).HIHI", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        label_4->setText(QApplication::translate("SetupADC", "Low", 0));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).LOLO", 0)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        label_3->setText(QApplication::translate("SetupADC", "High", 0));
        qecombobox->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).HHSV", 0)));
        qecombobox->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        label_2->setText(QApplication::translate("SetupADC", "High high", 0));
        qecombobox_2->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).HSV", 0)));
        qecombobox_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        qecombobox_3->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AI:$(R)-$(N):CH$(C).LSV", 0)));
        qecombobox_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        groupBox_2->setTitle(QApplication::translate("SetupADC", "Conversion Coefficients", 0));
        qelineedit_7->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AO:$(R)-$(N):CH$(C):B", 0)));
        qelineedit_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        qelabel->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AO:$(R)-$(N):CH$(C):A.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        qelineedit_6->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AO:$(R)-$(N):CH$(C):A", 0)));
        qelineedit_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("SetupADC", "$(P):AO:$(R)-$(N):CH$(C):B.DESC", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("SetupADC", "P=CHA,R=3132,N=2,C=1", 0)));
    } // retranslateUi

};

namespace Ui {
    class SetupADC: public Ui_SetupADC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPADC_H
