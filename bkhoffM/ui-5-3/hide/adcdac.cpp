#include <QtDebug>
#include "adcdac.h"
#include "setupadc.h"
#include "ui_adcdac.h"

AdcDac::AdcDac(QString title,QWidget *parent): QDialog(parent){
  QStringList nullList;
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  adClosePB->setDefault(false);
  adClosePB->setAutoDefault(false);
  _setupadc1=_setupadc2=0;
  _macro1.append("P=CHA,R=3132,N=2,C=1");
  _macro2.append("P=CHA,R=3132,N=2,C=2");
  _prof=new ContainerProfile;
  _prof->setupProfile( NULL,nullList,"","");
  connect( adClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
  connect( adcCh1PB,SIGNAL(clicked(bool)),this,SLOT(_showSetupAdc1()));
  connect( adcCh2PB,SIGNAL(clicked(bool)),this,SLOT(_showSetupAdc2()));
  connect( adcCh1Lbl,SIGNAL(dbValueChanged(const QString&)),this,
                        SLOT(_newValue1( const QString&)));
  connect( adcCh2Lbl,SIGNAL(dbValueChanged(const QString&)),this,
                        SLOT(_newValue2( const QString&)));
  connect( dacCh1Lbl,SIGNAL(dbValueChanged(const QString&)),this,
                        SLOT(_newValue3( const QString&)));
  connect( dacCh2Lbl,SIGNAL(dbValueChanged(const QString&)),this,
                        SLOT(_newValue4( const QString&)));
}
AdcDac::~AdcDac(){
  if(_setupadc1) delete _setupadc1;
  if(_setupadc2) delete _setupadc2;
}
void AdcDac::_newValue1( const QString& text){
  adcCh1PB->setText(text);
  adcCh1PB->setStyleSheet(QString("color:#00007f"));
}
void AdcDac::_newValue2( const QString& text){
  adcCh2PB->setText(text);
  adcCh2PB->setStyleSheet(QString("color:#00007f"));
}
void AdcDac::_newValue3( const QString& text){
  dacCh1PB->setText(text);
  dacCh1PB->setStyleSheet(QString("color:#00007f"));
}
void AdcDac::_newValue4( const QString& text){
  dacCh2PB->setText(text);
  dacCh2PB->setStyleSheet(QString("color:#00007f"));
}
void AdcDac::_showSetupAdc1(){
  if(!_setupadc1){
    _prof->addMacroSubstitutions( _macro1);
    _setupadc1=new SetupADC( "Setup ADC for Motor X",this);
    _prof->removeMacroSubstitutions();
    connect( _setupadc1,SIGNAL(closing()),this,SLOT(_closeSAdc1()));
  }
  if(_setupadc1) _setupadc1->show();
}
void AdcDac::_closeSAdc1(){
  if(_setupadc1) delete _setupadc1;
  _setupadc1=0;
}
void AdcDac::_showSetupAdc2(){
  if(!_setupadc2){
    _prof->addMacroSubstitutions( _macro2);
    _setupadc2=new SetupADC( "Setup ADC for Motor Y",this);
    _prof->removeMacroSubstitutions();
    connect( _setupadc2,SIGNAL(closing()),this,SLOT(_closeSAdc2()));
  }
  if(_setupadc2) _setupadc2->show();
}
void AdcDac::_closeSAdc2(){
  if(_setupadc2) delete _setupadc2;
  _setupadc2=0;
}
void AdcDac::myClose(){
  close();
  emit closing();
}
