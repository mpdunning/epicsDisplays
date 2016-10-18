#include <QtDebug>
#include <ContainerProfile.h>
#include "bk9000.h"
#include "bkhdebug.h"

BK9000::BK9000(QString title,QWidget *parent): QDialog(parent){
  ContainerProfile prof;
  _macros=prof.getMacroSubstitutions();
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  CouplerPB->setDefault(false);
  CouplerPB->setAutoDefault(false);
  if(_macros.isEmpty()){
    _macros.append("P=CHA,N=2");
    prof.addMacroSubstitutions(_macros);
  }
 _bkhdebug=0;
  connect( CouplerPB,SIGNAL(clicked(bool)),SLOT(myClose()));
  connect(couplerQEF,SIGNAL(formLoaded(bool)),SLOT(cplrQEFReady(bool)));
  prof.releaseProfile();
}
BK9000::~BK9000(){
  if(_bkhdebug) delete _bkhdebug;
}
void BK9000::cplrQEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"BK9000::cplrQEFReady: failed to load";
    return;
  }
  _dbgPB=(QPushButton*)couplerQEF->getChild("dbgPB");
  if(!_dbgPB) qDebug()<<"BK9000::debugQEFReady: not found";
  else connect( _dbgPB,SIGNAL(clicked()),SLOT(_showDebug()));
 }
void BK9000::_showDebug(){
  if(!_bkhdebug){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macros);
    _bkhdebug=new BkhDebug( "Beckhoff Debug Functions",this);
    prof.releaseProfile();
  }
  if(_bkhdebug) _bkhdebug->show();
}
void BK9000::myClose(){
  close();
  emit closing();
}
