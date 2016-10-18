#include <QDebug>
#include "ContainerProfile.h"
#include "bkhdetail.h"
#include "adccoef2ch.h"
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
  _dbg=0; _coef=0;
  connect(ui->adcDacQEF,SIGNAL(formLoaded(bool)),SLOT(adcDacQEFReady(bool)));
  connect(ui->couplerQEF,SIGNAL(formLoaded(bool)),SLOT(couplerQEFReady(bool)));
  connect( ui->closePB,SIGNAL(clicked(bool)),SLOT(myClose()));
  prof.releaseProfile();
}
BkhDetail::~BkhDetail(){
  delete ui;
  if(_coef) delete _coef;
  if(_dbg) delete _dbg;
}
void BkhDetail::adcDacQEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"BkhDetai::adcDacQEFReady: failed to load";
    return;
  }
  _adcCPB=(QPushButton*)ui->adcDacQEF->getChild("adcCoefPB");
  if(!_adcCPB) qDebug()<<"BkhDetail::adcDacQEFReady: not found";
  else connect( _adcCPB,SIGNAL(clicked()),SLOT(_showCoeff()));
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
void BkhDetail::_showCoeff(){
  if(!_coef){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macros);
    _coef=new ADCCoef( "ADC Coefficients",this);
    prof.releaseProfile();
  }
 if(_coef) _coef->show();
}
void BkhDetail::myClose(){
  close();
  emit closing();
}
