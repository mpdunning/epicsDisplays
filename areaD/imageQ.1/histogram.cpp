#include <QtDebug>
#include <ContainerProfile.h>
#include "histogram.h"

HistoDlg::HistoDlg(QString title,QWidget *parent): QDialog(parent){
  QStringList nullList; QString macro;
  ContainerProfile prof;
  macro=prof.getMacroSubstitutions();
qDebug()<<"HistoDlg:: macro="<<macro;
  if(macro.isEmpty()){
    macro.append("P=CPS1");
    prof.addMacroSubstitutions(macro);
  }
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  ClosePB->setDefault(false);
  ClosePB->setAutoDefault(false);
  connect( ClosePB,SIGNAL(clicked(bool)),SLOT(myClose()));
  prof.releaseProfile();
}
HistoDlg::~HistoDlg(){
}
void HistoDlg::myClose(){
  close();
  emit closing();
}
