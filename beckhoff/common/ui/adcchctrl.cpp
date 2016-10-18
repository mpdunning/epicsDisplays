#include <QtDebug>
#include "adcchctrl.h"
#include "ui_adcchctrl.h"

AdcChCtrl::AdcChCtrl(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  connect( closePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
AdcChCtrl::~AdcChCtrl(){}
void AdcChCtrl::myClose(){
  close();
  emit closing();
}
