/********************************************************************************
** Form generated from reading UI file 'motordialog.ui'
**
** Created: Fri Apr 19 20:40:35 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORDIALOG_H
#define UI_MOTORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include "QCaLabelPlugin.h"
#include "QCaLineEditPlugin.h"
#include "QCaPushButtonPlugin.h"
#include "QCaShapePlugin.h"
#include "togglebutton.h"

QT_BEGIN_NAMESPACE

class Ui_MotorDialog
{
public:
    QCaLabelPlugin *QCaLabelName;
    QCaLabelPlugin *QCaLabelDesc;
    QPushButton *PushButtonExit;
    QGroupBox *groupBox;
    QCaPushButtonPlugin *QCaPushButtonRight;
    QLabel *LabelJump;
    QCaLineEditPlugin *QCaLineEditJump;
    QCaPushButtonPlugin *QCaPushButtonStop;
    QCaPushButtonPlugin *QCaPushButtonLeft;
    QCaLineEditPlugin *QCaLineEditlReq_2;
    QCaLineEditPlugin *QCaLineEditlReq_3;
    QLabel *LabelReq_2;
    QLabel *LabelReq_3;
    QCaPushButtonPlugin *qcapushbuttonplugin;
    QCaPushButtonPlugin *qcapushbuttonplugin_2;
    QCaPushButtonPlugin *qcapushbuttonplugin_3;
    QLabel *LabelPos;
    QLabel *LabelReq;
    QCaLineEditPlugin *QCaLineEditlReq;
    QCaLabelPlugin *QCaLabelPos;
    QCaShapePlugin *qcashapeplugin;
    QCaShapePlugin *qcashapeplugin_2;
    QCaShapePlugin *qcashapeplugin_4;
    QCaShapePlugin *qcashapeplugin_3;
    QCaShapePlugin *qcashapeplugin_9;
    ToggleButton *togglebutton;

    void setupUi(QDialog *MotorDialog)
    {
        if (MotorDialog->objectName().isEmpty())
            MotorDialog->setObjectName(QString::fromUtf8("MotorDialog"));
        MotorDialog->resize(227, 332);
        QCaLabelName = new QCaLabelPlugin(MotorDialog);
        QCaLabelName->setObjectName(QString::fromUtf8("QCaLabelName"));
        QCaLabelName->setGeometry(QRect(12, 16, 201, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        QCaLabelName->setFont(font);
        QCaLabelName->setAlignment(Qt::AlignCenter);
        QCaLabelDesc = new QCaLabelPlugin(MotorDialog);
        QCaLabelDesc->setObjectName(QString::fromUtf8("QCaLabelDesc"));
        QCaLabelDesc->setGeometry(QRect(8, 36, 209, 16));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        QCaLabelDesc->setFont(font1);
        QCaLabelDesc->setAlignment(Qt::AlignCenter);
        PushButtonExit = new QPushButton(MotorDialog);
        PushButtonExit->setObjectName(QString::fromUtf8("PushButtonExit"));
        PushButtonExit->setGeometry(QRect(136, 292, 83, 29));
        PushButtonExit->setFont(font1);
        PushButtonExit->setAutoDefault(false);
        groupBox = new QGroupBox(MotorDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(4, 0, 217, 285));
        QCaPushButtonRight = new QCaPushButtonPlugin(groupBox);
        QCaPushButtonRight->setObjectName(QString::fromUtf8("QCaPushButtonRight"));
        QCaPushButtonRight->setGeometry(QRect(144, 216, 28, 28));
        QCaPushButtonRight->setFont(font1);
        QCaPushButtonRight->setAutoDefault(false);
        QCaPushButtonRight->setWriteOnPress(false);
        QCaPushButtonRight->setWriteOnRelease(true);
        QCaPushButtonRight->setWriteOnClick(false);
        LabelJump = new QLabel(groupBox);
        LabelJump->setObjectName(QString::fromUtf8("LabelJump"));
        LabelJump->setGeometry(QRect(36, 188, 41, 15));
        QFont font2;
        font2.setPointSize(9);
        LabelJump->setFont(font2);
        LabelJump->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QCaLineEditJump = new QCaLineEditPlugin(groupBox);
        QCaLineEditJump->setObjectName(QString::fromUtf8("QCaLineEditJump"));
        QCaLineEditJump->setGeometry(QRect(80, 184, 80, 20));
        QCaLineEditJump->setAddUnits(false);
        QCaPushButtonStop = new QCaPushButtonPlugin(groupBox);
        QCaPushButtonStop->setObjectName(QString::fromUtf8("QCaPushButtonStop"));
        QCaPushButtonStop->setGeometry(QRect(77, 248, 62, 28));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        QCaPushButtonStop->setFont(font3);
        QCaPushButtonStop->setCheckable(false);
        QCaPushButtonStop->setAutoDefault(false);
        QCaPushButtonStop->setWriteOnPress(true);
        QCaPushButtonStop->setWriteOnRelease(false);
        QCaPushButtonStop->setWriteOnClick(false);
        QCaPushButtonLeft = new QCaPushButtonPlugin(groupBox);
        QCaPushButtonLeft->setObjectName(QString::fromUtf8("QCaPushButtonLeft"));
        QCaPushButtonLeft->setGeometry(QRect(44, 216, 28, 28));
        QCaPushButtonLeft->setFont(font1);
        QCaPushButtonLeft->setAutoDefault(false);
        QCaPushButtonLeft->setWriteOnPress(false);
        QCaPushButtonLeft->setWriteOnRelease(true);
        QCaPushButtonLeft->setWriteOnClick(false);
        QCaLineEditlReq_2 = new QCaLineEditPlugin(groupBox);
        QCaLineEditlReq_2->setObjectName(QString::fromUtf8("QCaLineEditlReq_2"));
        QCaLineEditlReq_2->setGeometry(QRect(80, 104, 80, 20));
        QCaLineEditlReq_2->setConfirmWrite(false);
        QCaLineEditlReq_2->setAddUnits(false);
        QCaLineEditlReq_3 = new QCaLineEditPlugin(groupBox);
        QCaLineEditlReq_3->setObjectName(QString::fromUtf8("QCaLineEditlReq_3"));
        QCaLineEditlReq_3->setGeometry(QRect(80, 128, 80, 20));
        QCaLineEditlReq_3->setConfirmWrite(false);
        QCaLineEditlReq_3->setAddUnits(false);
        LabelReq_2 = new QLabel(groupBox);
        LabelReq_2->setObjectName(QString::fromUtf8("LabelReq_2"));
        LabelReq_2->setGeometry(QRect(12, 106, 65, 16));
        LabelReq_3 = new QLabel(groupBox);
        LabelReq_3->setObjectName(QString::fromUtf8("LabelReq_3"));
        LabelReq_3->setGeometry(QRect(12, 130, 65, 16));
        qcapushbuttonplugin = new QCaPushButtonPlugin(groupBox);
        qcapushbuttonplugin->setObjectName(QString::fromUtf8("qcapushbuttonplugin"));
        qcapushbuttonplugin->setGeometry(QRect(168, 80, 32, 20));
        qcapushbuttonplugin->setAutoDefault(false);
        qcapushbuttonplugin_2 = new QCaPushButtonPlugin(groupBox);
        qcapushbuttonplugin_2->setObjectName(QString::fromUtf8("qcapushbuttonplugin_2"));
        qcapushbuttonplugin_2->setGeometry(QRect(168, 104, 32, 20));
        qcapushbuttonplugin_2->setAutoDefault(false);
        qcapushbuttonplugin_3 = new QCaPushButtonPlugin(groupBox);
        qcapushbuttonplugin_3->setObjectName(QString::fromUtf8("qcapushbuttonplugin_3"));
        qcapushbuttonplugin_3->setGeometry(QRect(168, 128, 32, 20));
        qcapushbuttonplugin_3->setAutoDefault(false);
        LabelPos = new QLabel(groupBox);
        LabelPos->setObjectName(QString::fromUtf8("LabelPos"));
        LabelPos->setGeometry(QRect(16, 60, 57, 15));
        LabelReq = new QLabel(groupBox);
        LabelReq->setObjectName(QString::fromUtf8("LabelReq"));
        LabelReq->setGeometry(QRect(12, 82, 65, 16));
        QCaLineEditlReq = new QCaLineEditPlugin(groupBox);
        QCaLineEditlReq->setObjectName(QString::fromUtf8("QCaLineEditlReq"));
        QCaLineEditlReq->setGeometry(QRect(80, 80, 80, 20));
        QCaLineEditlReq->setConfirmWrite(false);
        QCaLineEditlReq->setAddUnits(false);
        QCaLabelPos = new QCaLabelPlugin(groupBox);
        QCaLabelPos->setObjectName(QString::fromUtf8("QCaLabelPos"));
        QCaLabelPos->setGeometry(QRect(80, 60, 101, 16));
        qcashapeplugin = new QCaShapePlugin(groupBox);
        qcashapeplugin->setObjectName(QString::fromUtf8("qcashapeplugin"));
        qcashapeplugin->setGeometry(QRect(40, 160, 125, 8));
        qcashapeplugin->setProperty("animation1", QVariant(QCaShapePlugin::Width));
        qcashapeplugin->setProperty("scale1", QVariant(0.01));
        qcashapeplugin->setProperty("offset1", QVariant(0));
        qcashapeplugin->setProperty("point2", QVariant(QPoint(125, 8)));
        qcashapeplugin->setProperty("color1", QVariant(QColor(118, 136, 235)));
        qcashapeplugin->setDrawBorder(false);
        qcashapeplugin_2 = new QCaShapePlugin(groupBox);
        qcashapeplugin_2->setObjectName(QString::fromUtf8("qcashapeplugin_2"));
        qcashapeplugin_2->setGeometry(QRect(40, 168, 125, 8));
        qcashapeplugin_2->setProperty("scale1", QVariant(0.01));
        qcashapeplugin_2->setProperty("offset1", QVariant(0));
        qcashapeplugin_2->setProperty("point2", QVariant(QPoint(125, 8)));
        qcashapeplugin_2->setProperty("color1", QVariant(QColor(200, 111, 135)));
        qcashapeplugin_2->setProperty("color5", QVariant(QColor(255, 157, 175)));
        qcashapeplugin_2->setProperty("color6", QVariant(QColor(250, 105, 255)));
        qcashapeplugin_2->setProperty("color7", QVariant(QColor(151, 248, 232)));
        qcashapeplugin_2->setProperty("color8", QVariant(QColor(129, 255, 140)));
        qcashapeplugin_2->setProperty("color9", QVariant(QColor(229, 255, 133)));
        qcashapeplugin_2->setProperty("color10", QVariant(QColor(255, 159, 90)));
        qcashapeplugin_2->setDrawBorder(false);
        qcashapeplugin_4 = new QCaShapePlugin(groupBox);
        qcashapeplugin_4->setObjectName(QString::fromUtf8("qcashapeplugin_4"));
        qcashapeplugin_4->setGeometry(QRect(40, 159, 125, 18));
        qcashapeplugin_4->setProperty("point1", QVariant(QPoint(0, 1)));
        qcashapeplugin_4->setProperty("point2", QVariant(QPoint(125, 16)));
        qcashapeplugin_4->setProperty("color1", QVariant(QColor(152, 255, 249)));
        qcashapeplugin_4->setDrawBorder(false);
        qcashapeplugin_3 = new QCaShapePlugin(groupBox);
        qcashapeplugin_3->setObjectName(QString::fromUtf8("qcashapeplugin_3"));
        qcashapeplugin_3->setGeometry(QRect(31, 159, 10, 17));
        qcashapeplugin_3->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_3->setProperty("scale1", QVariant(-120));
        qcashapeplugin_3->setProperty("offset1", QVariant(120));
        qcashapeplugin_3->setProperty("point1", QVariant(QPoint(1, 1)));
        qcashapeplugin_3->setProperty("point2", QVariant(QPoint(8, 15)));
        qcashapeplugin_9 = new QCaShapePlugin(groupBox);
        qcashapeplugin_9->setObjectName(QString::fromUtf8("qcashapeplugin_9"));
        qcashapeplugin_9->setGeometry(QRect(165, 159, 10, 17));
        qcashapeplugin_9->setProperty("animation1", QVariant(QCaShapePlugin::ColourHue));
        qcashapeplugin_9->setProperty("scale1", QVariant(-120));
        qcashapeplugin_9->setProperty("offset1", QVariant(120));
        qcashapeplugin_9->setProperty("point1", QVariant(QPoint(1, 1)));
        qcashapeplugin_9->setProperty("point2", QVariant(QPoint(8, 15)));
        QCaPushButtonRight->raise();
        LabelJump->raise();
        QCaLineEditJump->raise();
        QCaPushButtonStop->raise();
        QCaPushButtonLeft->raise();
        QCaLineEditlReq_2->raise();
        QCaLineEditlReq_3->raise();
        LabelReq_2->raise();
        LabelReq_3->raise();
        qcapushbuttonplugin->raise();
        qcapushbuttonplugin_2->raise();
        qcapushbuttonplugin_3->raise();
        LabelPos->raise();
        LabelReq->raise();
        QCaLineEditlReq->raise();
        QCaLabelPos->raise();
        qcashapeplugin_4->raise();
        qcashapeplugin_3->raise();
        qcashapeplugin_9->raise();
        qcashapeplugin_2->raise();
        qcashapeplugin->raise();
        togglebutton = new ToggleButton(MotorDialog);
        togglebutton->setObjectName(QString::fromUtf8("togglebutton"));
        togglebutton->setGeometry(QRect(81, 216, 62, 28));
        togglebutton->setAutoDefault(false);
        togglebutton->setClickText(QString::fromUtf8("0"));
        groupBox->raise();
        QCaLabelName->raise();
        QCaLabelDesc->raise();
        PushButtonExit->raise();
        togglebutton->raise();
        QWidget::setTabOrder(QCaLineEditlReq, QCaLineEditJump);
        QWidget::setTabOrder(QCaLineEditJump, QCaPushButtonLeft);
        QWidget::setTabOrder(QCaPushButtonLeft, QCaPushButtonRight);
        QWidget::setTabOrder(QCaPushButtonRight, QCaPushButtonStop);
        QWidget::setTabOrder(QCaPushButtonStop, PushButtonExit);

        retranslateUi(MotorDialog);
        QObject::connect(PushButtonExit, SIGNAL(clicked(bool)), MotorDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(MotorDialog);
    } // setupUi

    void retranslateUi(QDialog *MotorDialog)
    {
        MotorDialog->setWindowTitle(QApplication::translate("MotorDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        QCaLabelName->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.NAME", 0, QApplication::UnicodeUTF8)));
        QCaLabelName->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        QCaLabelDesc->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.DESC", 0, QApplication::UnicodeUTF8)));
        QCaLabelDesc->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        PushButtonExit->setText(QApplication::translate("MotorDialog", "Close", 0, QApplication::UnicodeUTF8));
        PushButtonExit->setShortcut(QString());
        groupBox->setTitle(QApplication::translate("MotorDialog", "Motor", 0, QApplication::UnicodeUTF8));
        QCaPushButtonRight->setText(QApplication::translate("MotorDialog", "+", 0, QApplication::UnicodeUTF8));
        QCaPushButtonRight->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.TWF", 0, QApplication::UnicodeUTF8)));
        QCaPushButtonRight->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        QCaPushButtonRight->setPressText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QCaPushButtonRight->setReleaseText(QApplication::translate("MotorDialog", "1", 0, QApplication::UnicodeUTF8));
        QCaPushButtonRight->setClickText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        LabelJump->setText(QApplication::translate("MotorDialog", "Jump:", 0, QApplication::UnicodeUTF8));
        QCaLineEditJump->setText(QApplication::translate("MotorDialog", "1.00000", 0, QApplication::UnicodeUTF8));
        QCaLineEditJump->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.TWV", 0, QApplication::UnicodeUTF8)));
        QCaPushButtonStop->setText(QApplication::translate("MotorDialog", "Stop", 0, QApplication::UnicodeUTF8));
        QCaPushButtonStop->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.STOP", 0, QApplication::UnicodeUTF8)));
        QCaPushButtonStop->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        QCaPushButtonStop->setReleaseText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QCaPushButtonStop->setClickText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QCaPushButtonLeft->setText(QApplication::translate("MotorDialog", "-", 0, QApplication::UnicodeUTF8));
        QCaPushButtonLeft->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.TWR", 0, QApplication::UnicodeUTF8)));
        QCaPushButtonLeft->setPressText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QCaPushButtonLeft->setReleaseText(QApplication::translate("MotorDialog", "1", 0, QApplication::UnicodeUTF8));
        QCaPushButtonLeft->setClickText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QCaLineEditlReq_2->setText(QApplication::translate("MotorDialog", "15.00000", 0, QApplication::UnicodeUTF8));
        QCaLineEditlReq_2->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR:ABS2", 0, QApplication::UnicodeUTF8)));
        QCaLineEditlReq_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        QCaLineEditlReq_3->setText(QApplication::translate("MotorDialog", "20.00000", 0, QApplication::UnicodeUTF8));
        QCaLineEditlReq_3->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR:ABS3", 0, QApplication::UnicodeUTF8)));
        QCaLineEditlReq_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        LabelReq_2->setText(QApplication::translate("MotorDialog", "Request2:", 0, QApplication::UnicodeUTF8));
        LabelReq_3->setText(QApplication::translate("MotorDialog", "Request3:", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin->setText(QApplication::translate("MotorDialog", "Go", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR:ABS1:GO.PROC", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_2->setText(QApplication::translate("MotorDialog", "Go", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_2->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR:ABS2:GO.PROC", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_3->setText(QApplication::translate("MotorDialog", "Go", 0, QApplication::UnicodeUTF8));
        qcapushbuttonplugin_3->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR:ABS3:GO.PROC", 0, QApplication::UnicodeUTF8)));
        qcapushbuttonplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        LabelPos->setText(QApplication::translate("MotorDialog", "Currently:", 0, QApplication::UnicodeUTF8));
        LabelReq->setText(QApplication::translate("MotorDialog", "Request1:", 0, QApplication::UnicodeUTF8));
        QCaLineEditlReq->setText(QApplication::translate("MotorDialog", "10.00000", 0, QApplication::UnicodeUTF8));
        QCaLineEditlReq->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR:ABS1", 0, QApplication::UnicodeUTF8)));
        QCaLineEditlReq->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        QCaLabelPos->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.RBV", 0, QApplication::UnicodeUTF8)));
        QCaLabelPos->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):CALC:VAL", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_2->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):CALC:RBV", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_3->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.LLS", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_9->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.LLS", 0, QApplication::UnicodeUTF8)));
        qcashapeplugin_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1:m1:1", 0, QApplication::UnicodeUTF8)));
        togglebutton->setText(QApplication::translate("MotorDialog", "Pause", 0, QApplication::UnicodeUTF8));
        togglebutton->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):MOTR.SPMG", 0, QApplication::UnicodeUTF8)));
        togglebutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=ESA:XPS1,M=m1", 0, QApplication::UnicodeUTF8)));
        togglebutton->setOffLabel(QApplication::translate("MotorDialog", "Pause", 0, QApplication::UnicodeUTF8));
        togglebutton->setOnLabel(QApplication::translate("MotorDialog", "Resume", 0, QApplication::UnicodeUTF8));
        togglebutton->setOffText(QApplication::translate("MotorDialog", "3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MotorDialog: public Ui_MotorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORDIALOG_H
