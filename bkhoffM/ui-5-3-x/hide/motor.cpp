#include <QtDebug>
#include "motorCtrl.h"
#include "ui_motorCtrl.h"

MotorCtrl::MotorCtrl(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  qDebug()<<mctrlClosePB->objectName()<<mctrlClosePB->isDefault()
	<<mctrlClosePB->autoDefault();
  mctrlClosePB->setDefault(false);
  mctrlClosePB->setAutoDefault(false);
  FOR_PB->setDefault(false);
  FOR_PB->setAutoDefault(false);
  REV_PB->setDefault(false);
  REV_PB->setAutoDefault(false);
  GO_PB->setDefault(false);
  GO_PB->setAutoDefault(false);
  LIM_PB->setDefault(false);
  LIM_PB->setAutoDefault(false);
  STOP_PB->setDefault(false);
  STOP_PB->setAutoDefault(false);
  connect( mctrlClosePB,SIGNAL(clicked(bool)),this,SLOT(close()));
  connect( Deny_QELB,SIGNAL(dbValueChanged(const QString&)),this,
			SLOT(_valueChanged( const QString&)));
  qDebug()<<mctrlClosePB->objectName()<<mctrlClosePB->isDefault()
	<<mctrlClosePB->autoDefault();
}
MotorCtrl::~MotorCtrl(){}
void MotorCtrl::_valueChanged( const QString& val){
  qDebug()<<"_valueChanged: val="<<val;
  if(val.contains("Deny")){
    GO_PB->setEnabled(false);
    REV_PB->setEnabled(false);
    FOR_PB->setEnabled(false);
  }
  else if(val.contains("Allow")){
    GO_PB->setEnabled(true);
    REV_PB->setEnabled(true);
    FOR_PB->setEnabled(true);
  }
  else{
    qDebug()<<"_valueChanged:"<<val<<"unrecognized";
  }
}
