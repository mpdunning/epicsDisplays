/********************************************************************************
** Form generated from reading UI file 'bkhdebug.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BKHDEBUG_H
#define UI_BKHDEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include "QELabel.h"
#include "QELineEdit.h"
#include "abutton.h"
#include "aplot.h"
#include "cabutton.h"
#include "caplot.h"

QT_BEGIN_NAMESPACE

class Ui_BkhDebug
{
public:
    QFrame *frame;
    QPushButton *dbgClosePB;
    QListWidget *listWidget;
    QELabel *qelabel;
    QELineEdit *qelineedit;
    QELineEdit *qelineedit_2;
    QELabel *qelabel_2;
    QELineEdit *qelineedit_3;
    QELabel *qelabel_3;
    QLabel *label;
    QLabel *label_2;
    QELabel *qelabel_4;
    QLabel *label_3;
    QGroupBox *groupBox;
    CAButton *cabutton_4;
    CAButton *cabutton_5;
    QGroupBox *groupBox_2;
    CAButton *cabutton;
    CAButton *cabutton_2;
    CAButton *cabutton_3;
    CAPlot *caplot;

    void setupUi(QDialog *BkhDebug)
    {
        if (BkhDebug->objectName().isEmpty())
            BkhDebug->setObjectName(QStringLiteral("BkhDebug"));
        BkhDebug->resize(352, 402);
        frame = new QFrame(BkhDebug);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 345, 32));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        dbgClosePB = new QPushButton(frame);
        dbgClosePB->setObjectName(QStringLiteral("dbgClosePB"));
        dbgClosePB->setGeometry(QRect(276, 4, 56, 24));
        dbgClosePB->setAutoDefault(false);
        listWidget = new QListWidget(BkhDebug);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(12, 60, 329, 65));
        listWidget->setFrameShape(QFrame::Box);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        qelabel = new QELabel(BkhDebug);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(24, 132, 100, 20));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        qelabel->setFont(font);
        qelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel->setDisplayAlarmState(false);
        qelineedit = new QELineEdit(BkhDebug);
        qelineedit->setObjectName(QStringLiteral("qelineedit"));
        qelineedit->setGeometry(QRect(124, 132, 60, 20));
        qelineedit->setDisplayAlarmState(false);
        qelineedit_2 = new QELineEdit(BkhDebug);
        qelineedit_2->setObjectName(QStringLiteral("qelineedit_2"));
        qelineedit_2->setGeometry(QRect(124, 156, 60, 20));
        qelineedit_2->setDisplayAlarmState(false);
        qelabel_2 = new QELabel(BkhDebug);
        qelabel_2->setObjectName(QStringLiteral("qelabel_2"));
        qelabel_2->setGeometry(QRect(24, 156, 100, 20));
        qelabel_2->setFont(font);
        qelabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_2->setDisplayAlarmState(false);
        qelineedit_3 = new QELineEdit(BkhDebug);
        qelineedit_3->setObjectName(QStringLiteral("qelineedit_3"));
        qelineedit_3->setGeometry(QRect(124, 180, 60, 20));
        qelineedit_3->setDisplayAlarmState(false);
        qelabel_3 = new QELabel(BkhDebug);
        qelabel_3->setObjectName(QStringLiteral("qelabel_3"));
        qelabel_3->setGeometry(QRect(24, 180, 100, 20));
        qelabel_3->setFont(font);
        qelabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_3->setDisplayAlarmState(false);
        label = new QLabel(BkhDebug);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(188, 136, 21, 16));
        label_2 = new QLabel(BkhDebug);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(188, 184, 21, 16));
        qelabel_4 = new QELabel(BkhDebug);
        qelabel_4->setObjectName(QStringLiteral("qelabel_4"));
        qelabel_4->setGeometry(QRect(288, 156, 37, 20));
        qelabel_4->setFont(font);
        qelabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_4->setDisplayAlarmState(false);
        qelabel_4->setProperty("format", QVariant(QELabel::UnsignedInteger));
        qelabel_4->setRadix(16u);
        label_3 = new QLabel(BkhDebug);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(276, 156, 16, 20));
        groupBox = new QGroupBox(BkhDebug);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(4, 40, 345, 169));
        cabutton_4 = new CAButton(groupBox);
        cabutton_4->setObjectName(QStringLiteral("cabutton_4"));
        cabutton_4->setGeometry(QRect(224, 116, 40, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Monospace"));
        font1.setBold(true);
        font1.setWeight(75);
        cabutton_4->setFont(font1);
        cabutton_4->setCheckable(false);
        cabutton_4->setAutoDefault(false);
        cabutton_4->setOnColor(QColor(160, 220, 180));
        cabutton_4->setOffColor(QColor(230, 180, 190));
        cabutton_4->setUseTextColor(true);
        cabutton_4->setProperty("writeOnPress", QVariant(true));
        cabutton_4->setProperty("writeOnRelease", QVariant(true));
        cabutton_4->setProperty("writeOnClick", QVariant(false));
        cabutton_4->setSubscribe(true);
        cabutton_4->setProperty("AlarmEnable", QVariant(false));
        cabutton_4->setLiteralLabel(true);
        cabutton_5 = new CAButton(groupBox);
        cabutton_5->setObjectName(QStringLiteral("cabutton_5"));
        cabutton_5->setGeometry(QRect(224, 140, 40, 20));
        cabutton_5->setFont(font1);
        cabutton_5->setCheckable(false);
        cabutton_5->setAutoDefault(false);
        cabutton_5->setOnColor(QColor(160, 220, 180));
        cabutton_5->setOffColor(QColor(230, 180, 190));
        cabutton_5->setUseTextColor(true);
        cabutton_5->setProperty("writeOnPress", QVariant(true));
        cabutton_5->setProperty("writeOnRelease", QVariant(false));
        cabutton_5->setProperty("writeOnClick", QVariant(false));
        cabutton_5->setSubscribe(true);
        cabutton_5->setProperty("AlarmEnable", QVariant(false));
        cabutton_5->setLiteralLabel(true);
        groupBox_2 = new QGroupBox(BkhDebug);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(4, 212, 345, 181));
        cabutton = new CAButton(groupBox_2);
        cabutton->setObjectName(QStringLiteral("cabutton"));
        cabutton->setGeometry(QRect(24, 34, 80, 24));
        cabutton->setFont(font1);
        cabutton->setCheckable(true);
        cabutton->setAutoDefault(false);
        cabutton->setUseTextColor(true);
        cabutton->setProperty("writeOnPress", QVariant(false));
        cabutton->setProperty("writeOnClick", QVariant(true));
        cabutton->setSubscribe(true);
        cabutton->setProperty("AlarmEnable", QVariant(false));
        cabutton->setLiteralLabel(true);
        cabutton_2 = new CAButton(groupBox_2);
        cabutton_2->setObjectName(QStringLiteral("cabutton_2"));
        cabutton_2->setGeometry(QRect(24, 68, 80, 24));
        cabutton_2->setFont(font1);
        cabutton_2->setCheckable(false);
        cabutton_2->setAutoDefault(false);
        cabutton_2->setOnColor(QColor(220, 200, 180));
        cabutton_2->setOffColor(QColor(160, 180, 160));
        cabutton_2->setUseTextColor(true);
        cabutton_2->setProperty("writeOnPress", QVariant(true));
        cabutton_2->setProperty("writeOnRelease", QVariant(false));
        cabutton_2->setProperty("writeOnClick", QVariant(false));
        cabutton_2->setSubscribe(true);
        cabutton_2->setProperty("AlarmEnable", QVariant(false));
        cabutton_2->setLiteralLabel(true);
        cabutton_3 = new CAButton(groupBox_2);
        cabutton_3->setObjectName(QStringLiteral("cabutton_3"));
        cabutton_3->setGeometry(QRect(24, 100, 80, 24));
        cabutton_3->setFont(font1);
        cabutton_3->setCheckable(false);
        cabutton_3->setAutoDefault(false);
        cabutton_3->setOnColor(QColor(255, 160, 180));
        cabutton_3->setOffColor(QColor(220, 140, 160));
        cabutton_3->setUseTextColor(true);
        cabutton_3->setProperty("writeOnPress", QVariant(true));
        cabutton_3->setProperty("writeOnClick", QVariant(false));
        cabutton_3->setSubscribe(true);
        cabutton_3->setProperty("AlarmEnable", QVariant(false));
        cabutton_3->setLiteralLabel(true);
        caplot = new CAPlot(BkhDebug);
        caplot->setObjectName(QStringLiteral("caplot"));
        caplot->setGeometry(QRect(136, 236, 200, 145));
        caplot->setTrace2On(false);
        caplot->setTrace3On(false);
        caplot->setTrace4On(false);
        caplot->setTraceColor1(QColor(255, 240, 170));
        caplot->setAutoScaleX(false);
        caplot->setProperty("gridEnableMajorX", QVariant(true));
        caplot->setXMax(50);
        caplot->setNTicksMajorX(5);
        caplot->setNTicksMinorX(1);
        caplot->setProperty("gridEnableMajorY", QVariant(true));
        caplot->setNTicksMajorY(7);
        caplot->setNTicksMinorY(0);
        caplot->setProperty("backgroundColor", QVariant(QColor(60, 60, 100)));
        caplot->setDisplayAlarmState(false);
        groupBox_2->raise();
        groupBox->raise();
        frame->raise();
        listWidget->raise();
        qelabel->raise();
        qelineedit->raise();
        qelineedit_2->raise();
        qelabel_2->raise();
        qelineedit_3->raise();
        qelabel_3->raise();
        label->raise();
        label_2->raise();
        qelabel_4->raise();
        label_3->raise();
        caplot->raise();

        retranslateUi(BkhDebug);

        QMetaObject::connectSlotsByName(BkhDebug);
    } // setupUi

    void retranslateUi(QDialog *BkhDebug)
    {
        BkhDebug->setWindowTitle(QApplication::translate("BkhDebug", "Dialog", 0));
        dbgClosePB->setText(QApplication::translate("BkhDebug", "Close", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("BkhDebug", "get - reads from a modbus address with", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("BkhDebug", "        a specified function.", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("BkhDebug", "put - write a value to a modbus address", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("BkhDebug", "        with a specified function.", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        qelabel->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):LO:DEBUG-$(N):MADDR.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        qelineedit->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):LO:DEBUG-$(N):MADDR", 0)));
        qelineedit->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        qelineedit_2->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):LO:DEBUG-$(N):MFUNC", 0)));
        qelineedit_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        qelabel_2->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):LO:DEBUG-$(N):MFUNC.DESC", 0)));
        qelabel_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        qelineedit_3->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):LO:DEBUG-$(N):MVAL", 0)));
        qelineedit_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        qelabel_3->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):LO:DEBUG-$(N):MVAL.DESC", 0)));
        qelabel_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        label->setText(QApplication::translate("BkhDebug", "hex", 0));
        label_2->setText(QApplication::translate("BkhDebug", "hex", 0));
        qelabel_4->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):LI:DEBUG-$(N):MVAL", 0)));
        qelabel_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        label_3->setText(QApplication::translate("BkhDebug", "0x", 0));
        groupBox->setTitle(QApplication::translate("BkhDebug", "Debug Read or Write Register", 0));
        cabutton_4->setOnLabel(QApplication::translate("BkhDebug", "Get", 0));
        cabutton_4->setOffLabel(QApplication::translate("BkhDebug", "Get", 0));
        cabutton_4->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):BO:DEBUG-$(N):GET:MEM", 0)));
        cabutton_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        cabutton_5->setOnLabel(QApplication::translate("BkhDebug", "Put", 0));
        cabutton_5->setOffLabel(QApplication::translate("BkhDebug", "Put", 0));
        cabutton_5->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):BO:DEBUG-$(N):PUT:MEM", 0)));
        cabutton_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        groupBox_2->setTitle(QApplication::translate("BkhDebug", "Time Histogram of each IO in ms", 0));
        cabutton->setOnLabel(QApplication::translate("BkhDebug", "Enable", 0));
        cabutton->setOffLabel(QApplication::translate("BkhDebug", "Enable", 0));
        cabutton->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):BO:DEBUG-$(N):EN:HIST", 0)));
        cabutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        cabutton_2->setOnLabel(QApplication::translate("BkhDebug", "Get Hist", 0));
        cabutton_2->setOffLabel(QApplication::translate("BkhDebug", "Get Hist", 0));
        cabutton_2->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):BO:DEBUG-$(N):GET:HIST", 0)));
        cabutton_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        cabutton_3->setOnLabel(QApplication::translate("BkhDebug", "Clr Hist", 0));
        cabutton_3->setOffLabel(QApplication::translate("BkhDebug", "Clr Hist", 0));
        cabutton_3->setProperty("variable", QVariant(QApplication::translate("BkhDebug", "$(P):BO:DEBUG-$(N):CLR:HIST", 0)));
        cabutton_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
        caplot->setProperty("variable1", QVariant(QApplication::translate("BkhDebug", "$(P):WF:DEBUG-$(N):TIME:HIST", 0)));
        caplot->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDebug", "P=CHA,N=2", 0)));
    } // retranslateUi

};

namespace Ui {
    class BkhDebug: public Ui_BkhDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BKHDEBUG_H
