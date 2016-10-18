#include <QtDebug>
#include "motor.h"

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
  STOP_PB->setDefault(false);
  STOP_PB->setAutoDefault(false);
  connect( mClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
  connect( DenyGOQELB,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goValChange(const QString&)));
  connect( DenyFOQELB,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foValChange(const QString&)));
  connect( DenyRVQELB,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvValChange(const QString&)));
}
Motor::~Motor(){}
void Motor::goValChange( const QString& v){
  if(v.contains("Allow")) GO_PB->setRunVisible(true);
  else GO_PB->setRunVisible(false);
}
void Motor::foValChange( const QString& v){
  if(v.contains("Allow")) FOR_PB->setRunVisible(true);
  else FOR_PB->setRunVisible(false);
}
void Motor::rvValChange( const QString& v){
  if(v.contains("Allow")) REV_PB->setRunVisible(true);
  else REV_PB->setRunVisible(false);
}
void Motor::myClose(){
  qDebug()<<"Motor::myClose: emit signal";
  close();
  emit closing();
}
