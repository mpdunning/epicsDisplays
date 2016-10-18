/********************************************************************************
** Form generated from reading UI file 'motorctrl.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORCTRL_H
#define UI_MOTORCTRL_H

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
#include "QELabel.h"

QT_BEGIN_NAMESPACE

class Ui_MotorCtrl
{
public:
    QTabWidget *motor1_tab;
    QWidget *tab;
    QEForm *qeform_2;
    QWidget *control;
    QEForm *qeform;
    QWidget *csr;
    QEForm *qeform_3;
    QWidget *readreg;
    QEForm *qeform_5;
    QWidget *writeram;
    QEForm *qeform_7;
    QWidget *writeeeprom;
    QEForm *qeform_9;
    QWidget *feature1;
    QEForm *qeform_11;
    QPushButton *ctrlClosePB;
    QELabel *qelabel;

    void setupUi(QDialog *MotorCtrl)
    {
        if (MotorCtrl->objectName().isEmpty())
            MotorCtrl->setObjectName(QStringLiteral("MotorCtrl"));
        MotorCtrl->resize(503, 419);
        motor1_tab = new QTabWidget(MotorCtrl);
        motor1_tab->setObjectName(QStringLiteral("motor1_tab"));
        motor1_tab->setGeometry(QRect(8, 36, 485, 373));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        qeform_2 = new QEForm(tab);
        qeform_2->setObjectName(QStringLiteral("qeform_2"));
        qeform_2->setGeometry(QRect(8, 6, 465, 317));
        motor1_tab->addTab(tab, QString());
        control = new QWidget();
        control->setObjectName(QStringLiteral("control"));
        qeform = new QEForm(control);
        qeform->setObjectName(QStringLiteral("qeform"));
        qeform->setGeometry(QRect(4, 4, 470, 307));
        motor1_tab->addTab(control, QString());
        csr = new QWidget();
        csr->setObjectName(QStringLiteral("csr"));
        qeform_3 = new QEForm(csr);
        qeform_3->setObjectName(QStringLiteral("qeform_3"));
        qeform_3->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(csr, QString());
        readreg = new QWidget();
        readreg->setObjectName(QStringLiteral("readreg"));
        qeform_5 = new QEForm(readreg);
        qeform_5->setObjectName(QStringLiteral("qeform_5"));
        qeform_5->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(readreg, QString());
        writeram = new QWidget();
        writeram->setObjectName(QStringLiteral("writeram"));
        qeform_7 = new QEForm(writeram);
        qeform_7->setObjectName(QStringLiteral("qeform_7"));
        qeform_7->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(writeram, QString());
        writeeeprom = new QWidget();
        writeeeprom->setObjectName(QStringLiteral("writeeeprom"));
        qeform_9 = new QEForm(writeeeprom);
        qeform_9->setObjectName(QStringLiteral("qeform_9"));
        qeform_9->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(writeeeprom, QString());
        feature1 = new QWidget();
        feature1->setObjectName(QStringLiteral("feature1"));
        qeform_11 = new QEForm(feature1);
        qeform_11->setObjectName(QStringLiteral("qeform_11"));
        qeform_11->setGeometry(QRect(6, 6, 470, 314));
        motor1_tab->addTab(feature1, QString());
        ctrlClosePB = new QPushButton(MotorCtrl);
        ctrlClosePB->setObjectName(QStringLiteral("ctrlClosePB"));
        ctrlClosePB->setGeometry(QRect(432, 6, 56, 24));
        ctrlClosePB->setAutoDefault(false);
        qelabel = new QELabel(MotorCtrl);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(58, 10, 99, 20));

        retranslateUi(MotorCtrl);

        motor1_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MotorCtrl);
    } // setupUi

    void retranslateUi(QDialog *MotorCtrl)
    {
        MotorCtrl->setWindowTitle(QApplication::translate("MotorCtrl", "Dialog", 0));
        qeform_2->setProperty("uiFile", QVariant(QApplication::translate("MotorCtrl", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/home.ui", 0)));
        qeform_2->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCtrl", "P=$(P),M=$(M),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(tab), QApplication::translate("MotorCtrl", "Home", 0));
        qeform->setProperty("uiFile", QVariant(QApplication::translate("MotorCtrl", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/control.ui", 0)));
        qeform->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCtrl", "P=$(P),M=$(M),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(control), QApplication::translate("MotorCtrl", "Setup", 0));
        qeform_3->setProperty("uiFile", QVariant(QApplication::translate("MotorCtrl", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/csr.ui", 0)));
        qeform_3->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCtrl", "P=$(P),M=$(M),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(csr), QApplication::translate("MotorCtrl", "CSR", 0));
        qeform_5->setProperty("uiFile", QVariant(QApplication::translate("MotorCtrl", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/readreg.ui", 0)));
        qeform_5->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCtrl", "P=$(P),M=$(M),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(readreg), QApplication::translate("MotorCtrl", "readR", 0));
        qeform_7->setProperty("uiFile", QVariant(QApplication::translate("MotorCtrl", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/writeram.ui", 0)));
        qeform_7->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCtrl", "P=$(P),M=$(M),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(writeram), QApplication::translate("MotorCtrl", "wtRAM", 0));
        qeform_9->setProperty("uiFile", QVariant(QApplication::translate("MotorCtrl", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/writeeep.ui", 0)));
        qeform_9->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCtrl", "P=$(P),M=$(M),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(writeeeprom), QApplication::translate("MotorCtrl", "wtEEPROM", 0));
        qeform_11->setProperty("uiFile", QVariant(QApplication::translate("MotorCtrl", "/afs/slac/g/testfac/tools/display/beckhoff/common/ui/feature.ui", 0)));
        qeform_11->setProperty("variableSubstitutions", QVariant(QApplication::translate("MotorCtrl", "P=$(P),M=$(M),N=$(N)", 0)));
        motor1_tab->setTabText(motor1_tab->indexOf(feature1), QApplication::translate("MotorCtrl", "Feature", 0));
        ctrlClosePB->setText(QApplication::translate("MotorCtrl", "Close", 0));
        qelabel->setProperty("variable", QVariant(QApplication::translate("MotorCtrl", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
    } // retranslateUi

};

namespace Ui {
    class MotorCtrl: public Ui_MotorCtrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORCTRL_H
