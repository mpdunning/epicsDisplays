#include <QtDebug>
#include "writeram.h"
#include "ui_writeram.h"

WriteRam::WriteRam(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  wrClosePB->setDefault(false);
  wrClosePB->setAutoDefault(false);
  connect( wrClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
WriteRam::~WriteRam(){}
void WriteRam::myClose(){
  close();
  emit closing();
}

