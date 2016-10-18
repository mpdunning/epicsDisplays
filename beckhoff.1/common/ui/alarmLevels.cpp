#include <QtDebug>
#include "alarmLevels.h"

AlarmLevls::AlarmLevls(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  connect( closePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
AlarmLevls::~AlarmLevls(){}
void AlarmLevls::myClose(){
  close();
  emit closing();
}
