/********************************************************************************
** Form generated from reading UI file 'alarmLevels.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMLEVELS_H
#define UI_ALARMLEVELS_H

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
#include "QELineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_AlarmLevels
{
public:
    QFrame *frame;
    QPushButton *closePB;
    QGroupBox *groupBox_2;
    QELineEdit *qelineedit_3;
    QLabel *label_4;
    QLabel *label_5;
    QELineEdit *qelineedit_4;
    QLabel *label_6;
    QELineEdit *qelineedit_5;
    QLabel *label_7;
    QELineEdit *qelineedit_6;
    QEComboBox *qecombobox;
    QEComboBox *qecombobox_2;
    QEComboBox *qecombobox_3;
    QEComboBox *qecombobox_4;

    void setupUi(QDialog *AlarmLevels)
    {
        if (AlarmLevels->objectName().isEmpty())
            AlarmLevels->setObjectName(QStringLiteral("AlarmLevels"));
        AlarmLevels->resize(240, 163);
        frame = new QFrame(AlarmLevels);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 2, 240, 35));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        closePB = new QPushButton(frame);
        closePB->setObjectName(QStringLiteral("closePB"));
        closePB->setGeometry(QRect(170, 4, 56, 24));
        closePB->setAutoDefault(false);
        groupBox_2 = new QGroupBox(AlarmLevels);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(4, 40, 231, 115));
        qelineedit_3 = new QELineEdit(groupBox_2);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(64, 22, 68, 20));
        qelineedit_3->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(4, 22, 56, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(4, 44, 56, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_4 = new QELineEdit(groupBox_2);
        qelineedit_4->setObjectName(QStringLiteral("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(64, 44, 68, 20));
        qelineedit_4->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(4, 66, 56, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_5 = new QELineEdit(groupBox_2);
        qelineedit_5->setObjectName(QStringLiteral("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(64, 66, 68, 20));
        qelineedit_5->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(4, 88, 56, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_6 = new QELineEdit(groupBox_2);
        qelineedit_6->setObjectName(QStringLiteral("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(64, 88, 68, 20));
        qelineedit_6->setProperty("displayAlarmStateOption", QVariant(QEGenericEdit::Never));
        qecombobox = new QEComboBox(groupBox_2);
        qecombobox->setObjectName(QStringLiteral("qecombobox"));
        qecombobox->setGeometry(QRect(134, 22, 92, 20));
        qecombobox->setProperty("displayAlarmStateOption", QVariant(QEComboBox::Never));
        qecombobox_2 = new QEComboBox(groupBox_2);
        qecombobox_2->setObjectName(QStringLiteral("qecombobox_2"));
        qecombobox_2->setGeometry(QRect(134, 44, 92, 20));
        qecombobox_2->setProperty("displayAlarmStateOption", QVariant(QEComboBox::Never));
        qecombobox_3 = new QEComboBox(groupBox_2);
        qecombobox_3->setObjectName(QStringLiteral("qecombobox_3"));
        qecombobox_3->setGeometry(QRect(134, 66, 92, 20));
        qecombobox_3->setProperty("displayAlarmStateOption", QVariant(QEComboBox::Never));
        qecombobox_4 = new QEComboBox(groupBox_2);
        qecombobox_4->setObjectName(QStringLiteral("qecombobox_4"));
        qecombobox_4->setGeometry(QRect(134, 88, 92, 20));
        qecombobox_4->setProperty("displayAlarmStateOption", QVariant(QEComboBox::Never));

        retranslateUi(AlarmLevels);

        QMetaObject::connectSlotsByName(AlarmLevels);
    } // setupUi

    void retranslateUi(QDialog *AlarmLevels)
    {
        AlarmLevels->setWindowTitle(QApplication::translate("AlarmLevels", "Dialog", 0));
        closePB->setText(QApplication::translate("AlarmLevels", "Close", 0));
        groupBox_2->setTitle(QApplication::translate("AlarmLevels", "ADC Alarm Setup", 0));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).HIHI", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
        label_4->setText(QApplication::translate("AlarmLevels", "High high", 0));
        label_5->setText(QApplication::translate("AlarmLevels", "High", 0));
        qelineedit_4->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).HIGH", 0)));
        qelineedit_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
        label_6->setText(QApplication::translate("AlarmLevels", "Low", 0));
        qelineedit_5->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).LOW", 0)));
        qelineedit_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
        label_7->setText(QApplication::translate("AlarmLevels", "Low low", 0));
        qelineedit_6->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).LOLO", 0)));
        qelineedit_6->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
        qecombobox->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).HHSV", 0)));
        qecombobox->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
        qecombobox_2->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).HSV", 0)));
        qecombobox_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
        qecombobox_3->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).LSV", 0)));
        qecombobox_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
        qecombobox_4->setProperty("variable", QVariant(QApplication::translate("AlarmLevels", "$(P):AI:$(M)-$(N):CH$(C).LLSV", 0)));
        qecombobox_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("AlarmLevels", "P=CHA,M=3408,N=3,C=1", 0)));
    } // retranslateUi

};

namespace Ui {
    class AlarmLevels: public Ui_AlarmLevels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMLEVELS_H
