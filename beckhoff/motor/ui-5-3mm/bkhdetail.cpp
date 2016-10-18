#include <QDebug>
#include "ContainerProfile.h"
#include "bkhdetail.h"
#include "adccoef2ch.h"
#include "bkhdebug.h"

BkhDetail::BkhDetail( QString title,QWidget* parent): QDialog(parent){
/*-----------------------------------------------------------------------------
 *---------------------------------------------------------------------------*/
  ContainerProfile prof; QStringList mlist;
  QString str,pmac,nmac,amac,bmac,dmac,emac,xmac,ymac,zmac;
  _macros=prof.getMacroSubstitutions();
  mlist=_macros.split(QChar(','));
  for( int i=0; i<mlist.size(); i++){
    str=mlist.at(i);
    if(str.contains("P")) pmac.append(str);
    if(str.contains("N")) nmac.append(str);
    if(str.contains("A1")) amac.append(str);
    if(str.contains("A2")) bmac.append(str);
    if(str.contains("D1")) dmac.append(str);
    if(str.contains("D2")) emac.append(str);
    if(str.contains("M1")) xmac.append(str);
    if(str.contains("M2")) ymac.append(str);
    if(str.contains("M3")) zmac.append(str);
  }
  _macadc1.append(pmac).append(",").append(amac).append(",").append(nmac);
  _macadc1=_macadc1.replace("A1","R");
  _macadc2.append(pmac).append(",").append(bmac).append(",").append(nmac);
  _macadc2=_macadc2.replace("A2","R");
qDebug()<<"BkhDetail: macros="<<_macros;
qDebug()<<"BkhDetail: macadc1="<<_macadc1;
qDebug()<<"BkhDetail: macadc2="<<_macadc2;
  ui=new Ui::BkhDetail;
  ui->setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  ui->closePB->setDefault(false);
  ui->closePB->setAutoDefault(false);
  _dbg=0; _coef1=_coef2=0;
  connect(ui->adcDac1QEF,SIGNAL(formLoaded(bool)),SLOT(adcDac1QEFReady(bool)));
  connect(ui->adcDac2QEF,SIGNAL(formLoaded(bool)),SLOT(adcDac2QEFReady(bool)));
  connect(ui->couplerQEF,SIGNAL(formLoaded(bool)),SLOT(couplerQEFReady(bool)));
  connect( ui->closePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
BkhDetail::~BkhDetail(){
  delete ui;
  if(_coef1) delete _coef1;
  if(_coef2) delete _coef2;
  if(_dbg) delete _dbg;
}
void BkhDetail::adcDac1QEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"BkhDetai::adcDac1QEFReady: failed to load";
    return;
  }
  _adcCPB1=(QPushButton*)ui->adcDac1QEF->getChild("adcCoefPB");
  if(!_adcCPB1) qDebug()<<"BkhDetail::adcDac1QEFReady: not found";
  else connect( _adcCPB1,SIGNAL(clicked()),SLOT(_showCoeff1()));
 }
void BkhDetail::adcDac2QEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"BkhDetai::adcDac2QEFReady: failed to load";
    return;
  }
  _adcCPB2=(QPushButton*)ui->adcDac2QEF->getChild("adcCoefPB");
  if(!_adcCPB2) qDebug()<<"BkhDetail::adcDac2QEFReady: not found";
  else connect( _adcCPB2,SIGNAL(clicked()),SLOT(_showCoeff2()));
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
void BkhDetail::_showCoeff1(){
  if(!_coef1){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macadc1);
    _coef1=new ADCCoef( "ADC1 Coefficients",this);
    prof.releaseProfile();
  }
 if(_coef1) _coef1->show();
}
void BkhDetail::_showCoeff2(){
  if(!_coef2){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macadc2);
    _coef2=new ADCCoef( "ADC2 Coefficients",this);
    prof.releaseProfile();
  }
 if(_coef2) _coef2->show();
}
void BkhDetail::myClose(){
  close();
  emit closing();
}
