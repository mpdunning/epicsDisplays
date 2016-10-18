#include <QtDebug>
#include "feature.h"
#include "ui_feature.h"

Feature::Feature(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  featClosePB->setDefault(false);
  featClosePB->setAutoDefault(false);
  connect( featClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
Feature::~Feature(){}

void Feature::myClose(){
  close();
  emit closing();
}
