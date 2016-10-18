/********************************************************************************
** Form generated from reading UI file 'motorxy.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORXY_H
#define UI_MOTORXY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEShape.h"
#include "abutton.h"
#include "cabutton.h"

QT_BEGIN_NAMESPACE

class Ui_motorForm
{
public:
    QELabel *qelabel;
    QELabel *qelabel_3;
    QELabel *qelabel_2;
    QLabel *label_2;
    QLabel *label;
    QEShape *qeshape_9;
    QEShape *qeshape_4;
    QEShape *qeshape_3;
    QEShape *qeshape;
    QEShape *qeshape_2;
    QLabel *label_3;
    QLabel *label_4;
    CAButton *FOR_PB;
    QELineEdit *qelineedit;
    CAButton *REV_PB;
    QELabel *DenyGoQELB;
    CAButton *STOP_PB;
    QELabel *DenyFoQELB;
    QELineEdit *qelineedit_2;
    QELabel *DenyRvQELB;
    CAButton *GO_PB;
    QELabel *qelabel_4;

    void setupUi(QWidget *motorForm)
    {
        if (motorForm->objectName().isEmpty())
            motorForm->setObjectName(QStringLiteral("motorForm"));
        motorForm->resize(191, 205);
        qelabel = new QELabel(motorForm);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(6, 8, 81, 25));
        QFont font;
        font.setPointSize(12);
        qelabel->setFont(font);
        qelabel->setDisplayAlarmState(false);
        qelabel_3 = new QELabel(motorForm);
        qelabel_3->setObjectName(QStringLiteral("qelabel_3"));
        qelabel_3->setGeometry(QRect(58, 52, 89, 16));
        qelabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_3->setDisplayAlarmState(false);
        qelabel_2 = new QELabel(motorForm);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(58, 36, 89, 16));
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2->setDisplayAlarmState(false);
        label_2 = new QLabel(motorForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 52, 37, 16));
        label = new QLabel(motorForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(18, 36, 29, 16));
        qeshape_9 = new QEShape(motorForm);
        qeshape_9->setObjectName(QStringLiteral("qeshape_9"));
        qeshape_9->setGeometry(QRect(156, 90, 10, 17));
        qeshape_9->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_9->setProperty("scale1", QVariant(-120));
        qeshape_9->setProperty("offset1", QVariant(120));
        qeshape_9->setProperty("point1", QVariant(QPoint(1, 1)));
        qeshape_9->setProperty("point2", QVariant(QPoint(8, 15)));
        qeshape_4 = new QEShape(motorForm);
        qeshape_4->setObjectName(QStringLiteral("qeshape_4"));
        qeshape_4->setGeometry(QRect(32, 90, 124, 17));
        qeshape_4->setProperty("point1", QVariant(QPoint(0, 1)));
        qeshape_4->setProperty("point2", QVariant(QPoint(125, 16)));
        qeshape_4->setProperty("color1", QVariant(QColor(152, 255, 249)));
        qeshape_4->setDrawBorder(false);
        qeshape_3 = new QEShape(motorForm);
        qeshape_3->setObjectName(QStringLiteral("qeshape_3"));
        qeshape_3->setGeometry(QRect(22, 90, 10, 17));
        qeshape_3->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_3->setProperty("scale1", QVariant(-120));
        qeshape_3->setProperty("offset1", QVariant(120));
        qeshape_3->setProperty("point1", QVariant(QPoint(1, 1)));
        qeshape_3->setProperty("point2", QVariant(QPoint(8, 15)));
        qeshape = new QEShape(motorForm);
        qeshape->setObjectName(QStringLiteral("qeshape"));
        qeshape->setGeometry(QRect(32, 94, 124, 4));
        qeshape->setProperty("animation1", QVariant(QEShape::Width));
        qeshape->setProperty("scale1", QVariant(0.005));
        qeshape->setProperty("offset1", QVariant(0));
        qeshape->setProperty("point2", QVariant(QPoint(124, 4)));
        qeshape->setProperty("color1", QVariant(QColor(118, 136, 235)));
        qeshape->setDrawBorder(false);
        qeshape_2 = new QEShape(motorForm);
        qeshape_2->setObjectName(QStringLiteral("qeshape_2"));
        qeshape_2->setGeometry(QRect(32, 100, 124, 4));
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
        label_3 = new QLabel(motorForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(8, 114, 56, 24));
        label_4 = new QLabel(motorForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(4, 146, 49, 24));
        FOR_PB = new CAButton(motorForm);
        FOR_PB->setObjectName(QStringLiteral("FOR_PB"));
        FOR_PB->setGeometry(QRect(160, 146, 24, 24));
        QFont font1;
        font1.setFamily(QStringLiteral("Monospace"));
        font1.setBold(true);
        font1.setWeight(75);
        FOR_PB->setFont(font1);
        FOR_PB->setAutoDefault(false);
        FOR_PB->setUseTextColor(true);
        FOR_PB->setProperty("writeOnPress", QVariant(true));
        FOR_PB->setProperty("writeOnRelease", QVariant(false));
        FOR_PB->setShowLabel(true);
        FOR_PB->setSubscribe(true);
        FOR_PB->setProperty("AlarmEnable", QVariant(false));
        FOR_PB->setLiteralLabel(true);
        qelineedit = new QELineEdit(motorForm);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(70, 114, 78, 24));
        qelineedit->setUseDbPrecision(true);
        qelineedit->setAddUnits(true);
        REV_PB = new CAButton(motorForm);
        REV_PB->setObjectName(QStringLiteral("REV_PB"));
        REV_PB->setGeometry(QRect(56, 146, 24, 24));
        REV_PB->setFont(font1);
        REV_PB->setAutoDefault(false);
        REV_PB->setUseTextColor(true);
        REV_PB->setProperty("writeOnPress", QVariant(true));
        REV_PB->setProperty("writeOnRelease", QVariant(false));
        REV_PB->setShowLabel(true);
        REV_PB->setSubscribe(true);
        REV_PB->setProperty("AlarmEnable", QVariant(false));
        REV_PB->setLiteralLabel(true);
        DenyGoQELB = new QELabel(motorForm);
        DenyGoQELB->setObjectName(QStringLiteral("DenyGoQELB"));
        DenyGoQELB->setGeometry(QRect(16, 182, 26, 15));
        DenyGoQELB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DenyGoQELB->setProperty("visible", QVariant(false));
        DenyGoQELB->setDisplayAlarmState(false);
        STOP_PB = new CAButton(motorForm);
        STOP_PB->setObjectName(QStringLiteral("STOP_PB"));
        STOP_PB->setGeometry(QRect(80, 178, 56, 24));
        STOP_PB->setFont(font1);
        STOP_PB->setAutoDefault(false);
        STOP_PB->setOnColor(QColor(180, 20, 60));
        STOP_PB->setOffColor(QColor(240, 20, 60));
        STOP_PB->setUseTextColor(true);
        STOP_PB->setTextColor(QColor(255, 240, 200));
        STOP_PB->setSubscribe(true);
        STOP_PB->setProperty("AlarmEnable", QVariant(false));
        STOP_PB->setLiteralLabel(true);
        DenyFoQELB = new QELabel(motorForm);
        DenyFoQELB->setObjectName(QStringLiteral("DenyFoQELB"));
        DenyFoQELB->setGeometry(QRect(144, 182, 26, 15));
        DenyFoQELB->setProperty("visible", QVariant(false));
        DenyFoQELB->setDisplayAlarmState(false);
        qelineedit_2 = new QELineEdit(motorForm);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(84, 146, 72, 24));
        qelineedit_2->setUseDbPrecision(true);
        qelineedit_2->setAddUnits(true);
        DenyRvQELB = new QELabel(motorForm);
        DenyRvQELB->setObjectName(QStringLiteral("DenyRvQELB"));
        DenyRvQELB->setGeometry(QRect(46, 182, 26, 15));
        DenyRvQELB->setProperty("visible", QVariant(false));
        DenyRvQELB->setDisplayAlarmState(false);
        GO_PB = new CAButton(motorForm);
        GO_PB->setObjectName(QStringLiteral("GO_PB"));
        GO_PB->setGeometry(QRect(152, 114, 32, 24));
        GO_PB->setAutoDefault(false);
        GO_PB->setUseTextColor(true);
        GO_PB->setProperty("writeOnPress", QVariant(true));
        GO_PB->setProperty("writeOnRelease", QVariant(false));
        GO_PB->setSubscribe(true);
        GO_PB->setProperty("AlarmEnable", QVariant(false));
        GO_PB->setLiteralLabel(true);
        qelabel_4 = new QELabel(motorForm);
        qelabel_4->setObjectName(QStringLiteral("qelabel_4"));
        qelabel_4->setGeometry(QRect(56, 68, 77, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Monospace"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        qelabel_4->setFont(font2);
        qelabel_4->setAlignment(Qt::AlignCenter);
        qelabel_4->setDisplayAlarmState(false);

        retranslateUi(motorForm);

        QMetaObject::connectSlotsByName(motorForm);
    } // setupUi

    void retranslateUi(QWidget *motorForm)
    {
        motorForm->setWindowTitle(QApplication::translate("motorForm", "Form", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):LI:$(Q)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):CALC:$(Q)-$(N):CH1:POS:MM", 0)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):CALC:$(R)-$(N):CH$(C)", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,R=3132,N=2,C=1", 0)));
        label_2->setText(QApplication::translate("motorForm", "Steps", 0));
        label->setText(QApplication::translate("motorForm", "RBV", 0));
        qeshape_9->setProperty("variable1", QVariant(QApplication::translate("motorForm", "$(P):BI:$(Q)-$(N):CH1:LIM:FOR", 0)));
        qeshape_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qeshape_3->setProperty("variable1", QVariant(QApplication::translate("motorForm", "$(P):BI:$(Q)-$(N):CH1:LIM:REV", 0)));
        qeshape_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qeshape->setProperty("variable1", QVariant(QApplication::translate("motorForm", "$(P):CALC:$(Q)-$(N):CH1:POS:MM", 0)));
        qeshape->setProperty("variable2", QVariant(QString()));
        qeshape->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qeshape_2->setProperty("variable1", QVariant(QApplication::translate("motorForm", "$(P):AO:$(Q)-$(N):CH1:SET:POS:MM", 0)));
        qeshape_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        label_3->setText(QApplication::translate("motorForm", "Absolute", 0));
        label_4->setText(QApplication::translate("motorForm", "Relative", 0));
        FOR_PB->setText(QApplication::translate("motorForm", ">", 0));
        FOR_PB->setOnText(QApplication::translate("motorForm", "Yes", 0));
        FOR_PB->setOffText(QApplication::translate("motorForm", "Not", 0));
        FOR_PB->setOnLabel(QApplication::translate("motorForm", ">", 0));
        FOR_PB->setOffLabel(QApplication::translate("motorForm", ">", 0));
        FOR_PB->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):BO:$(Q)-$(N):CH1:JOG:FOR", 0)));
        FOR_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qelineedit->setText(QApplication::translate("motorForm", "10.00 mm", 0));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):AO:SC:$(Q)-$(N):CH1:SET:POS:MM", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        REV_PB->setText(QApplication::translate("motorForm", "<", 0));
        REV_PB->setOnText(QApplication::translate("motorForm", "Yes", 0));
        REV_PB->setOffText(QApplication::translate("motorForm", "Not", 0));
        REV_PB->setOnLabel(QApplication::translate("motorForm", "<", 0));
        REV_PB->setOffLabel(QApplication::translate("motorForm", "<", 0));
        REV_PB->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):BO:$(Q)-$(N):CH1:JOG:REV", 0)));
        REV_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        DenyGoQELB->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):BI:$(Q)-$(N):CH1:DENYGO", 0)));
        DenyGoQELB->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        STOP_PB->setOnText(QApplication::translate("motorForm", "Yes", 0));
        STOP_PB->setOffText(QApplication::translate("motorForm", "Not", 0));
        STOP_PB->setOnLabel(QApplication::translate("motorForm", "STOP", 0));
        STOP_PB->setOffLabel(QApplication::translate("motorForm", "STOP", 0));
        STOP_PB->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):BO:$(Q)-$(N):CH1:STOP", 0)));
        STOP_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        DenyFoQELB->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):BI:$(Q)-$(N):CH1:DENYFO", 0)));
        DenyFoQELB->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):AO:$(Q)-$(N):CH1:SET:INC:MM", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        DenyRvQELB->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):BI:$(Q)-$(N):CH1:DENYRV", 0)));
        DenyRvQELB->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        GO_PB->setOnText(QApplication::translate("motorForm", "Yes", 0));
        GO_PB->setOffText(QApplication::translate("motorForm", "Not", 0));
        GO_PB->setOnLabel(QApplication::translate("motorForm", "Go", 0));
        GO_PB->setOffLabel(QApplication::translate("motorForm", "Go", 0));
        GO_PB->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):BO:$(Q)-$(N):CH1:GO:POS", 0)));
        GO_PB->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("motorForm", "$(P):MBBI:$(Q)-$(N):CH1:MOTOR:STATE", 0)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("motorForm", "P=CHA,Q=2531-1,N=2", 0)));
    } // retranslateUi

};

namespace Ui {
    class motorForm: public Ui_motorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORXY_H
