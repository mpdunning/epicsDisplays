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
    QWidget *hidden;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QEForm *qeform_14;
    QWidget *hidden_2;
    QEForm *qeform_15;
    QWidget *tab_9;
    QEForm *qeform_22;
    QWidget *bk9000;
    QEForm *couplerQEF;
    QPushButton *closePB;

    void setupUi(QDialog *BkhDetail)
    {
        if (BkhDetail->objectName().isEmpty())
            BkhDetail->setObjectName(QStringLiteral("BkhDetail"));
        BkhDetail->resize(481, 456);
        tabWidget = new QTabWidget(BkhDetail);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 36, 469, 385));
        hidden = new QWidget();
        hidden->setObjectName(QStringLiteral("hidden"));
        tabWidget_2 = new QTabWidget(hidden);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(2, 14, 459, 314));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        qeform_14 = new QEForm(tab);
        qeform_14->setObjectName(QStringLiteral("qeform_14"));
        qeform_14->setGeometry(QRect(44, 8, 372, 260));
        tabWidget_2->addTab(tab, QString());
        hidden_2 = new QWidget();
        hidden_2->setObjectName(QStringLiteral("hidden_2"));
        qeform_15 = new QEForm(hidden_2);
        qeform_15->setObjectName(QStringLiteral("qeform_15"));
        qeform_15->setGeometry(QRect(44, 8, 372, 260));
        tabWidget_2->addTab(hidden_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        qeform_22 = new QEForm(tab_9);
        qeform_22->setObjectName(QStringLiteral("qeform_22"));
        qeform_22->setGeometry(QRect(44, 8, 372, 260));
        tabWidget_2->addTab(tab_9, QString());
        tabWidget->addTab(hidden, QString());
        bk9000 = new QWidget();
        bk9000->setObjectName(QStringLiteral("bk9000"));
        couplerQEF = new QEForm(bk9000);
        couplerQEF->setObjectName(QStringLiteral("couplerQEF"));
        couplerQEF->setGeometry(QRect(32, 8, 403, 340));
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
        qeform_14->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/hidden.ui", 0)));
        qeform_14->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "M=$(M1),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("BkhDetail", "Mot 1", 0));
        qeform_15->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/hidden.ui", 0)));
        qeform_15->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "M=$(M2),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(hidden_2), QApplication::translate("BkhDetail", "Mot 2", 0));
        qeform_22->setProperty("uiFile", QVariant(QApplication::translate("BkhDetail", "/afs/slac/g/testfac/tools/display/beckhoff.1/common/ui/hidden.ui", 0)));
        qeform_22->setProperty("variableSubstitutions", QVariant(QApplication::translate("BkhDetail", "M=$(M3),N=$(N)", 0)));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("BkhDetail", "Mot 3", 0));
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
