/********************************************************************************
** Form generated from reading UI file 'hmadcs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMADCS_H
#define UI_HMADCS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include "ASguiFormPlugin.h"

QT_BEGIN_NAMESPACE

class Ui_HMAdcsDialog
{
public:
    ASguiFormPlugin *asguiformplugin;
    QLineEdit *HMSelect;
    QPushButton *Close;

    void setupUi(QDialog *HMAdcsDialog)
    {
        if (HMAdcsDialog->objectName().isEmpty())
            HMAdcsDialog->setObjectName(QString::fromUtf8("HMAdcsDialog"));
        HMAdcsDialog->resize(400, 548);
        asguiformplugin = new ASguiFormPlugin(HMAdcsDialog);
        asguiformplugin->setObjectName(QString::fromUtf8("asguiformplugin"));
        asguiformplugin->setGeometry(QRect(8, 32, 381, 461));
        HMSelect = new QLineEdit(HMAdcsDialog);
        HMSelect->setObjectName(QString::fromUtf8("HMSelect"));
        HMSelect->setGeometry(QRect(8, 10, 60, 20));
        Close = new QPushButton(HMAdcsDialog);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(320, 508, 69, 33));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        Close->setFont(font);
        Close->setAutoDefault(false);

        retranslateUi(HMAdcsDialog);
        QObject::connect(Close, SIGNAL(clicked(bool)), HMAdcsDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(HMAdcsDialog);
    } // setupUi

    void retranslateUi(QDialog *HMAdcsDialog)
    {
        HMAdcsDialog->setWindowTitle(QApplication::translate("HMAdcsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        asguiformplugin->setProperty("uiFile", QVariant(QApplication::translate("HMAdcsDialog", "hmadcs1.ui", 0, QApplication::UnicodeUTF8)));
        asguiformplugin->setProperty("variableSubstitutions", QVariant(QApplication::translate("HMAdcsDialog", "P=HM02", 0, QApplication::UnicodeUTF8)));
        HMSelect->setText(QApplication::translate("HMAdcsDialog", "HM02", 0, QApplication::UnicodeUTF8));
        Close->setText(QApplication::translate("HMAdcsDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HMAdcsDialog: public Ui_HMAdcsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMADCS_H
