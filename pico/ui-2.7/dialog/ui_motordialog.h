/********************************************************************************
** Form generated from reading UI file 'motordialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
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
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEPushButton.h"
#include "QEShape.h"
#include "togglebutton.h"

QT_BEGIN_NAMESPACE

class Ui_MotorDialog
{
public:
    QELabel *QELabelName;
    QPushButton *PushButtonExit;
    QEPushButton *QEPushButtonStop;
    QLabel *LabelJump;
    ToggleButton *togglebutton;
    QEPushButton *QEPushButtonRight;
    QELineEdit *QELineEditJump;
    QEPushButton *QEPushButtonLeft;
    QLabel *LabelPos;
    QEShape *qeshape_9;
    QEShape *qeshape_2;
    QELineEdit *QELineEditlReq;
    QEShape *qeshape;
    QELabel *QELabelPos;
    QLabel *LabelReq;
    QEShape *qeshape_3;
    QEShape *qeshape_4;
    QPushButton *pbDetails;
    QGroupBox *motorGBox;

    void setupUi(QDialog *MotorDialog)
    {
        if (MotorDialog->objectName().isEmpty())
            MotorDialog->setObjectName(QString::fromUtf8("MotorDialog"));
        MotorDialog->resize(180, 194);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MotorDialog->sizePolicy().hasHeightForWidth());
        MotorDialog->setSizePolicy(sizePolicy);
        MotorDialog->setMinimumSize(QSize(180, 194));
        MotorDialog->setMaximumSize(QSize(180, 212));
        QELabelName = new QELabel(MotorDialog);
        QELabelName->setObjectName(QString::fromUtf8("QELabelName"));
        QELabelName->setGeometry(QRect(4, 8, 100, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        QELabelName->setFont(font);
        QELabelName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PushButtonExit = new QPushButton(MotorDialog);
        PushButtonExit->setObjectName(QString::fromUtf8("PushButtonExit"));
        PushButtonExit->setGeometry(QRect(116, 4, 60, 24));
        PushButtonExit->setFont(font);
        PushButtonExit->setAutoDefault(false);
        QEPushButtonStop = new QEPushButton(MotorDialog);
        QEPushButtonStop->setObjectName(QString::fromUtf8("QEPushButtonStop"));
        QEPushButtonStop->setGeometry(QRect(36, 160, 62, 28));
        QEPushButtonStop->setFont(font);
        QEPushButtonStop->setCheckable(false);
        QEPushButtonStop->setAutoDefault(false);
        QEPushButtonStop->setWriteOnPress(true);
        QEPushButtonStop->setWriteOnRelease(false);
        QEPushButtonStop->setWriteOnClick(false);
        LabelJump = new QLabel(MotorDialog);
        LabelJump->setObjectName(QString::fromUtf8("LabelJump"));
        LabelJump->setGeometry(QRect(20, 108, 41, 15));
        QFont font1;
        font1.setPointSize(9);
        LabelJump->setFont(font1);
        LabelJump->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        togglebutton = new ToggleButton(MotorDialog);
        togglebutton->setObjectName(QString::fromUtf8("togglebutton"));
        togglebutton->setGeometry(QRect(36, 128, 62, 28));
        togglebutton->setFont(font);
        togglebutton->setAutoDefault(false);
        togglebutton->setClickText(QString::fromUtf8("0"));
        QEPushButtonRight = new QEPushButton(MotorDialog);
        QEPushButtonRight->setObjectName(QString::fromUtf8("QEPushButtonRight"));
        QEPushButtonRight->setGeometry(QRect(103, 128, 28, 28));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        QEPushButtonRight->setFont(font2);
        QEPushButtonRight->setAutoDefault(false);
        QEPushButtonRight->setWriteOnPress(false);
        QEPushButtonRight->setWriteOnRelease(true);
        QEPushButtonRight->setWriteOnClick(false);
        QELineEditJump = new QELineEdit(MotorDialog);
        QELineEditJump->setObjectName(QString::fromUtf8("QELineEditJump"));
        QELineEditJump->setGeometry(QRect(64, 104, 80, 20));
        QELineEditJump->setAddUnits(false);
        QEPushButtonLeft = new QEPushButton(MotorDialog);
        QEPushButtonLeft->setObjectName(QString::fromUtf8("QEPushButtonLeft"));
        QEPushButtonLeft->setGeometry(QRect(3, 128, 28, 28));
        QEPushButtonLeft->setFont(font2);
        QEPushButtonLeft->setAutoDefault(false);
        QEPushButtonLeft->setWriteOnPress(false);
        QEPushButtonLeft->setWriteOnRelease(true);
        QEPushButtonLeft->setWriteOnClick(false);
        LabelPos = new QLabel(MotorDialog);
        LabelPos->setObjectName(QString::fromUtf8("LabelPos"));
        LabelPos->setGeometry(QRect(4, 36, 57, 15));
        qeshape_9 = new QEShape(MotorDialog);
        qeshape_9->setObjectName(QString::fromUtf8("qeshape_9"));
        qeshape_9->setGeometry(QRect(148, 80, 10, 17));
        qeshape_9->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_9->setProperty("scale1", QVariant(-120));
        qeshape_9->setProperty("offset1", QVariant(120));
        qeshape_9->setProperty("point1", QVariant(QPoint(1, 1)));
        qeshape_9->setProperty("point2", QVariant(QPoint(8, 15)));
        qeshape_2 = new QEShape(MotorDialog);
        qeshape_2->setObjectName(QString::fromUtf8("qeshape_2"));
        qeshape_2->setGeometry(QRect(24, 90, 124, 4));
        qeshape_2->setProperty("scale1", QVariant(0.01));
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
        QELineEditlReq = new QELineEdit(MotorDialog);
        QELineEditlReq->setObjectName(QString::fromUtf8("QELineEditlReq"));
        QELineEditlReq->setGeometry(QRect(68, 56, 80, 20));
        QELineEditlReq->setConfirmWrite(false);
        QELineEditlReq->setAddUnits(false);
        qeshape = new QEShape(MotorDialog);
        qeshape->setObjectName(QString::fromUtf8("qeshape"));
        qeshape->setGeometry(QRect(24, 84, 124, 4));
        qeshape->setProperty("animation1", QVariant(QEShape::Width));
        qeshape->setProperty("scale1", QVariant(0.01));
        qeshape->setProperty("offset1", QVariant(0));
        qeshape->setProperty("point2", QVariant(QPoint(124, 4)));
        qeshape->setProperty("color1", QVariant(QColor(118, 136, 235)));
        qeshape->setDrawBorder(false);
        QELabelPos = new QELabel(MotorDialog);
        QELabelPos->setObjectName(QString::fromUtf8("QELabelPos"));
        QELabelPos->setGeometry(QRect(68, 36, 101, 16));
        LabelReq = new QLabel(MotorDialog);
        LabelReq->setObjectName(QString::fromUtf8("LabelReq"));
        LabelReq->setGeometry(QRect(4, 58, 65, 16));
        qeshape_3 = new QEShape(MotorDialog);
        qeshape_3->setObjectName(QString::fromUtf8("qeshape_3"));
        qeshape_3->setGeometry(QRect(14, 80, 10, 17));
        qeshape_3->setProperty("animation1", QVariant(QEShape::ColourHue));
        qeshape_3->setProperty("scale1", QVariant(-120));
        qeshape_3->setProperty("offset1", QVariant(120));
        qeshape_3->setProperty("point1", QVariant(QPoint(1, 1)));
        qeshape_3->setProperty("point2", QVariant(QPoint(8, 15)));
        qeshape_4 = new QEShape(MotorDialog);
        qeshape_4->setObjectName(QString::fromUtf8("qeshape_4"));
        qeshape_4->setGeometry(QRect(24, 80, 124, 17));
        qeshape_4->setProperty("point1", QVariant(QPoint(0, 1)));
        qeshape_4->setProperty("point2", QVariant(QPoint(125, 16)));
        qeshape_4->setProperty("color1", QVariant(QColor(152, 255, 249)));
        qeshape_4->setDrawBorder(false);
        pbDetails = new QPushButton(MotorDialog);
        pbDetails->setObjectName(QString::fromUtf8("pbDetails"));
        pbDetails->setGeometry(QRect(104, 164, 64, 26));
        pbDetails->setFont(font);
        pbDetails->setAutoDefault(false);
        motorGBox = new QGroupBox(MotorDialog);
        motorGBox->setObjectName(QString::fromUtf8("motorGBox"));
        motorGBox->setGeometry(QRect(0, 0, 181, 33));
        qeshape_4->raise();
        motorGBox->raise();
        QELabelName->raise();
        PushButtonExit->raise();
        QEPushButtonStop->raise();
        LabelJump->raise();
        togglebutton->raise();
        QEPushButtonRight->raise();
        QELineEditJump->raise();
        QEPushButtonLeft->raise();
        LabelPos->raise();
        qeshape_9->raise();
        qeshape_2->raise();
        QELineEditlReq->raise();
        qeshape->raise();
        QELabelPos->raise();
        LabelReq->raise();
        qeshape_3->raise();
        pbDetails->raise();
        QWidget::setTabOrder(QELineEditlReq, QELineEditJump);
        QWidget::setTabOrder(QELineEditJump, QEPushButtonLeft);
        QWidget::setTabOrder(QEPushButtonLeft, QEPushButtonRight);
        QWidget::setTabOrder(QEPushButtonRight, QEPushButtonStop);
        QWidget::setTabOrder(QEPushButtonStop, PushButtonExit);

        retranslateUi(MotorDialog);
        QObject::connect(PushButtonExit, SIGNAL(clicked(bool)), MotorDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(MotorDialog);
    } // setupUi

    void retranslateUi(QDialog *MotorDialog)
    {
        MotorDialog->setWindowTitle(QApplication::translate("MotorDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        QELabelName->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).NAME", 0, QApplication::UnicodeUTF8)));
        QELabelName->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        PushButtonExit->setText(QApplication::translate("MotorDialog", "Close", 0, QApplication::UnicodeUTF8));
        PushButtonExit->setShortcut(QString());
        QEPushButtonStop->setText(QApplication::translate("MotorDialog", "Stop", 0, QApplication::UnicodeUTF8));
        QEPushButtonStop->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).STOP", 0, QApplication::UnicodeUTF8)));
        QEPushButtonStop->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        QEPushButtonStop->setReleaseText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QEPushButtonStop->setClickText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        LabelJump->setText(QApplication::translate("MotorDialog", "tweek:", 0, QApplication::UnicodeUTF8));
        togglebutton->setText(QApplication::translate("MotorDialog", "Pause", 0, QApplication::UnicodeUTF8));
        togglebutton->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).SPMG", 0, QApplication::UnicodeUTF8)));
        togglebutton->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        togglebutton->setOffLabel(QApplication::translate("MotorDialog", "Pause", 0, QApplication::UnicodeUTF8));
        togglebutton->setOnLabel(QApplication::translate("MotorDialog", "Resume", 0, QApplication::UnicodeUTF8));
        togglebutton->setOffText(QApplication::translate("MotorDialog", "3", 0, QApplication::UnicodeUTF8));
        QEPushButtonRight->setText(QApplication::translate("MotorDialog", "+", 0, QApplication::UnicodeUTF8));
        QEPushButtonRight->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).TWF", 0, QApplication::UnicodeUTF8)));
        QEPushButtonRight->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        QEPushButtonRight->setPressText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QEPushButtonRight->setReleaseText(QApplication::translate("MotorDialog", "1", 0, QApplication::UnicodeUTF8));
        QEPushButtonRight->setClickText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QELineEditJump->setText(QApplication::translate("MotorDialog", "1.0", 0, QApplication::UnicodeUTF8));
        QELineEditJump->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).TWV", 0, QApplication::UnicodeUTF8)));
        QELineEditJump->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        QEPushButtonLeft->setText(QApplication::translate("MotorDialog", "-", 0, QApplication::UnicodeUTF8));
        QEPushButtonLeft->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).TWR", 0, QApplication::UnicodeUTF8)));
        QEPushButtonLeft->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        QEPushButtonLeft->setPressText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        QEPushButtonLeft->setReleaseText(QApplication::translate("MotorDialog", "1", 0, QApplication::UnicodeUTF8));
        QEPushButtonLeft->setClickText(QApplication::translate("MotorDialog", "0", 0, QApplication::UnicodeUTF8));
        LabelPos->setText(QApplication::translate("MotorDialog", "Currently:", 0, QApplication::UnicodeUTF8));
        qeshape_9->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).LLS", 0, QApplication::UnicodeUTF8)));
        qeshape_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        qeshape_2->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):CALC:RBV", 0, QApplication::UnicodeUTF8)));
        qeshape_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        QELineEditlReq->setText(QApplication::translate("MotorDialog", "0.0", 0, QApplication::UnicodeUTF8));
        QELineEditlReq->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M)", 0, QApplication::UnicodeUTF8)));
        QELineEditlReq->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        qeshape->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M):CALC:VAL", 0, QApplication::UnicodeUTF8)));
        qeshape->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        QELabelPos->setProperty("variable", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).RBV", 0, QApplication::UnicodeUTF8)));
        QELabelPos->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        LabelReq->setText(QApplication::translate("MotorDialog", "Request1:", 0, QApplication::UnicodeUTF8));
        qeshape_3->setProperty("variable1", QVariant(QApplication::translate("MotorDialog", "$(P):$(M).LLS", 0, QApplication::UnicodeUTF8)));
        qeshape_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorDialog", "P=PICO,M=m1", 0, QApplication::UnicodeUTF8)));
        pbDetails->setText(QApplication::translate("MotorDialog", "Details", 0, QApplication::UnicodeUTF8));
        motorGBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MotorDialog: public Ui_MotorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORDIALOG_H
