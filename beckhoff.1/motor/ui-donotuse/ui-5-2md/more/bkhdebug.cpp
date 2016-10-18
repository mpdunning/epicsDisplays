#include <QtDebug>
#include "bkhdebug.h"
#include "ui_bkhdebug.h"

BkhDebug::BkhDebug(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  dbgClosePB->setDefault(false);
  dbgClosePB->setAutoDefault(false);
  connect( dbgClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
BkhDebug::~BkhDebug(){}

void BkhDebug::myClose(){
  close();
  emit closing();
}
