#include <QtDebug>
#include "adccoef2ch.h"
#include "ui_adccoef2ch.h"

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
