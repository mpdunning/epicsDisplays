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
  STOP_PB->setDefault(false);
  STOP_PB->setAutoDefault(false);
  connect( DenyGOQELB,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goMValChange(const QString&)));
  connect( DenyFOQELB,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foMValChange(const QString&)));
  connect( DenyRVQELB,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvMValChange(const QString&)));
  connect( mClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
Motor::~Motor(){}
void Motor::goMValChange( const QString& v){
  if(v.contains("Allow")) GO_PB->setRunVisible(true);
  else GO_PB->setRunVisible(false);
}
void Motor::foMValChange( const QString& v){
  if(v.contains("Allow")) FOR_PB->setRunVisible(true);
  else FOR_PB->setRunVisible(false);
}
void Motor::rvMValChange( const QString& v){
  if(v.contains("Allow")) REV_PB->setRunVisible(true);
  else REV_PB->setRunVisible(false);
}
void Motor::myClose(){
  close();
  emit closing();
}
