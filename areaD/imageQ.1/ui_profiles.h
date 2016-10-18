/********************************************************************************
** Form generated from reading UI file 'profiles.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILES_H
#define UI_PROFILES_H

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

class Ui_ProfDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ClosePB;
    QGridLayout *gridLayout;
    CAPlot *caplot;
    CAPlot *caplot_2;
    CAPlot *caplot_3;
    CAPlot *caplot_4;

    void setupUi(QDialog *ProfDialog)
    {
        if (ProfDialog->objectName().isEmpty())
            ProfDialog->setObjectName(QStringLiteral("ProfDialog"));
        ProfDialog->resize(516, 475);
        gridLayout_2 = new QGridLayout(ProfDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ClosePB = new QPushButton(ProfDialog);
        ClosePB->setObjectName(QStringLiteral("ClosePB"));

        horizontalLayout->addWidget(ClosePB);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        caplot = new CAPlot(ProfDialog);
        caplot->setObjectName(QStringLiteral("caplot"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(caplot->sizePolicy().hasHeightForWidth());
        caplot->setSizePolicy(sizePolicy);
        caplot->setAutoScaleX(true);
        caplot->setProperty("gridEnableMajorX", QVariant(true));
        caplot->setXMax(255);
        caplot->setNTicksMajorX(1);
        caplot->setNTicksMinorX(1);
        caplot->setProperty("gridEnableMajorY", QVariant(true));
        caplot->setProperty("gridMajorColor", QVariant(QColor(80, 80, 90)));
        caplot->setProperty("backgroundColor", QVariant(QColor(35, 45, 70)));
        caplot->setTrace2On(false);
        caplot->setTrace3On(false);
        caplot->setTrace4On(false);
        caplot->setTraceColor1(QColor(255, 210, 100));
        caplot->setDisplayAlarmState(false);

        gridLayout->addWidget(caplot, 0, 0, 1, 1);

        caplot_2 = new CAPlot(ProfDialog);
        caplot_2->setObjectName(QStringLiteral("caplot_2"));
        sizePolicy.setHeightForWidth(caplot_2->sizePolicy().hasHeightForWidth());
        caplot_2->setSizePolicy(sizePolicy);
        caplot_2->setAutoScaleX(true);
        caplot_2->setProperty("gridEnableMajorX", QVariant(true));
        caplot_2->setXMax(255);
        caplot_2->setNTicksMajorX(5);
        caplot_2->setProperty("gridEnableMajorY", QVariant(true));
        caplot_2->setProperty("gridMajorColor", QVariant(QColor(80, 80, 90)));
        caplot_2->setProperty("backgroundColor", QVariant(QColor(35, 45, 70)));
        caplot_2->setTrace2On(false);
        caplot_2->setTrace3On(false);
        caplot_2->setTrace4On(false);
        caplot_2->setTraceColor1(QColor(255, 210, 100));
        caplot_2->setDisplayAlarmState(false);

        gridLayout->addWidget(caplot_2, 0, 1, 1, 1);

        caplot_3 = new CAPlot(ProfDialog);
        caplot_3->setObjectName(QStringLiteral("caplot_3"));
        sizePolicy.setHeightForWidth(caplot_3->sizePolicy().hasHeightForWidth());
        caplot_3->setSizePolicy(sizePolicy);
        caplot_3->setAutoScaleX(true);
        caplot_3->setProperty("gridEnableMajorX", QVariant(true));
        caplot_3->setXMax(255);
        caplot_3->setNTicksMajorX(3);
        caplot_3->setProperty("gridEnableMajorY", QVariant(true));
        caplot_3->setProperty("gridMajorColor", QVariant(QColor(80, 80, 90)));
        caplot_3->setProperty("backgroundColor", QVariant(QColor(35, 45, 70)));
        caplot_3->setTrace2On(false);
        caplot_3->setTrace3On(false);
        caplot_3->setTrace4On(false);
        caplot_3->setTraceColor1(QColor(255, 210, 100));
        caplot_3->setDisplayAlarmState(false);

        gridLayout->addWidget(caplot_3, 1, 0, 1, 1);

        caplot_4 = new CAPlot(ProfDialog);
        caplot_4->setObjectName(QStringLiteral("caplot_4"));
        sizePolicy.setHeightForWidth(caplot_4->sizePolicy().hasHeightForWidth());
        caplot_4->setSizePolicy(sizePolicy);
        caplot_4->setAutoScaleX(true);
        caplot_4->setProperty("gridEnableMajorX", QVariant(true));
        caplot_4->setXMax(255);
        caplot_4->setNTicksMajorX(5);
        caplot_4->setProperty("gridEnableMajorY", QVariant(true));
        caplot_4->setProperty("gridMajorColor", QVariant(QColor(80, 80, 90)));
        caplot_4->setProperty("backgroundColor", QVariant(QColor(35, 45, 70)));
        caplot_4->setTrace2On(false);
        caplot_4->setTrace3On(false);
        caplot_4->setTrace4On(false);
        caplot_4->setTraceColor1(QColor(255, 210, 100));
        caplot_4->setDisplayAlarmState(false);

        gridLayout->addWidget(caplot_4, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ProfDialog);

        QMetaObject::connectSlotsByName(ProfDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfDialog)
    {
        ProfDialog->setWindowTitle(QApplication::translate("ProfDialog", "Dialog", 0));
        ClosePB->setText(QApplication::translate("ProfDialog", "Close", 0));
        caplot->setTitle(QApplication::translate("ProfDialog", "Projection X", 0));
        caplot->setXUnit(QApplication::translate("ProfDialog", "Pixel", 0));
        caplot->setYUnit(QApplication::translate("ProfDialog", "Counts", 0));
        caplot->setProperty("variable1", QVariant(QApplication::translate("ProfDialog", "$(P):Stats1:ProfileAverageX_RBV", 0)));
        caplot->setProperty("variable4", QVariant(QString()));
        caplot->setProperty("variableSubstitutions", QVariant(QApplication::translate("ProfDialog", "P=CPS1", 0)));
        caplot_2->setTitle(QApplication::translate("ProfDialog", "Projection Y", 0));
        caplot_2->setXUnit(QApplication::translate("ProfDialog", "Pixel", 0));
        caplot_2->setYUnit(QApplication::translate("ProfDialog", "Counts", 0));
        caplot_2->setProperty("variable1", QVariant(QApplication::translate("ProfDialog", "$(P):Stats1:ProfileAverageY_RBV", 0)));
        caplot_2->setProperty("variable4", QVariant(QString()));
        caplot_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("ProfDialog", "P=CPS1", 0)));
        caplot_3->setTitle(QApplication::translate("ProfDialog", "Centroid X", 0));
        caplot_3->setXUnit(QApplication::translate("ProfDialog", "Pixel", 0));
        caplot_3->setYUnit(QApplication::translate("ProfDialog", "Counts", 0));
        caplot_3->setProperty("variable1", QVariant(QApplication::translate("ProfDialog", "$(P):Stats1:ProfileCentroidX_RBV", 0)));
        caplot_3->setProperty("variable4", QVariant(QString()));
        caplot_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("ProfDialog", "P=CPS1", 0)));
        caplot_4->setTitle(QApplication::translate("ProfDialog", "Centroid Y", 0));
        caplot_4->setXUnit(QApplication::translate("ProfDialog", "Pixel", 0));
        caplot_4->setYUnit(QApplication::translate("ProfDialog", "Counts", 0));
        caplot_4->setProperty("variable1", QVariant(QApplication::translate("ProfDialog", "$(P):Stats1:ProfileCentroidY_RBV", 0)));
        caplot_4->setProperty("variable4", QVariant(QString()));
        caplot_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("ProfDialog", "P=CPS1", 0)));
    } // retranslateUi

};

namespace Ui {
    class ProfDialog: public Ui_ProfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILES_H
