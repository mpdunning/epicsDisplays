/********************************************************************************
** Form generated from reading UI file 'readreg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READREG_H
#define UI_READREG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "QELabel.h"

QT_BEGIN_NAMESPACE

class Ui_ReadReg
{
public:
    QELabel *qelabel_39;
    QELabel *qelabel_41;
    QELabel *qelabel_36;
    QELabel *qelabel_30;
    QELabel *qelabel_34;
    QELabel *qelabel_37;
    QELabel *qelabel_40;
    QELabel *qelabel_42;
    QELabel *qelabel_33;
    QELabel *qelabel_29;
    QELabel *qelabel_35;
    QELabel *qelabel_38;
    QELabel *qelabel_43;
    QELabel *qelabel_60;
    QELabel *qelabel_51;
    QELabel *qelabel_66;
    QELabel *qelabel_48;
    QELabel *qelabel_68;
    QELabel *qelabel_57;
    QELabel *qelabel_65;
    QELabel *qelabel_44;
    QELabel *qelabel_53;
    QELabel *qelabel_49;
    QELabel *qelabel_47;
    QELabel *qelabel_67;
    QELabel *qelabel_58;
    QELabel *qelabel_45;
    QELabel *qelabel_50;
    QELabel *qelabel_52;
    QELabel *qelabel_54;
    QELabel *qelabel_46;
    QELabel *qelabel_56;
    QELabel *qelabel;

    void setupUi(QDialog *ReadReg)
    {
        if (ReadReg->objectName().isEmpty())
            ReadReg->setObjectName(QStringLiteral("ReadReg"));
        ReadReg->resize(343, 291);
        qelabel_39 = new QELabel(ReadReg);
        qelabel_39->setObjectName(QStringLiteral("qelabel_39"));
        qelabel_39->setGeometry(QRect(10, 130, 89, 16));
        qelabel_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_39->setDisplayAlarmState(false);
        qelabel_41 = new QELabel(ReadReg);
        qelabel_41->setObjectName(QStringLiteral("qelabel_41"));
        qelabel_41->setGeometry(QRect(10, 150, 89, 16));
        qelabel_41->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_41->setDisplayAlarmState(false);
        qelabel_36 = new QELabel(ReadReg);
        qelabel_36->setObjectName(QStringLiteral("qelabel_36"));
        qelabel_36->setGeometry(QRect(10, 70, 89, 16));
        qelabel_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_36->setDisplayAlarmState(false);
        qelabel_30 = new QELabel(ReadReg);
        qelabel_30->setObjectName(QStringLiteral("qelabel_30"));
        qelabel_30->setGeometry(QRect(102, 30, 57, 16));
        qelabel_30->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_30->setDisplayAlarmState(false);
        qelabel_34 = new QELabel(ReadReg);
        qelabel_34->setObjectName(QStringLiteral("qelabel_34"));
        qelabel_34->setGeometry(QRect(10, 50, 89, 16));
        qelabel_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_34->setDisplayAlarmState(false);
        qelabel_37 = new QELabel(ReadReg);
        qelabel_37->setObjectName(QStringLiteral("qelabel_37"));
        qelabel_37->setGeometry(QRect(10, 110, 89, 16));
        qelabel_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_37->setDisplayAlarmState(false);
        qelabel_40 = new QELabel(ReadReg);
        qelabel_40->setObjectName(QStringLiteral("qelabel_40"));
        qelabel_40->setGeometry(QRect(102, 130, 57, 16));
        qelabel_40->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_40->setDisplayAlarmState(false);
        qelabel_42 = new QELabel(ReadReg);
        qelabel_42->setObjectName(QStringLiteral("qelabel_42"));
        qelabel_42->setGeometry(QRect(102, 150, 57, 16));
        qelabel_42->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_42->setDisplayAlarmState(false);
        qelabel_33 = new QELabel(ReadReg);
        qelabel_33->setObjectName(QStringLiteral("qelabel_33"));
        qelabel_33->setGeometry(QRect(102, 50, 57, 16));
        qelabel_33->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_33->setDisplayAlarmState(false);
        qelabel_29 = new QELabel(ReadReg);
        qelabel_29->setObjectName(QStringLiteral("qelabel_29"));
        qelabel_29->setGeometry(QRect(10, 30, 89, 16));
        qelabel_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_29->setDisplayAlarmState(false);
        qelabel_35 = new QELabel(ReadReg);
        qelabel_35->setObjectName(QStringLiteral("qelabel_35"));
        qelabel_35->setGeometry(QRect(102, 70, 57, 16));
        qelabel_35->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_35->setDisplayAlarmState(false);
        qelabel_35->setRadix(16u);
        qelabel_38 = new QELabel(ReadReg);
        qelabel_38->setObjectName(QStringLiteral("qelabel_38"));
        qelabel_38->setGeometry(QRect(102, 110, 57, 16));
        qelabel_38->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_38->setDisplayAlarmState(false);
        qelabel_38->setRadix(16u);
        qelabel_43 = new QELabel(ReadReg);
        qelabel_43->setObjectName(QStringLiteral("qelabel_43"));
        qelabel_43->setGeometry(QRect(186, 28, 89, 16));
        qelabel_43->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_43->setDisplayAlarmState(false);
        qelabel_60 = new QELabel(ReadReg);
        qelabel_60->setObjectName(QStringLiteral("qelabel_60"));
        qelabel_60->setGeometry(QRect(186, 148, 89, 16));
        qelabel_60->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_60->setDisplayAlarmState(false);
        qelabel_51 = new QELabel(ReadReg);
        qelabel_51->setObjectName(QStringLiteral("qelabel_51"));
        qelabel_51->setGeometry(QRect(186, 108, 89, 16));
        qelabel_51->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_51->setDisplayAlarmState(false);
        qelabel_66 = new QELabel(ReadReg);
        qelabel_66->setObjectName(QStringLiteral("qelabel_66"));
        qelabel_66->setGeometry(QRect(278, 168, 57, 16));
        qelabel_66->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_66->setDisplayAlarmState(false);
        qelabel_48 = new QELabel(ReadReg);
        qelabel_48->setObjectName(QStringLiteral("qelabel_48"));
        qelabel_48->setGeometry(QRect(278, 68, 57, 16));
        qelabel_48->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_48->setDisplayAlarmState(false);
        qelabel_68 = new QELabel(ReadReg);
        qelabel_68->setObjectName(QStringLiteral("qelabel_68"));
        qelabel_68->setGeometry(QRect(278, 210, 57, 16));
        qelabel_68->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_68->setDisplayAlarmState(false);
        qelabel_57 = new QELabel(ReadReg);
        qelabel_57->setObjectName(QStringLiteral("qelabel_57"));
        qelabel_57->setGeometry(QRect(278, 188, 57, 16));
        qelabel_57->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_57->setDisplayAlarmState(false);
        qelabel_57->setRadix(16u);
        qelabel_65 = new QELabel(ReadReg);
        qelabel_65->setObjectName(QStringLiteral("qelabel_65"));
        qelabel_65->setGeometry(QRect(186, 168, 89, 16));
        qelabel_65->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_65->setDisplayAlarmState(false);
        qelabel_44 = new QELabel(ReadReg);
        qelabel_44->setObjectName(QStringLiteral("qelabel_44"));
        qelabel_44->setGeometry(QRect(278, 28, 57, 16));
        qelabel_44->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_44->setDisplayAlarmState(false);
        qelabel_53 = new QELabel(ReadReg);
        qelabel_53->setObjectName(QStringLiteral("qelabel_53"));
        qelabel_53->setGeometry(QRect(186, 128, 89, 16));
        qelabel_53->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_53->setDisplayAlarmState(false);
        qelabel_49 = new QELabel(ReadReg);
        qelabel_49->setObjectName(QStringLiteral("qelabel_49"));
        qelabel_49->setGeometry(QRect(186, 88, 89, 16));
        qelabel_49->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_49->setDisplayAlarmState(false);
        qelabel_47 = new QELabel(ReadReg);
        qelabel_47->setObjectName(QStringLiteral("qelabel_47"));
        qelabel_47->setGeometry(QRect(186, 68, 89, 16));
        qelabel_47->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_47->setDisplayAlarmState(false);
        qelabel_67 = new QELabel(ReadReg);
        qelabel_67->setObjectName(QStringLiteral("qelabel_67"));
        qelabel_67->setGeometry(QRect(186, 210, 89, 16));
        qelabel_67->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_67->setDisplayAlarmState(false);
        qelabel_58 = new QELabel(ReadReg);
        qelabel_58->setObjectName(QStringLiteral("qelabel_58"));
        qelabel_58->setGeometry(QRect(186, 188, 89, 16));
        qelabel_58->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_58->setDisplayAlarmState(false);
        qelabel_45 = new QELabel(ReadReg);
        qelabel_45->setObjectName(QStringLiteral("qelabel_45"));
        qelabel_45->setGeometry(QRect(186, 48, 89, 16));
        qelabel_45->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_45->setDisplayAlarmState(false);
        qelabel_50 = new QELabel(ReadReg);
        qelabel_50->setObjectName(QStringLiteral("qelabel_50"));
        qelabel_50->setGeometry(QRect(278, 88, 57, 16));
        qelabel_50->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_50->setDisplayAlarmState(false);
        qelabel_52 = new QELabel(ReadReg);
        qelabel_52->setObjectName(QStringLiteral("qelabel_52"));
        qelabel_52->setGeometry(QRect(278, 108, 57, 16));
        qelabel_52->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_52->setDisplayAlarmState(false);
        qelabel_54 = new QELabel(ReadReg);
        qelabel_54->setObjectName(QStringLiteral("qelabel_54"));
        qelabel_54->setGeometry(QRect(278, 128, 57, 16));
        qelabel_54->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_54->setDisplayAlarmState(false);
        qelabel_46 = new QELabel(ReadReg);
        qelabel_46->setObjectName(QStringLiteral("qelabel_46"));
        qelabel_46->setGeometry(QRect(278, 48, 57, 16));
        qelabel_46->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_46->setDisplayAlarmState(false);
        qelabel_56 = new QELabel(ReadReg);
        qelabel_56->setObjectName(QStringLiteral("qelabel_56"));
        qelabel_56->setGeometry(QRect(278, 148, 57, 16));
        qelabel_56->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_56->setDisplayAlarmState(false);
        qelabel = new QELabel(ReadReg);
        qelabel->setObjectName(QStringLiteral("qelabel"));
        qelabel->setGeometry(QRect(24, 6, 81, 16));
        QFont font;
        font.setPointSize(12);
        qelabel->setFont(font);
        qelabel->setDisplayAlarmState(false);

        retranslateUi(ReadReg);

        QMetaObject::connectSlotsByName(ReadReg);
    } // setupUi

    void retranslateUi(QDialog *ReadReg)
    {
        ReadReg->setWindowTitle(QApplication::translate("ReadReg", "Dialog", 0));
        qelabel_39->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:FMOST.DESC", 0)));
        qelabel_39->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_41->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:ESTEP.DESC", 0)));
        qelabel_41->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_36->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RO:FWARE.DESC", 0)));
        qelabel_36->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_30->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RO:TEMP", 0)));
        qelabel_30->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_34->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RO:TYPE.DESC", 0)));
        qelabel_34->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_37->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:FEAT.DESC", 0)));
        qelabel_37->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_40->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:FMOST", 0)));
        qelabel_40->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_42->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:ESTEP", 0)));
        qelabel_42->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_33->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RO:TYPE", 0)));
        qelabel_33->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_29->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RO:TEMP.DESC", 0)));
        qelabel_29->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_35->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RO:FWARE", 0)));
        qelabel_35->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_38->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:FEAT", 0)));
        qelabel_38->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_43->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:MAXCA.DESC", 0)));
        qelabel_43->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_60->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:STPSZ.DESC", 0)));
        qelabel_60->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_51->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MAXA.DESC", 0)));
        qelabel_51->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_66->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:EACC", 0)));
        qelabel_66->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_48->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MINV", 0)));
        qelabel_48->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_68->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MAXD", 0)));
        qelabel_68->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_57->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:FEAT2", 0)));
        qelabel_57->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_65->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:EACC.DESC", 0)));
        qelabel_65->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_44->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:MAXCA", 0)));
        qelabel_44->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_53->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:ACCTH.DESC", 0)));
        qelabel_53->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_49->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MAXV.DESC", 0)));
        qelabel_49->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_47->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MINV.DESC", 0)));
        qelabel_47->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_67->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MAXD.DESC", 0)));
        qelabel_67->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_58->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:FEAT2.DESC", 0)));
        qelabel_58->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_45->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:MAXCB.DESC", 0)));
        qelabel_45->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_50->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MAXV", 0)));
        qelabel_50->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_52->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWR:MAXA", 0)));
        qelabel_52->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_54->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:ACCTH", 0)));
        qelabel_54->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_46->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:MAXCB", 0)));
        qelabel_46->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel_56->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):RWE:STPSZ", 0)));
        qelabel_56->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
        qelabel->setProperty("variable", QVariant(QApplication::translate("ReadReg", "$(P):LI:$(M)-$(N):DATA.DESC", 0)));
        qelabel->setProperty("variableSubstitutions", QVariant(QApplication::translate("ReadReg", "P=CHA,M=2531-1,N=2", 0)));
    } // retranslateUi

};

namespace Ui {
    class ReadReg: public Ui_ReadReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READREG_H
