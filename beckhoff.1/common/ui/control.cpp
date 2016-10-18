#include <QtDebug>
#include "control.h"

Control::Control(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  ctrlClosePB->setDefault(false);
  ctrlClosePB->setAutoDefault(false);
  connect( ctrlClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
Control::~Control(){}

void Control::myClose(){
  close();
  emit closing();
}
