#include <QDebug>
#include "bkhdetail.h"
#include "adccoef.h"
#include "bkhdebug.h"

BkhDetail::BkhDetail( QString title,QWidget* parent): QDialog(parent){
/*-----------------------------------------------------------------------------
 *---------------------------------------------------------------------------*/
  ui=new Ui::BkhDetail;
  ui->setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  ui->closePB->setDefault(false);
  ui->closePB->setAutoDefault(false);
  _dbg=0; _coef=0;
  connect( ui->coefADCPB,SIGNAL(clicked(bool)),this,SLOT(_showCoeff()));
  connect( ui->debugPB,SIGNAL(clicked(bool)),this,SLOT(_showDebug()));
  connect( ui->closePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
}
BkhDetail::~BkhDetail(){
  delete ui;
  if(_coef) delete _coef;
  if(_dbg) delete _dbg;
}
void BkhDetail::_closeDebug(){
  if(_dbg) delete _dbg;
  _dbg=0;
}
void BkhDetail::_showDebug(){
  if(!_dbg){
    _dbg=new BkhDebug( "Beckhoff Detail",this);
    connect( _dbg,SIGNAL(closing()),this,SLOT(_closeDebug()));
  }
 if(_dbg) _dbg->show();
}
void BkhDetail::_closeCoeff(){
  if(_coef) delete _coef;
  _coef=0;
}
void BkhDetail::_showCoeff(){
  if(!_coef){
    _coef=new ADCCoef( "ADC Coefficients",this);
    connect( _coef,SIGNAL(closing()),this,SLOT(_closeCoeff()));
  }
 if(_coef) _coef->show();
}
void BkhDetail::myClose(){
  close();
  emit closing();
}
