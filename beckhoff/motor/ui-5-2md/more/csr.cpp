#include <QtDebug>
#include "csr.h"
#include "ui_csr.h"

CSR::CSR(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  csrClosePB->setDefault(false);
  csrClosePB->setAutoDefault(false);
  connect( csrClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
CSR::~CSR(){}

void CSR::myClose(){
  close();
  emit closing();
}
