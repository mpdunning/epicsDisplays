#include <QDebug>
#include "ContainerProfile.h"
#include "motorctrl.h"
#include "motorcoef.h"

MotorCtrl::MotorCtrl( QString title,QWidget* parent): QDialog(parent){
/*-----------------------------------------------------------------------------
 *---------------------------------------------------------------------------*/
  ContainerProfile prof;
  _macros=prof.getMacroSubstitutions();
//  prof.setupProfile( this,QStringList(),"","");
  ui=new Ui::MotorCtrl;
  ui->setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  ui->ctrlClosePB->setDefault(false);
  ui->ctrlClosePB->setAutoDefault(false);
  _mcf=0;
  connect( ui->coefMPB,SIGNAL(clicked(bool)),this,SLOT(_showMCoef()));
  connect( ui->ctrlClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
  prof.releaseProfile();
}
MotorCtrl::~MotorCtrl(){
  delete ui;
  if(_mcf) delete _mcf;
}
void MotorCtrl::_closeMCoef(){
  if(_mcf) delete _mcf;
  _mcf=0;
}
void MotorCtrl::_showMCoef(){
  if(!_mcf){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"","");
    prof.addMacroSubstitutions( _macros);
    _mcf=new MotorCoef( windowTitle(),this);
    connect( _mcf,SIGNAL(closing()),this,SLOT(_closeMCoef()));
    prof.releaseProfile();
  }
 if(_mcf) _mcf->show();
}
void MotorCtrl::myClose(){
  close();
  emit closing();
}
