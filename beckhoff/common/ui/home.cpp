#include <QtDebug>
#include "home.h"

Home::Home(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  hmClosePB->setDefault(false);
  hmClosePB->setAutoDefault(false);
  connect( hmClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
Home::~Home(){}

void Home::myClose(){
  close();
  emit closing();
}
