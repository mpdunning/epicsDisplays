/********************************************************************************
** Form generated from reading UI file 'motor.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTOR_H
#define UI_MOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEShape.h"
#include "abutton.h"
#include "cabutton.h"

QT_BEGIN_NAMESPACE

class Ui_Motor
{
public:
    QELabel *qelabel_2;
    QELabel *qelabel_3;
    QEShape *qeshape_9;
    QEShape *qeshape_4;
    QEShape *qeshape_2;
    QEShape *qeshape;
    QEShape *qeshape_3;
    QELabel *qelabel_4;
    QFrame *frame;
    QELabel *qelabel;
    QPushButton *mClosePB;
    QLabel *label;
    QLabel *label_2;
    QELineEdit *qelineedit;
    QELineEdit *qelineedit_2;
    QLabel *label_3;
    QLabel *label_4;
    QELabel *DenyGOQELB;
    CAButton *GO_PB;
    CAButton *FOR_PB;
    CAButton *REV_PB;
    CAButton *STOP_PB;
    QELabel *DenyRVQELB;
    QELabel *DenyFOQELB;

    void setupUi(QDialog *Motor)
    {
        if (Motor->objectName().isEmpty())
            Motor->setObjectName(QStringLiteral("Motor"));
        Motor->resize(211, 224);
        qelabel_2 = new QELabel(Motor);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(84, 44, 89, 16));
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2->setDisplayAlarmState(false);
        qelabel_3 = new QELabel(Motor);
        qelabel_3->setObjectName(QStringLiteral("qelabel_3"));
        qelabel_3->setGeometry(QRect(84, 60, 89, 16));
        qelabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_3->setDisplayAlarmState(false);
        qeshape_9 = new QEShape(Motor);
        qeshape_9->setObjectName(QStringLiteral("qeshape_9"));
        qeshape_9->setGeometry(QRect(184, 104, 10, 17));
        qeshape_9->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_9->setProperty("scale1", QVariant(-120));
        qeshape_9->setProperty("offset1", QVariant(120));
        qeshape_9->setProperty("point1", QVariant(QPoint(1, 1)));
        qeshape_9->setProperty("point2", QVariant(QPoint(8, 15)));
        qeshape_4 = new QEShape(Motor);
        qeshape_4->setObjectName(QStringLiteral("qeshape_4"));
        qeshape_4->setGeometry(QRect(60, 104, 124, 17));
        qeshape_4->setProperty("point1", QVariant(QPoint(0, 1)));
        qeshape_4->setProperty("point2", QVariant(QPoint(125, 16)));
        qeshape_4->setProperty("color1", QVariant(QColor(152, 255, 249)));
        qeshape_4->setDrawBorder(false);
        qeshape_2 = new QEShape(Motor);
        qeshape_2->setObjectName(QStringLiteral("qeshape_2"));
        qeshape_2->setGeometry(QRect(60, 114, 124, 4));
        qeshape_2->setProperty("scale1", QVariant(0.005));
        qeshape_2->setProperty("offset1", QVariant(0));
        qeshape_2->setProperty("point2", QVariant(QPoint(125, 8)));
        qeshape_2->setProperty("color1", QVariant(QColor(200, 111, 135)));
        qeshape_2->setProperty("color5", QVariant(QColor(255, 157, 175)));
        qeshape_2->setProperty("color6", QVariant(QColor(250, 105, 255)));
        qeshape_2->setProperty("color7", QVariant(QColor(151, 248, 232)));
        qeshape_2->setProperty("color8", QVariant(QColor(129, 255, 140)));
        qeshape_2->setProperty("color9", QVariant(QColor(229, 255, 133)));
        qeshape_2->setProperty("color10", QVariant(QColor(255, 159, 90)));
        qeshape_2->setDrawBorder(false);
        qeshape = new QEShape(Motor);
        qeshape->setObjectName(QStringLiteral("qeshape"));
        qeshape->setGeometry(QRect(60, 108, 124, 4));
        qeshape->setProperty("animation1", QVariant(QEShape::Width));
        qeshape->setProperty("scale1", QVariant(0.005));
        qeshape->setProperty("offset1", QVariant(0));
        qeshape->setProperty("point2", QVariant(QPoint(124, 4)));
        qeshape->setProperty("color1", QVariant(QColor(118, 136, 235)));
        qeshape->setDrawBorder(false);
        qeshape_3 = new QEShape(Motor);
        qeshape_3->setObjectName(QStringLiteral("qeshape_3"));
        qeshape_3->setGeometry(QRect(50, 104, 10, 17));
        qeshape_3->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_3->setProperty("scale1", QVariant(-120));
        qeshape_3->setProperty("offset1", QVariant(120));
        qeshape_3->setProperty("point1", QVariant(QPoint(1, 1)));
        qeshape_3->setProperty("point2", QVariant(QPoint(8, 15)));
        qelabel_4 = new QELabel(Motor);
        qelabel_4->setObjectName(QStringLiteral("qelabel_4"));
        qelabel_4->setGeometry(QRect(84, 80, 77, 21));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        qelabel_4->setFont(font);
        qelabel_4->setAlignment(Qt::AlignCenter);
        qelabel_4->setDisplayAlarmState(false);
        frame = new QFrame(Motor);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 201, 32));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        qelabel = new QELabel(frame);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(8, 4, 81, 25));
        QFont font1;
        font1.setPointSize(12);
        qelabel->setFont(font1);
        qelabel->setDisplayAlarmState(false);
        mClosePB = new QPushButton(frame);
        mClosePB->setObjectName(QStringLiteral("mClosePB"));
        mClosePB->setGeometry(QRect(138, 4, 56, 24));
        mClosePB->setAutoDefault(false);
        label = new QLabel(Motor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(44, 44, 29, 16));
        label_2 = new QLabel(Motor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(36, 60, 37, 16));
        qelineedit = new QELineEdit(Motor);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(80, 128, 89, 24));
        qelineedit->setUseDbPrecision(true);
        qelineedit->setAddUnits(true);
        qelineedit_2 = new QELineEdit(Motor);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(88, 160, 81, 24));
        qelineedit_2->setUseDbPrecision(true);
        qelineedit_2->setAddUnits(true);
        label_3 = new QLabel(Motor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(16, 128, 56, 24));
        label_4 = new QLabel(Motor);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(8, 160, 49, 24));
        DenyGOQELB = new QELabel(Motor);
        DenyGOQELB->setObjectName(QStringLiteral("DenyGOQELB"));
        DenyGOQELB->setGeometry(QRect(12, 196, 26, 15));
        DenyGOQELB->setProperty("visible", QVariant(false));
        DenyGOQELB->setDisplayAlarmState(false);
        GO_PB = new CAButton(Motor);
        GO_PB->setObjectName(QStringLiteral("GO_PB"));
        GO_PB->setGeometry(QRect(172, 128, 32, 24));
        GO_PB->setAutoDefault(false);
        GO_PB->setUseTextColor(true);
        GO_PB->setProperty("writeOnPress", QVariant(true));
        GO_PB->setProperty("writeOnRelease", QVariant(false));
        GO_PB->setSubscribe(true);
        GO_PB->setProperty("AlarmEnable", QVariant(false));
        GO_PB->setLiteralLabel(true);
        FOR_PB = new CAButton(Motor);
        FOR_PB->setObjectName(QStringLiteral("FOR_PB"));
        FOR_PB->setGeometry(QRect(174, 160, 24, 24));
        QFont font2;
        font2.setFamily(QStringLiteral("Monospace"));
        font2.setBold(true);
        font2.setWeight(75);
        FOR_PB->setFont(font2);
        FOR_PB->setAutoDefault(false);
        FOR_PB->setUseTextColor(true);
        FOR_PB->setProperty("writeOnPress", QVariant(true));
        FOR_PB->setProperty("writeOnRelease", QVariant(false));
        FOR_PB->setShowLabel(true);
        FOR_PB->setSubscribe(true);
        FOR_PB->setProperty("AlarmEnable", QVariant(false));
        FOR_PB->setLiteralLabel(true);
        REV_PB = new CAButton(Motor);
        REV_PB->setObjectName(QStringLiteral("REV_PB"));
        REV_PB->setGeometry(QRect(60, 160, 24, 24));
        REV_PB->setFont(font2);
        REV_PB->setAutoDefault(false);
        REV_PB->setUseTextColor(true);
        REV_PB->setProperty("writeOnPress", QVariant(true));
        REV_PB->setProperty("writeOnRelease", QVariant(false));
        REV_PB->setShowLabel(true);
        REV_PB->setSubscribe(true);
        REV_PB->setProperty("AlarmEnable", QVariant(false));
        REV_PB->setLiteralLabel(true);
        STOP_PB = new CAButton(Motor);
        STOP_PB->setObjectName(QStringLiteral("STOP_PB"));
        STOP_PB->setGeometry(QRect(100, 192, 56, 24));
        STOP_PB->setFont(font2);
        STOP_PB->setAutoDefault(false);
        STOP_PB->setOnColor(QColor(180, 20, 60));
        STOP_PB->setOffColor(QColor(240, 20, 60));
        STOP_PB->setUseTextColor(true);
        STOP_PB->setTextColor(QColor(255, 240, 200));
        STOP_PB->setSubscribe(true);
        STOP_PB->setProperty("AlarmEnable", QVariant(false));
        STOP_PB->setLiteralLabel(true);
        DenyRVQELB = new QELabel(Motor);
        DenyRVQELB->setObjectName(QStringLiteral("DenyRVQELB"));
        DenyRVQELB->setGeometry(QRect(62, 196, 26, 15));
        DenyRVQELB->setProperty("visible", QVariant(false));
        DenyRVQELB->setDisplayAlarmState(false);
        DenyFOQELB = new QELabel(Motor);
        DenyFOQELB->setObjectName(QStringLiteral("DenyFOQELB"));
        DenyFOQELB->setGeometry(QRect(172, 196, 26, 15));
        DenyFOQELB->setProperty("visible", QVariant(false));
        DenyFOQELB->setDisplayAlarmState(false);

        retranslateUi(Motor);

        QMetaObject::connectSlotsByName(Motor);
    } // setupUi

    void retranslateUi(QDialog *Motor)
    {
        Motor->setWindowTitle(QApplication::translate("Motor", "Dialog", 0));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):CALC:$(R)-$(N):CH$(C)", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,R=3132,N=2,C=1", 0)));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):CALC:$(Q)-$(N):CH1:POS:MM", 0)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        qeshape_9->setProperty("variable1", QVariant(QApplication::translate("Motor", "$(P):BI:$(Q)-$(N):CH1:LIM:FOR", 0)));
        qeshape_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        qeshape_2->setProperty("variable1", QVariant(QApplication::translate("Motor", "$(P):AO:$(Q)-$(N):CH1:SET:POS:MM", 0)));
        qeshape_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        qeshape->setProperty("variable1", QVariant(QApplication::translate("Motor", "$(P):CALC:$(Q)-$(N):CH1:POS:MM", 0)));
        qeshape->setProperty("variable2", QVariant(QString()));
        qeshape->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        qeshape_3->setProperty("variable1", QVariant(QApplication::translate("Motor", "$(P):BI:$(Q)-$(N):CH1:LIM:REV", 0)));
        qeshape_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):MBBI:$(Q)-$(N):CH1:MOTOR:STATE", 0)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        qelabel->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):LI:$(Q)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        mClosePB->setText(QApplication::translate("Motor", "Close", 0));
        label->setText(QApplication::translate("Motor", "RBV", 0));
        label_2->setText(QApplication::translate("Motor", "Steps", 0));
        qelineedit->setText(QApplication::translate("Motor", "140.00 mm", 0));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):AO:SC:$(Q)-$(N):CH1:SET:POS:MM", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):AO:$(Q)-$(N):CH1:SET:INC:MM", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        label_3->setText(QApplication::translate("Motor", "Absolute", 0));
        label_4->setText(QApplication::translate("Motor", "Relative", 0));
        DenyGOQELB->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):BI:$(Q)-$(N):CH1:DENYGO", 0)));
        DenyGOQELB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        GO_PB->setOnText(QApplication::translate("Motor", "Yes", 0));
        GO_PB->setOffText(QApplication::translate("Motor", "Not", 0));
        GO_PB->setOnLabel(QApplication::translate("Motor", "Go", 0));
        GO_PB->setOffLabel(QApplication::translate("Motor", "Go", 0));
        GO_PB->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):BO:$(Q)-$(N):CH1:GO:POS", 0)));
        GO_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        FOR_PB->setText(QApplication::translate("Motor", ">", 0));
        FOR_PB->setOnText(QApplication::translate("Motor", "Yes", 0));
        FOR_PB->setOffText(QApplication::translate("Motor", "Not", 0));
        FOR_PB->setOnLabel(QApplication::translate("Motor", ">", 0));
        FOR_PB->setOffLabel(QApplication::translate("Motor", ">", 0));
        FOR_PB->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):BO:$(Q)-$(N):CH1:JOG:FOR", 0)));
        FOR_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        REV_PB->setText(QApplication::translate("Motor", "<", 0));
        REV_PB->setOnText(QApplication::translate("Motor", "Yes", 0));
        REV_PB->setOffText(QApplication::translate("Motor", "Not", 0));
        REV_PB->setOnLabel(QApplication::translate("Motor", "<", 0));
        REV_PB->setOffLabel(QApplication::translate("Motor", "<", 0));
        REV_PB->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):BO:$(Q)-$(N):CH1:JOG:REV", 0)));
        REV_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        STOP_PB->setOnText(QApplication::translate("Motor", "Yes", 0));
        STOP_PB->setOffText(QApplication::translate("Motor", "Not", 0));
        STOP_PB->setOnLabel(QApplication::translate("Motor", "STOP", 0));
        STOP_PB->setOffLabel(QApplication::translate("Motor", "STOP", 0));
        STOP_PB->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):BO:$(Q)-$(N):CH1:STOP", 0)));
        STOP_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        DenyRVQELB->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):BI:$(Q)-$(N):CH1:DENYRV", 0)));
        DenyRVQELB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
        DenyFOQELB->setProperty("variable", QVariant(QApplication::translate("Motor", "$(P):BI:$(Q)-$(N):CH1:DENYFO", 0)));
        DenyFOQELB->setProperty("variableSubstitutions", QVariant(QApplication::translate("Motor", "P=CHA,Q=2531-1,N=2", 0)));
    } // retranslateUi

};

namespace Ui {
    class Motor: public Ui_Motor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTOR_H
