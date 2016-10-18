#include <QtDebug>
#include "motorcoef.h"
#include "ui_motorcoef.h"

MotorCoef::MotorCoef(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  connect( closePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
MotorCoef::~MotorCoef(){}
void MotorCoef::myClose(){
  close();
  emit closing();
}
