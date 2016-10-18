/********************************************************************************
** Form generated from reading UI file 'bkhdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BKHDETAIL_H
#define UI_BKHDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "QEForm.h"

QT_BEGIN_NAMESPACE

class Ui_BkhDetail
{
public:
    QTabWidget *tabWidget;
    QWidget *adc;
    QEForm *qeform_13;
    QLabel *label_3;
    QPushButton *coefADCPB;
    QWidget *hidden;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QEForm *qeform_14;
    QWidget *tab_2;
    QEForm *qeform_15;
    QWidget *tab_3;
    QEForm *qeform_16;
    QWidget *tab_4;
    QEForm *qeform_17;
    QWidget *bk9000;
    QEForm *qeFormBK9;
    QPushButton *debugPB;
    QPushButton *closePB;

    void setupUi(QDialog *BkhDetail)
    {
        if (BkhDetail->objectName().isEmpty())
            BkhDetail->setObjectName(QStringLiteral("BkhDetail"));
        BkhDetail->resize(481, 456);
        tabWidget = new QTabWidget(BkhDetail);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 36, 469, 415));
        adc = new QWidget();
        adc->setObjectName(QStringLiteral("adc"));
        qeform_13 = new QEForm(adc);
        qeform_13->setObjectName(QStringLiteral("qeform_13"));
        qeform_13->setGeometry(QRect(14, 14, 441, 314));
        label_3 = new QLabel(adc);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 342, 99, 25));
        coefADCPB = new QPushButton(adc);
        coefADCPB->setObjectName(QStringLiteral("coefADCPB"));
        coefADCPB->setGeometry(QRect(362, 342, 83, 25));
        tabWidget->addTab(adc, QString());
        hidden = new QWidget();
        hidden->setObjectName(QStringLiteral("hidden"));
        tabWidget_2 = new QTabWidget(hidden);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(14, 14, 409, 314));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        qeform_14 = new QEForm(tab);
        qeform_14->setObjectName(QStringLiteral("qeform_14"));
        qeform_14->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        qeform_15 = new QEForm(tab_2);
        qeform_15->setObjectName(QStringLiteral("qeform_15"));
        qeform_15->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        qeform_16 = new QEForm(tab_3);
        qeform_16->setObjectName(QStringLiteral("qeform_16"));
        qeform_16->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        qeform_17 = new QEForm(tab_4);
        qeform_17->setObjectName(QStringLiteral("qeform_17"));
        qeform_17->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(hidden, QString());
        bk9000 = new QWidget();
        bk9000->setObjectName(QStringLiteral("bk9000"));
        qeFormBK9 = new QEForm(bk9000);
        qeFormBK9->setObjectName(QStringLiteral("qeFormBK9"));
        qeFormBK9->setGeometry(QRect(14, 8, 403, 340));
        debugPB = new QPushButton(bk9000);
        debugPB->setObjectName(QStringLiteral("debugPB"));
        debugPB->setGeometry(QRect(380, 354, 72, 24));
        debugPB->setAutoDefault(false);
        tabWidget->addTab(bk9000, QString());
        closePB = new QPushButton(BkhDetail);
        closePB->setObjectName(QStringLiteral("closePB"));
        closePB->setGeometry(QRect(414, 6, 56, 24));
        closePB->setAutoDefault(false);

        retranslateUi(BkhDetail);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(BkhDetail);
    } // setupUi

    void retranslateUi(QDialog *BkhDetail)
    {
        BkhDetail->setWindowTitle(QApplication::translate("BkhDetail", "Dialog", 0));
        qeform_13->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "../ui-common/adcdac.ui", 0)));
        qeform_13->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "P=CHA,R=3132,T=4132,N=2", 0)));
        label_3->setText(QApplication::translate("BkhDetail", "ADC Conversion", 0));
        coefADCPB->setText(QApplication::translate("BkhDetail", "Coefficients", 0));
        tabWidget->setTabText(tabWidget->indexOf(adc), QApplication::translate("BkhDetail", "ADC/DAC", 0));
        qeform_14->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "../ui-common/hiddenreg.ui", 0)));
        qeform_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "Q=2531-1,N=2", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("BkhDetail", "Mot 1", 0));
        qeform_15->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "../ui-common/hiddenreg.ui", 0)));
        qeform_15->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "Q=2531-2,N=2", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("BkhDetail", "Mot 2", 0));
        qeform_16->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "../ui-common/hiddenreg.ui", 0)));
        qeform_16->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "Q=3132,N=2", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("BkhDetail", "ADC", 0));
        qeform_17->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "../ui-common/hiddenreg.ui", 0)));
        qeform_17->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "Q=4132,N=2", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("BkhDetail", "DAC", 0));
        tabWidget->setTabText(tabWidget->indexOf(hidden), QApplication::translate("BkhDetail", "Hidden", 0));
        qeFormBK9->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "../ui-common/bk9000.ui", 0)));
        qeFormBK9->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "P=CHA,N=2", 0)));
        debugPB->setText(QApplication::translate("BkhDetail", "Debug", 0));
        tabWidget->setTabText(tabWidget->indexOf(bk9000), QApplication::translate("BkhDetail", "BK9000", 0));
        closePB->setText(QApplication::translate("BkhDetail", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class BkhDetail: public Ui_BkhDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BKHDETAIL_H
