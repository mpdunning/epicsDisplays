/********************************************************************************
** Form generated from reading UI file 'hidden.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIDDEN_H
#define UI_HIDDEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "QEForm.h"

QT_BEGIN_NAMESPACE

class Ui_Hidden
{
public:
    QFrame *frame;
    QPushButton *hidClosePB;
    QTabWidget *tabWidget;
    QWidget *tab;
    QEForm *qeform;
    QWidget *tab_2;
    QEForm *qeform_2;
    QWidget *tab_3;
    QEForm *qeform_3;
    QWidget *tab_4;
    QEForm *qeform_4;

    void setupUi(QDialog *Hidden)
    {
        if (Hidden->objectName().isEmpty())
            Hidden->setObjectName(QStringLiteral("Hidden"));
        Hidden->resize(408, 349);
        frame = new QFrame(Hidden);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(4, 4, 400, 32));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        hidClosePB = new QPushButton(frame);
        hidClosePB->setObjectName(QStringLiteral("hidClosePB"));
        hidClosePB->setGeometry(QRect(332, 4, 56, 24));
        hidClosePB->setAutoDefault(false);
        tabWidget = new QTabWidget(Hidden);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(4, 40, 400, 300));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        qeform = new QEForm(tab);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(8, 8, 378, 260));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        qeform_2 = new QEForm(tab_2);
        qeform_2->setObjectName(QStringLiteral("qeform_2"));
        qeform_2->setGeometry(QRect(8, 8, 378, 260));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        qeform_3 = new QEForm(tab_3);
        qeform_3->setObjectName(QStringLiteral("qeform_3"));
        qeform_3->setGeometry(QRect(8, 8, 378, 260));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        qeform_4 = new QEForm(tab_4);
        qeform_4->setObjectName(QStringLiteral("qeform_4"));
        qeform_4->setGeometry(QRect(8, 8, 378, 260));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(Hidden);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Hidden);
    } // setupUi

    void retranslateUi(QDialog *Hidden)
    {
        Hidden->setWindowTitle(QApplication::translate("Hidden", "Dialog", 0));
        hidClosePB->setText(QApplication::translate("Hidden", "Close", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("Hidden", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform->setProperty("variableSubstitutions", QVariant(QApplication::translate("Hidden", "Q=$(M1),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Hidden", "Mot 1", 0));
        qeform_2->setProperty("uiFile", QVariant(QApplication::translate("Hidden", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("Hidden", "Q=$(M2),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Hidden", "Mot 2", 0));
        qeform_3->setProperty("uiFile", QVariant(QApplication::translate("Hidden", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("Hidden", "Q=$(R),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Hidden", "ADC", 0));
        qeform_4->setProperty("uiFile", QVariant(QApplication::translate("Hidden", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/hiddenreg.ui", 0)));
        qeform_4->setProperty("variableSubstitutions", QVariant(QApplication::translate("Hidden", "Q=$(T),N=$(N)", 0)));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Hidden", "DAC", 0));
    } // retranslateUi

};

namespace Ui {
    class Hidden: public Ui_Hidden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIDDEN_H
