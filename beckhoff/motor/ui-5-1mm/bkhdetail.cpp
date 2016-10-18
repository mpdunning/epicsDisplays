#include <QDebug>
#include "ContainerProfile.h"
#include "bkhdetail.h"
#include "bkhdebug.h"

BkhDetail::BkhDetail( QString title,QWidget* parent): QDialog(parent){
/*-----------------------------------------------------------------------------
 *---------------------------------------------------------------------------*/
  ContainerProfile prof;
  _macros=prof.getMacroSubstitutions();
  ui=new Ui::BkhDetail;
  ui->setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  ui->closePB->setDefault(false);
  ui->closePB->setAutoDefault(false);
  _dbg=0;
  connect(ui->couplerQEF,SIGNAL(formLoaded(bool)),SLOT(couplerQEFReady(bool)));
  connect( ui->closePB,SIGNAL(clicked(bool)),SLOT(myClose()));
  prof.releaseProfile();
}
BkhDetail::~BkhDetail(){
  delete ui;
  if(_dbg) delete _dbg;
}
void BkhDetail::couplerQEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"BkhDetai::couplerQEFReady: failed to load";
    return;
  }
  _dbgPB=(QPushButton*)ui->couplerQEF->getChild("dbgPB");
  if(!_dbgPB) qDebug()<<"BkhDetail::debugQEFReady: not found";
  else connect( _dbgPB,SIGNAL(clicked()),SLOT(_showDebug()));
 }
void BkhDetail::_showDebug(){
  if(!_dbg){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macros);
    _dbg=new BkhDebug( "Beckhoff Detail",this);
    prof.releaseProfile();
  }
 if(_dbg) _dbg->show();
}
void BkhDetail::myClose(){
  close();
  emit closing();
}
