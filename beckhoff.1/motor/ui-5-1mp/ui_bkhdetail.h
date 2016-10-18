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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "QEForm.h"

QT_BEGIN_NAMESPACE

class Ui_BkhDetail
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QEForm *adcDacQEF;
    QWidget *hidden;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QEForm *qeform_2;
    QWidget *tab_4;
    QEForm *qeform_3;
    QWidget *tab;
    QEForm *qeform_14;
    QWidget *bk9000;
    QEForm *couplerQEF;
    QPushButton *closePB;

    void setupUi(QDialog *BkhDetail)
    {
        if (BkhDetail->objectName().isEmpty())
            BkhDetail->setObjectName(QStringLiteral("BkhDetail"));
        BkhDetail->resize(481, 419);
        tabWidget = new QTabWidget(BkhDetail);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 36, 469, 377));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        adcDacQEF = new QEForm(tab_2);
        adcDacQEF->setObjectName(QStringLiteral("adcDacQEF"));
        adcDacQEF->setGeometry(QRect(6, 6, 455, 335));
        tabWidget->addTab(tab_2, QString());
        hidden = new QWidget();
        hidden->setObjectName(QStringLiteral("hidden"));
        tabWidget_2 = new QTabWidget(hidden);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(14, 14, 409, 314));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        qeform_2 = new QEForm(tab_3);
        qeform_2->setObjectName(QStringLiteral("qeform_2"));
        qeform_2->setGeometry(QRect(8, 6, 391, 271));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        qeform_3 = new QEForm(tab_4);
        qeform_3->setObjectName(QStringLiteral("qeform_3"));
        qeform_3->setGeometry(QRect(8, 6, 391, 271));
        tabWidget_2->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        qeform_14 = new QEForm(tab);
        qeform_14->setObjectName(QStringLiteral("qeform_14"));
        qeform_14->setGeometry(QRect(8, 8, 378, 260));
        tabWidget_2->addTab(tab, QString());
        tabWidget->addTab(hidden, QString());
        bk9000 = new QWidget();
        bk9000->setObjectName(QStringLiteral("bk9000"));
        couplerQEF = new QEForm(bk9000);
        couplerQEF->setObjectName(QStringLiteral("couplerQEF"));
        couplerQEF->setGeometry(QRect(14, 8, 403, 340));
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
        adcDacQEF->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/adcdac2m.ui", 0)));
        adcDacQEF->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "P=$(P),A=$(A1),D=$(D1),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("BkhDetail", "ADC - DAC", 0));
        qeform_2->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/hidden.ui", 0)));
        qeform_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "P=$(P),M=$(A1),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("BkhDetail", "ADC", 0));
        qeform_3->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/hidden.ui", 0)));
        qeform_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "P=$(P),M=$(D1),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("BkhDetail", "DAC", 0));
        qeform_14->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/hidden.ui", 0)));
        qeform_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "M=$(M1),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("BkhDetail", "Mot 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(hidden), QApplication::translate("BkhDetail", "Hidden", 0));
        couplerQEF->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/bk9000.ui", 0)));
        couplerQEF->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "P=$(P),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(bk9000), QApplication::translate("BkhDetail", "BK9000", 0));
        closePB->setText(QApplication::translate("BkhDetail", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class BkhDetail: public Ui_BkhDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BKHDETAIL_H
