#include <QtDebug>
#include "setupadc.h"
#include "ui_setupadc.h"

SetupADC::SetupADC(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  adpClosePB->setDefault(false);
  adpClosePB->setAutoDefault(false);
  connect( adpClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
SetupADC::~SetupADC(){}

void SetupADC::myClose(){
  close();
  emit closing();
}
