#include <QtDebug>
#include "readreg.h"
#include "ui_readreg.h"

ReadReg::ReadReg(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  rrClosePB->setDefault(false);
  rrClosePB->setAutoDefault(false);
  connect( rrClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
ReadReg::~ReadReg(){}
void ReadReg::myClose(){
  close();
  emit closing();
}

