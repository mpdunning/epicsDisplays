#include <QtDebug>
#include "bk9000.h"
#include "bkhdebug.h"
#include "ui_bk9000.h"

BK9000::BK9000(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  bkClosePB->setDefault(false);
  bkClosePB->setAutoDefault(false);
  _macro.append("P=CHA,N=2");
  _prof=new ContainerProfile;
 _bkhdebug=0;
  connect( bkClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
  connect( debugPB,SIGNAL(clicked(bool)),this,SLOT(_showDebug()));
}
BK9000::~BK9000(){
  if(_bkhdebug) delete _bkhdebug;
}
void BK9000::_showDebug(){
  if(!_bkhdebug){
    _prof->addMacroSubstitutions( _macro);
    _bkhdebug=new BkhDebug( "Beckhoff Debug Functions",this);
    _prof->removeMacroSubstitutions();
    connect( _bkhdebug,SIGNAL(closing()),this,SLOT(_closeDebug()));
  }
  if(_bkhdebug) _bkhdebug->show();
}
void BK9000::_closeDebug(){
  if(_bkhdebug) delete _bkhdebug;
  _bkhdebug=0;
}

void BK9000::myClose(){
  close();
  emit closing();
}
