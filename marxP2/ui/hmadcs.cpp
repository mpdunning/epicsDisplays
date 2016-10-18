#include <QDebug>
#include "hmadcs.h"
#include "ui_hmadcs.h"

HMAdcsDialog::HMAdcsDialog(QWidget *parent):
	QDialog(parent), ui(new Ui::HMAdcsDialog){
  ui->setupUi(this);
  connect( ui->HMSelect,SIGNAL(returnPressed()),this,SLOT(enterPressed()));
}

HMAdcsDialog::~HMAdcsDialog(){ delete ui;}
void HMAdcsDialog::enterPressed(){
  QString subst("P="),txt;
  txt=ui->HMSelect->displayText();
  subst.append(txt);
  qDebug() << "have a enter pressed event,subst="<<subst<<", txt="<<txt;
  ui->asguiformplugin->setVariableNameSubstitutionsProperty( subst);
  ui->asguiformplugin->update();
}
