#include <QtDebug>
#include "writeeep.h"

WriteEEP::WriteEEP(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  weClosePB->setDefault(false);
  weClosePB->setAutoDefault(false);
  connect( weClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
WriteEEP::~WriteEEP(){}
void WriteEEP::myClose(){
  close();
  emit closing();
}

