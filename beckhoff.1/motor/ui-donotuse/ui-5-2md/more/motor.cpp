#include <QtDebug>
#include "motor.h"
#include "ui_motor.h"

Motor::Motor(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  mClosePB->setDefault(false);
  mClosePB->setAutoDefault(false);
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
  connect( mClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
  connect( Deny_QELB,SIGNAL(dbValueChanged(const QString&)),this,
			SLOT(_valueChanged( const QString&)));
}
Motor::~Motor(){}
void Motor::_valueChanged( const QString& val){
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
void Motor::myClose(){
  qDebug()<<"Motor::myClose: emit signal";
  close();
  emit closing();
}
