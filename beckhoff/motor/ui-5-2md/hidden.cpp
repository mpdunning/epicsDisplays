#include <QtDebug>
#include "hidden.h"
#include "ui_hidden.h"

Hidden::Hidden(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  hidClosePB->setDefault(false);
  hidClosePB->setAutoDefault(false);
  connect( hidClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
Hidden::~Hidden(){}

void Hidden::myClose(){
  close();
  emit closing();
}
