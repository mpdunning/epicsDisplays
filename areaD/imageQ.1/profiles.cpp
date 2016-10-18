#include <QtDebug>
#include <ContainerProfile.h>
#include "profiles.h"

ProfDlg::ProfDlg(QString title,QWidget *parent): QDialog(parent){
  QStringList nullList; QString macro;
  ContainerProfile prof;
  macro=prof.getMacroSubstitutions();
qDebug()<<"ProfDlg:: macro="<<macro;
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
ProfDlg::~ProfDlg(){
}
void ProfDlg::myClose(){
  close();
  emit closing();
}
