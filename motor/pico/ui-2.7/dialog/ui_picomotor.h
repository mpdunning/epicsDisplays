/********************************************************************************
** Form generated from reading UI file 'picomotor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICOMOTOR_H
#define UI_PICOMOTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include "QELabel.h"
#include "QEPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_PicoMotor
{
public:
    QEPushButton *QCA10Left;
    QEPushButton *QCA100Left;
    QEPushButton *QCA1000Left;
    QEPushButton *QCA10000Left;
    QEPushButton *QCA10Right;
    QEPushButton *QCA100Right;
    QEPushButton *QCA1000Right;
    QEPushButton *QCA10000Right;
    QEPushButton *QCA10Up;
    QEPushButton *QCA100Up;
    QEPushButton *QCA1000Up;
    QEPushButton *QCA10000Up;
    QEPushButton *QCA10Down;
    QEPushButton *QCA100Down;
    QEPushButton *QCA1000Down;
    QEPushButton *QCA10000Down;
    QELabel *qelabelname_2;
    QELabel *qelabelname;
    QELabel *qelabelPos_3;
    QELabel *qelabelPos_4;
    QELabel *qelabelPos_2;
    QELabel *qelabelPos;
    QPushButton *Motor1;
    QPushButton *Detail1;
    QPushButton *Motor3;
    QPushButton *Detail3;
    QPushButton *Debug1;
    QPushButton *Debug3;
    QELabel *qelabel;

    void setupUi(QDialog *PicoMotor)
    {
        if (PicoMotor->objectName().isEmpty())
            PicoMotor->setObjectName(QString::fromUtf8("PicoMotor"));
        PicoMotor->resize(320, 252);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PicoMotor->sizePolicy().hasHeightForWidth());
        PicoMotor->setSizePolicy(sizePolicy);
        PicoMotor->setMinimumSize(QSize(320, 252));
        PicoMotor->setMaximumSize(QSize(320, 252));
        QCA10Left = new QEPushButton(PicoMotor);
        QCA10Left->setObjectName(QString::fromUtf8("QCA10Left"));
        QCA10Left->setGeometry(QRect(60, 80, 36, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        QCA10Left->setFont(font);
        QCA10Left->setAutoDefault(false);
        QCA10Left->setWriteOnPress(false);
        QCA10Left->setWriteOnRelease(true);
        QCA10Left->setWriteOnClick(false);
        QCA100Left = new QEPushButton(PicoMotor);
        QCA100Left->setObjectName(QString::fromUtf8("QCA100Left"));
        QCA100Left->setGeometry(QRect(36, 108, 44, 20));
        QCA100Left->setFont(font);
        QCA100Left->setAutoDefault(false);
        QCA100Left->setWriteOnPress(false);
        QCA100Left->setWriteOnRelease(true);
        QCA100Left->setWriteOnClick(false);
        QCA1000Left = new QEPushButton(PicoMotor);
        QCA1000Left->setObjectName(QString::fromUtf8("QCA1000Left"));
        QCA1000Left->setGeometry(QRect(84, 108, 52, 20));
        QCA1000Left->setFont(font);
        QCA1000Left->setAutoDefault(false);
        QCA1000Left->setWriteOnPress(false);
        QCA1000Left->setWriteOnRelease(true);
        QCA1000Left->setWriteOnClick(false);
        QCA10000Left = new QEPushButton(PicoMotor);
        QCA10000Left->setObjectName(QString::fromUtf8("QCA10000Left"));
        QCA10000Left->setGeometry(QRect(56, 132, 60, 20));
        QCA10000Left->setFont(font);
        QCA10000Left->setAutoDefault(false);
        QCA10000Left->setWriteOnPress(false);
        QCA10000Left->setWriteOnRelease(true);
        QCA10000Left->setWriteOnClick(false);
        QCA10Right = new QEPushButton(PicoMotor);
        QCA10Right->setObjectName(QString::fromUtf8("QCA10Right"));
        QCA10Right->setGeometry(QRect(230, 80, 36, 20));
        QCA10Right->setFont(font);
        QCA10Right->setAutoDefault(false);
        QCA10Right->setWriteOnPress(false);
        QCA10Right->setWriteOnRelease(true);
        QCA10Right->setWriteOnClick(false);
        QCA100Right = new QEPushButton(PicoMotor);
        QCA100Right->setObjectName(QString::fromUtf8("QCA100Right"));
        QCA100Right->setGeometry(QRect(200, 108, 44, 20));
        QCA100Right->setFont(font);
        QCA100Right->setAutoDefault(false);
        QCA100Right->setWriteOnPress(false);
        QCA100Right->setWriteOnRelease(true);
        QCA100Right->setWriteOnClick(false);
        QCA1000Right = new QEPushButton(PicoMotor);
        QCA1000Right->setObjectName(QString::fromUtf8("QCA1000Right"));
        QCA1000Right->setGeometry(QRect(248, 108, 52, 20));
        QCA1000Right->setFont(font);
        QCA1000Right->setAutoDefault(false);
        QCA1000Right->setWriteOnPress(false);
        QCA1000Right->setWriteOnRelease(true);
        QCA1000Right->setWriteOnClick(false);
        QCA10000Right = new QEPushButton(PicoMotor);
        QCA10000Right->setObjectName(QString::fromUtf8("QCA10000Right"));
        QCA10000Right->setGeometry(QRect(220, 132, 61, 20));
        QCA10000Right->setFont(font);
        QCA10000Right->setAutoDefault(false);
        QCA10000Right->setWriteOnPress(false);
        QCA10000Right->setWriteOnRelease(true);
        QCA10000Right->setWriteOnClick(false);
        QCA10Up = new QEPushButton(PicoMotor);
        QCA10Up->setObjectName(QString::fromUtf8("QCA10Up"));
        QCA10Up->setGeometry(QRect(150, 20, 36, 20));
        QCA10Up->setFont(font);
        QCA10Up->setAutoDefault(false);
        QCA10Up->setWriteOnPress(false);
        QCA10Up->setWriteOnRelease(true);
        QCA10Up->setWriteOnClick(false);
        QCA100Up = new QEPushButton(PicoMotor);
        QCA100Up->setObjectName(QString::fromUtf8("QCA100Up"));
        QCA100Up->setGeometry(QRect(120, 48, 44, 20));
        QCA100Up->setFont(font);
        QCA100Up->setAutoDefault(false);
        QCA100Up->setWriteOnPress(false);
        QCA100Up->setWriteOnRelease(true);
        QCA100Up->setWriteOnClick(false);
        QCA1000Up = new QEPushButton(PicoMotor);
        QCA1000Up->setObjectName(QString::fromUtf8("QCA1000Up"));
        QCA1000Up->setGeometry(QRect(168, 48, 52, 20));
        QCA1000Up->setFont(font);
        QCA1000Up->setAutoDefault(false);
        QCA1000Up->setWriteOnPress(false);
        QCA1000Up->setWriteOnRelease(true);
        QCA1000Up->setWriteOnClick(false);
        QCA10000Up = new QEPushButton(PicoMotor);
        QCA10000Up->setObjectName(QString::fromUtf8("QCA10000Up"));
        QCA10000Up->setGeometry(QRect(140, 72, 60, 20));
        QCA10000Up->setFont(font);
        QCA10000Up->setAutoDefault(false);
        QCA10000Up->setWriteOnPress(false);
        QCA10000Up->setWriteOnRelease(true);
        QCA10000Up->setWriteOnClick(false);
        QCA10Down = new QEPushButton(PicoMotor);
        QCA10Down->setObjectName(QString::fromUtf8("QCA10Down"));
        QCA10Down->setGeometry(QRect(150, 140, 36, 20));
        QCA10Down->setFont(font);
        QCA10Down->setAutoDefault(false);
        QCA10Down->setWriteOnPress(false);
        QCA10Down->setWriteOnRelease(true);
        QCA10Down->setWriteOnClick(false);
        QCA100Down = new QEPushButton(PicoMotor);
        QCA100Down->setObjectName(QString::fromUtf8("QCA100Down"));
        QCA100Down->setGeometry(QRect(120, 164, 44, 20));
        QCA100Down->setFont(font);
        QCA100Down->setAutoDefault(false);
        QCA100Down->setWriteOnPress(false);
        QCA100Down->setWriteOnRelease(true);
        QCA100Down->setWriteOnClick(false);
        QCA1000Down = new QEPushButton(PicoMotor);
        QCA1000Down->setObjectName(QString::fromUtf8("QCA1000Down"));
        QCA1000Down->setGeometry(QRect(168, 164, 52, 20));
        QCA1000Down->setFont(font);
        QCA1000Down->setAutoDefault(false);
        QCA1000Down->setWriteOnPress(false);
        QCA1000Down->setWriteOnRelease(true);
        QCA1000Down->setWriteOnClick(false);
        QCA10000Down = new QEPushButton(PicoMotor);
        QCA10000Down->setObjectName(QString::fromUtf8("QCA10000Down"));
        QCA10000Down->setGeometry(QRect(140, 188, 60, 20));
        QCA10000Down->setFont(font);
        QCA10000Down->setAutoDefault(false);
        QCA10000Down->setWriteOnPress(false);
        QCA10000Down->setWriteOnRelease(true);
        QCA10000Down->setWriteOnClick(false);
        qelabelname_2 = new QELabel(PicoMotor);
        qelabelname_2->setObjectName(QString::fromUtf8("qelabelname_2"));
        qelabelname_2->setGeometry(QRect(90, 0, 131, 20));
        qelabelname_2->setFont(font);
        qelabelname_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabelname = new QELabel(PicoMotor);
        qelabelname->setObjectName(QString::fromUtf8("qelabelname"));
        qelabelname->setGeometry(QRect(16, 64, 100, 16));
        qelabelname->setFont(font);
        qelabelname->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabelPos_3 = new QELabel(PicoMotor);
        qelabelPos_3->setObjectName(QString::fromUtf8("qelabelPos_3"));
        qelabelPos_3->setGeometry(QRect(224, 4, 69, 16));
        qelabelPos_3->setAddUnits(false);
        qelabelPos_4 = new QELabel(PicoMotor);
        qelabelPos_4->setObjectName(QString::fromUtf8("qelabelPos_4"));
        qelabelPos_4->setGeometry(QRect(224, 20, 85, 16));
        qelabelPos_2 = new QELabel(PicoMotor);
        qelabelPos_2->setObjectName(QString::fromUtf8("qelabelPos_2"));
        qelabelPos_2->setGeometry(QRect(24, 156, 85, 16));
        qelabelPos_2->setAddUnits(false);
        qelabelPos = new QELabel(PicoMotor);
        qelabelPos->setObjectName(QString::fromUtf8("qelabelPos"));
        qelabelPos->setGeometry(QRect(24, 172, 85, 16));
        Motor1 = new QPushButton(PicoMotor);
        Motor1->setObjectName(QString::fromUtf8("Motor1"));
        Motor1->setGeometry(QRect(4, 192, 73, 25));
        Detail1 = new QPushButton(PicoMotor);
        Detail1->setObjectName(QString::fromUtf8("Detail1"));
        Detail1->setGeometry(QRect(4, 220, 73, 25));
        Motor3 = new QPushButton(PicoMotor);
        Motor3->setObjectName(QString::fromUtf8("Motor3"));
        Motor3->setGeometry(QRect(236, 164, 73, 25));
        Detail3 = new QPushButton(PicoMotor);
        Detail3->setObjectName(QString::fromUtf8("Detail3"));
        Detail3->setGeometry(QRect(236, 192, 73, 25));
        Debug1 = new QPushButton(PicoMotor);
        Debug1->setObjectName(QString::fromUtf8("Debug1"));
        Debug1->setGeometry(QRect(80, 220, 49, 25));
        Debug3 = new QPushButton(PicoMotor);
        Debug3->setObjectName(QString::fromUtf8("Debug3"));
        Debug3->setGeometry(QRect(260, 220, 49, 25));
        qelabel = new QELabel(PicoMotor);
        qelabel->setObjectName(QString::fromUtf8("qelabel"));
        qelabel->setGeometry(QRect(50, 20, 26, 15));

        retranslateUi(PicoMotor);

        QMetaObject::connectSlotsByName(PicoMotor);
    } // setupUi

    void retranslateUi(QDialog *PicoMotor)
    {
        PicoMotor->setWindowTitle(QApplication::translate("PicoMotor", "Dialog", 0, QApplication::UnicodeUTF8));
        QCA10Left->setText(QApplication::translate("PicoMotor", "-10", 0, QApplication::UnicodeUTF8));
        QCA10Left->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA10Left->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA10Left->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10Left->setReleaseText(QApplication::translate("PicoMotor", "10", 0, QApplication::UnicodeUTF8));
        QCA10Left->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Left->setText(QApplication::translate("PicoMotor", "-100", 0, QApplication::UnicodeUTF8));
        QCA100Left->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA100Left->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA100Left->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Left->setReleaseText(QApplication::translate("PicoMotor", "100", 0, QApplication::UnicodeUTF8));
        QCA100Left->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Left->setText(QApplication::translate("PicoMotor", "-1000", 0, QApplication::UnicodeUTF8));
        QCA1000Left->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA1000Left->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA1000Left->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Left->setReleaseText(QApplication::translate("PicoMotor", "1000", 0, QApplication::UnicodeUTF8));
        QCA1000Left->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Left->setText(QApplication::translate("PicoMotor", "-10000", 0, QApplication::UnicodeUTF8));
        QCA10000Left->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA10000Left->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA10000Left->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Left->setReleaseText(QApplication::translate("PicoMotor", "10000", 0, QApplication::UnicodeUTF8));
        QCA10000Left->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10Right->setText(QApplication::translate("PicoMotor", "+10", 0, QApplication::UnicodeUTF8));
        QCA10Right->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA10Right->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA10Right->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10Right->setReleaseText(QApplication::translate("PicoMotor", "10", 0, QApplication::UnicodeUTF8));
        QCA10Right->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Right->setText(QApplication::translate("PicoMotor", "+100", 0, QApplication::UnicodeUTF8));
        QCA100Right->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA100Right->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA100Right->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Right->setReleaseText(QApplication::translate("PicoMotor", "100", 0, QApplication::UnicodeUTF8));
        QCA100Right->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Right->setText(QApplication::translate("PicoMotor", "+1000", 0, QApplication::UnicodeUTF8));
        QCA1000Right->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA1000Right->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA1000Right->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Right->setReleaseText(QApplication::translate("PicoMotor", "1000", 0, QApplication::UnicodeUTF8));
        QCA1000Right->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Right->setText(QApplication::translate("PicoMotor", "+10000", 0, QApplication::UnicodeUTF8));
        QCA10000Right->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA10000Right->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        QCA10000Right->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Right->setReleaseText(QApplication::translate("PicoMotor", "10000", 0, QApplication::UnicodeUTF8));
        QCA10000Right->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10Up->setText(QApplication::translate("PicoMotor", "+10", 0, QApplication::UnicodeUTF8));
        QCA10Up->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA10Up->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA10Up->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10Up->setReleaseText(QApplication::translate("PicoMotor", "10", 0, QApplication::UnicodeUTF8));
        QCA10Up->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Up->setText(QApplication::translate("PicoMotor", "+100", 0, QApplication::UnicodeUTF8));
        QCA100Up->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA100Up->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA100Up->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Up->setReleaseText(QApplication::translate("PicoMotor", "100", 0, QApplication::UnicodeUTF8));
        QCA100Up->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Up->setText(QApplication::translate("PicoMotor", "+1000", 0, QApplication::UnicodeUTF8));
        QCA1000Up->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA1000Up->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA1000Up->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Up->setReleaseText(QApplication::translate("PicoMotor", "1000", 0, QApplication::UnicodeUTF8));
        QCA1000Up->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Up->setText(QApplication::translate("PicoMotor", "+10000", 0, QApplication::UnicodeUTF8));
        QCA10000Up->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELF", 0, QApplication::UnicodeUTF8)));
        QCA10000Up->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA10000Up->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Up->setReleaseText(QApplication::translate("PicoMotor", "10000", 0, QApplication::UnicodeUTF8));
        QCA10000Up->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10Down->setText(QApplication::translate("PicoMotor", "-10", 0, QApplication::UnicodeUTF8));
        QCA10Down->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA10Down->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA10Down->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10Down->setReleaseText(QApplication::translate("PicoMotor", "10", 0, QApplication::UnicodeUTF8));
        QCA10Down->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Down->setText(QApplication::translate("PicoMotor", "-100", 0, QApplication::UnicodeUTF8));
        QCA100Down->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA100Down->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA100Down->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA100Down->setReleaseText(QApplication::translate("PicoMotor", "100", 0, QApplication::UnicodeUTF8));
        QCA100Down->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Down->setText(QApplication::translate("PicoMotor", "-1000", 0, QApplication::UnicodeUTF8));
        QCA1000Down->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA1000Down->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA1000Down->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA1000Down->setReleaseText(QApplication::translate("PicoMotor", "1000", 0, QApplication::UnicodeUTF8));
        QCA1000Down->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Down->setText(QApplication::translate("PicoMotor", "-10000", 0, QApplication::UnicodeUTF8));
        QCA10000Down->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3):AO:RELR", 0, QApplication::UnicodeUTF8)));
        QCA10000Down->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        QCA10000Down->setPressText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        QCA10000Down->setReleaseText(QApplication::translate("PicoMotor", "10000", 0, QApplication::UnicodeUTF8));
        QCA10000Down->setClickText(QApplication::translate("PicoMotor", "0", 0, QApplication::UnicodeUTF8));
        qelabelname_2->setText(QString());
        qelabelname_2->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3).NAME", 0, QApplication::UnicodeUTF8)));
        qelabelname_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        qelabelname->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(M1).NAME", 0, QApplication::UnicodeUTF8)));
        qelabelname->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "M1=m1", 0, QApplication::UnicodeUTF8)));
        qelabelPos_3->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3).RRBV", 0, QApplication::UnicodeUTF8)));
        qelabelPos_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=ESB:PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        qelabelPos_4->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M3).RBV", 0, QApplication::UnicodeUTF8)));
        qelabelPos_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=ESB:PICO,M3=m3", 0, QApplication::UnicodeUTF8)));
        qelabelPos_2->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1).RRBV", 0, QApplication::UnicodeUTF8)));
        qelabelPos_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=ESB:PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
        qelabelPos->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P):$(M1).RBV", 0, QApplication::UnicodeUTF8)));
        qelabelPos->setProperty("variableSubstitutions", QVariant(QApplication::translate("PicoMotor", "P=ESB:PICO,M1=m1", 0, QApplication::UnicodeUTF8)));
#ifndef QT_NO_WHATSTHIS
        Motor1->setWhatsThis(QApplication::translate("PicoMotor", "Pop up Motor Dialog for this Axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Motor1->setText(QApplication::translate("PicoMotor", "Motor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Detail1->setWhatsThis(QApplication::translate("PicoMotor", "Pop up Motor Details Dialog for this Axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Detail1->setText(QApplication::translate("PicoMotor", "Detail", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Motor3->setToolTip(QApplication::translate("PicoMotor", "Pop up Motor Dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Motor3->setWhatsThis(QApplication::translate("PicoMotor", "Pops up Motor Dialog for this axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Motor3->setText(QApplication::translate("PicoMotor", "Motor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Detail3->setToolTip(QApplication::translate("PicoMotor", "Motor Details", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Detail3->setWhatsThis(QApplication::translate("PicoMotor", "Pop up Motor Detais Dialog for this axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Detail3->setText(QApplication::translate("PicoMotor", "Detail", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Debug1->setWhatsThis(QApplication::translate("PicoMotor", "Pop up Motor Details Dialog for this Axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Debug1->setText(QApplication::translate("PicoMotor", "Debug", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Debug3->setWhatsThis(QApplication::translate("PicoMotor", "Pop up Motor Details Dialog for this Axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Debug3->setText(QApplication::translate("PicoMotor", "Debug", 0, QApplication::UnicodeUTF8));
        qelabel->setProperty("variable", QVariant(QApplication::translate("PicoMotor", "$(P)", 0, QApplication::UnicodeUTF8)));
    } // retranslateUi

};

namespace Ui {
    class PicoMotor: public Ui_PicoMotor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICOMOTOR_H
