#include <QtDebug>
#include "adccoef4ch.h"

ADCCoef::ADCCoef(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  connect( closePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
ADCCoef::~ADCCoef(){}
void ADCCoef::myClose(){
  close();
  emit closing();
}
