#include <QtDebug>
#include <ContainerProfile.h>
#include "adccoef.h"
#include "adcdac2m.h"

AdcDac::AdcDac(QString title,QWidget *parent): QDialog(parent){
  QStringList nullList;
  ContainerProfile prof;
  _macros=prof.getMacroSubstitutions();
qDebug()<<"AdcDac:: macros="<<_macros;
  if(_macros.isEmpty()){
    _macros.append("P=CHA,R=3132,T=4132,N=2");
    prof.addMacroSubstitutions(_macros);
  }
  _coef=NULL;
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  adcClosePB->setDefault(false);
  adcClosePB->setAutoDefault(false);
  connect( adcClosePB,SIGNAL(clicked(bool)),SLOT(myClose()));
  connect( adcDacQEF,SIGNAL(formLoaded(bool)),SLOT(adcQEFReady(bool)));
  prof.releaseProfile();
}
AdcDac::~AdcDac(){
}
void AdcDac::adcQEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"AdcDac::adcQEFReady: failed to load";
    return;
  }
  _adcPB=(QPushButton*)adcDacQEF->getChild("adcCoefPB");
  if(!_adcPB) qDebug()<<"AdcDac::adcQEFReady: not found";
  else connect( _adcPB,SIGNAL(clicked()),SLOT(_showCoeff()));
}
void AdcDac::_showCoeff(){
  if(!_coef){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macros);
    _coef=new ADCCoef( "ADC Coefficients",this);
    prof.releaseProfile();
  }
  if(_coef) _coef->show();
}
void AdcDac::myClose(){
  close();
  emit closing();
}
