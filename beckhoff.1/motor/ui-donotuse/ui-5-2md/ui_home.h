/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "QBitStatus.h"
#include "QEBitStatus.h"
#include "QEComboBox.h"
#include "QELabel.h"
#include "QELineEdit.h"
#include "abutton.h"
#include "cabutton.h"

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    CAButton *homeCAB;
    QELineEdit *qelineedit_8;
    QELabel *qelabel_11;
    QLabel *label_47;
    QLabel *label;
    QELabel *qelabel;
    QLabel *label_2;
    QGroupBox *groupBox;
    QEBitStatus *qebitstatus_8;
    QLabel *label_9;
    QEBitStatus *qebitstatus_7;
    QEComboBox *typeQECBox;
    QLabel *label_8;
    QLabel *label_48;
    QELineEdit *qelineedit_9;
    QELabel *qelabel_12;
    QELabel *qelabel_13;
    QELabel *qelabel_14;
    QELabel *qelabel_15;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QStringLiteral("Home"));
        Home->resize(436, 275);
        QFont font;
        font.setFamily(QStringLiteral("Liberation Mono"));
        font.setPointSize(9);
        Home->setFont(font);
        homeCAB = new CAButton(Home);
        homeCAB->setObjectName(QStringLiteral("homeCAB"));
        homeCAB->setGeometry(QRect(294, 82, 127, 29));
        homeCAB->setAutoDefault(false);
        homeCAB->setUseTextColor(true);
        homeCAB->setProperty("writeOnRelease", QVariant(false));
        homeCAB->setProperty("writeBits", QVariant(false));
        homeCAB->setShowLabel(true);
        homeCAB->setProperty("bitNumber", QVariant(0u));
        homeCAB->setSubscribe(true);
        homeCAB->setProperty("AlarmEnable", QVariant(false));
        homeCAB->setLiteralLabel(true);
        qelineedit_8 = new QELineEdit(Home);
        qelineedit_8->setObjectName(QStringLiteral("qelineedit_8"));
        qelineedit_8->setGeometry(QRect(158, 220, 69, 21));
        qelabel_11 = new QELabel(Home);
        qelabel_11->setObjectName(QStringLiteral("qelabel_11"));
        qelabel_11->setGeometry(QRect(228, 224, 87, 16));
        qelabel_11->setDisplayAlarmState(false);
        label_47 = new QLabel(Home);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(12, 224, 143, 16));
        label_47->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(Home);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 14, 155, 16));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        qelabel = new QELabel(Home);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(270, 30, 145, 24));
        QFont font2;
        font2.setFamily(QStringLiteral("Sans Serif"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        qelabel->setFont(font2);
        qelabel->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Home);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 30, 89, 24));
        label_2->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(Home);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(12, 60, 191, 129));
        qebitstatus_8 = new QEBitStatus(groupBox);
        qebitstatus_8->setObjectName(QStringLiteral("qebitstatus_8"));
        qebitstatus_8->setGeometry(QRect(164, 92, 16, 16));
        qebitstatus_8->setNumberOfBits(1);
        qebitstatus_8->setShift(0);
        qebitstatus_8->setOnColour(QColor(0, 255, 0));
        qebitstatus_8->setOffColour(QColor(156, 173, 194));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(12, 90, 151, 16));
        QFont font3;
        font3.setFamily(QStringLiteral("Sans Serif"));
        label_9->setFont(font3);
        qebitstatus_7 = new QEBitStatus(groupBox);
        qebitstatus_7->setObjectName(QStringLiteral("qebitstatus_7"));
        qebitstatus_7->setGeometry(QRect(164, 66, 16, 16));
        qebitstatus_7->setNumberOfBits(1);
        qebitstatus_7->setShift(0);
        qebitstatus_7->setOnColour(QColor(0, 255, 0));
        qebitstatus_7->setOffColour(QColor(156, 173, 194));
        typeQECBox = new QEComboBox(groupBox);
        typeQECBox->setObjectName(QStringLiteral("typeQECBox"));
        typeQECBox->setGeometry(QRect(68, 30, 115, 29));
        typeQECBox->setFont(font2);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(12, 64, 151, 16));
        label_8->setFont(font3);
        label_48 = new QLabel(Home);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(12, 248, 145, 16));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_9 = new QELineEdit(Home);
        qelineedit_9->setObjectName(QStringLiteral("qelineedit_9"));
        qelineedit_9->setGeometry(QRect(158, 244, 69, 21));
        qelabel_12 = new QELabel(Home);
        qelabel_12->setObjectName(QStringLiteral("qelabel_12"));
        qelabel_12->setGeometry(QRect(228, 246, 87, 16));
        qelabel_12->setDisplayAlarmState(false);
        qelabel_13 = new QELabel(Home);
        qelabel_13->setObjectName(QStringLiteral("qelabel_13"));
        qelabel_13->setGeometry(QRect(352, 118, 87, 16));
        qelabel_13->setDisplayAlarmState(false);
        qelabel_14 = new QELabel(Home);
        qelabel_14->setObjectName(QStringLiteral("qelabel_14"));
        qelabel_14->setGeometry(QRect(352, 140, 87, 16));
        qelabel_14->setDisplayAlarmState(false);
        qelabel_15 = new QELabel(Home);
        qelabel_15->setObjectName(QStringLiteral("qelabel_15"));
        qelabel_15->setGeometry(QRect(352, 162, 87, 16));
        qelabel_15->setDisplayAlarmState(false);
        label_3 = new QLabel(Home);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(238, 118, 111, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(Home);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(238, 140, 111, 16));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(Home);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 162, 121, 16));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Dialog", 0));
        homeCAB->setOnText(QApplication::translate("Home", "yes", 0));
        homeCAB->setOffText(QApplication::translate("Home", "no", 0));
        homeCAB->setOnLabel(QApplication::translate("Home", "Home", 0));
        homeCAB->setOffLabel(QApplication::translate("Home", "Home", 0));
        homeCAB->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):BO:$(M)-$(N):HOME", 0)));
        homeCAB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        qelineedit_8->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):AO:$(M)-$(N):SET:POS:ABS.LOPR", 0)));
        qelineedit_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_11->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):AO:$(M)-$(N):SET:POS:ABS.LOPR", 0)));
        qelabel_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        label_47->setText(QApplication::translate("Home", "Neg Operating Limit", 0));
        label->setText(QApplication::translate("Home", "Home Functions", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):MBBI:$(M)-$(N):HOMING:STAT", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        label_2->setText(QApplication::translate("Home", "homing state", 0));
        groupBox->setTitle(QApplication::translate("Home", "Setup", 0));
        qebitstatus_8->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):BI:$(M)-$(N):HAVE:PLIM", 0)));
        qebitstatus_8->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        label_9->setText(QApplication::translate("Home", "Pos limit switch present", 0));
        qebitstatus_7->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):BI:$(M)-$(N):HAVE:NLIM", 0)));
        qebitstatus_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        typeQECBox->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):MBBO:$(M)-$(N):HOME:TYPE", 0)));
        typeQECBox->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        label_8->setText(QApplication::translate("Home", "Neg limit switch present", 0));
        label_48->setText(QApplication::translate("Home", "Pos Operating Limit", 0));
        qelineedit_9->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):AO:$(M)-$(N):SET:POS:ABS.HOPR", 0)));
        qelineedit_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_12->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):AO:$(M)-$(N):SET:POS:ABS.HOPR", 0)));
        qelabel_12->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_13->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):LI:$(M)-$(N):START:POS", 0)));
        qelabel_13->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_14->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):LI:$(M)-$(N):END:POS", 0)));
        qelabel_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_15->setProperty("variable", QVariant(QApplication::translate("Home", "$(P):CALC:$(M)-$(N):DIST:MM", 0)));
        qelabel_15->setProperty("variableSubstitutions", QVariant(QApplication::translate("Home", "P=CHA,M=2531-1,N=2", 0)));
        label_3->setText(QApplication::translate("Home", "Start Position", 0));
        label_4->setText(QApplication::translate("Home", "End Position", 0));
        label_5->setText(QApplication::translate("Home", "Distance traveled", 0));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
