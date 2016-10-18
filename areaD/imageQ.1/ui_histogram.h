/********************************************************************************
** Form generated from reading UI file 'histogram.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAM_H
#define UI_HISTOGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "aplot.h"
#include "caplot.h"

QT_BEGIN_NAMESPACE

class Ui_HistoDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ClosePB;
    CAPlot *caplot;

    void setupUi(QDialog *HistoDialog)
    {
        if (HistoDialog->objectName().isEmpty())
            HistoDialog->setObjectName(QStringLiteral("HistoDialog"));
        HistoDialog->resize(397, 296);
        gridLayout = new QGridLayout(HistoDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ClosePB = new QPushButton(HistoDialog);
        ClosePB->setObjectName(QStringLiteral("ClosePB"));

        horizontalLayout->addWidget(ClosePB);


        verticalLayout->addLayout(horizontalLayout);

        caplot = new CAPlot(HistoDialog);
        caplot->setObjectName(QStringLiteral("caplot"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(caplot->sizePolicy().hasHeightForWidth());
        caplot->setSizePolicy(sizePolicy);
        caplot->setAutoScaleX(false);
        caplot->setProperty("gridEnableMajorX", QVariant(true));
        caplot->setXMax(255);
        caplot->setNTicksMajorX(5);
        caplot->setProperty("gridEnableMajorY", QVariant(true));
        caplot->setProperty("gridMajorColor", QVariant(QColor(80, 80, 90)));
        caplot->setProperty("backgroundColor", QVariant(QColor(35, 45, 70)));
        caplot->setTrace2On(false);
        caplot->setTrace3On(false);
        caplot->setTrace4On(false);
        caplot->setTraceColor1(QColor(255, 210, 100));
        caplot->setDisplayAlarmState(false);

        verticalLayout->addWidget(caplot);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(HistoDialog);

        QMetaObject::connectSlotsByName(HistoDialog);
    } // setupUi

    void retranslateUi(QDialog *HistoDialog)
    {
        HistoDialog->setWindowTitle(QApplication::translate("HistoDialog", "Dialog", 0));
        ClosePB->setText(QApplication::translate("HistoDialog", "Close", 0));
        caplot->setTitle(QString());
        caplot->setProperty("variable1", QVariant(QApplication::translate("HistoDialog", "$(P):Stats1:Histogram_RBV", 0)));
        caplot->setProperty("variable4", QVariant(QString()));
        caplot->setProperty("variableSubstitutions", QVariant(QApplication::translate("HistoDialog", "P=CPS1", 0)));
    } // retranslateUi

};

namespace Ui {
    class HistoDialog: public Ui_HistoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAM_H
