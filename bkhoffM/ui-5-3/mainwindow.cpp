#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"
#include "motor.h"
#include "control.h"
#include "csr.h"
#include "feature.h"
#include "readreg.h"
#include "writeeep.h"
#include "writeram.h"
#include "adcdac.h"
#include "hidden.h"
#include "bk9000.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
/*-----------------------------------------------------------------------------
 * First argument is a "list" of macro replacements.  It is of the form:
 * "P=<val>,Q1=<val>,Q2=<val>,R=<val>,T=<val>,N=<val>"
 * If macro replacements are supplied as a command line argument, then all
 * five components must be supplied.  If macro replacements are not supplied,
 * then default values, see below, are used.
 * Note, that the program is launched as follows:
 * <program name> [-m "<macro string>"]
 *---------------------------------------------------------------------------*/
  QStringList nullList; QStringList mlist; QString macro; QString str; int i;
  _haveM=0;
  if(pm){
    macro.append(pm);
    _haveM=1;
    mlist=macro.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P")) _pmac.append(str);
      if(str.contains("N")) _nmac.append(str);
      if(str.contains("R")) _rmac.append(str);
      if(str.contains("T")) _tmac.append(str);
      if(str.contains("Q1")) _q1mac=str.replace(0,2,"Q");
      if(str.contains("Q2")) _q2mac=str.replace(0,2,"Q");
    }
    qDebug()<<"MainWIndow: macro="<<macro;
  }
  else{
    _pmac.append("P=CHA");
    _nmac.append("N=2");
    _rmac.append("R=3132");
    _tmac.append("T=4132");
    _q1mac.append("Q=2531-1");
    _q2mac.append("Q=2531-2");
  }
  ContainerProfile prof;
  prof.setupProfile( this,QStringList(),"","");
  setupUi(this);
  _macro1.append(_pmac).append(",").append(_q1mac).append(",");
  _macro1.append(_rmac).append(",").append(_nmac).append(",C=1");
  _macro2.append(_pmac).append(",").append(_q2mac).append(",");
  _macro2.append(_rmac).append(",").append(_nmac).append(",C=2");
  _macro3.append(_pmac).append(",").append(_rmac).append(",");
  _macro3.append(_tmac).append(",").append(_nmac);
  _motorx=_motory=0;
  _controlx=_controly=0;
  _csrx=_csry=0;
  _featurex=_featurey=0;
  _readregx=_readregy=0;
  _writeeepx=_writeeepy=0;
  _writeramx=_writeramy=0;
  _adcdac=0; _hidden=0; _bk9000=0;

  connect( xMotorPB,SIGNAL(clicked(bool)),this,SLOT(_showMotorX()));
  connect( yMotorPB,SIGNAL(clicked(bool)),this,SLOT(_showMotorY()));
  connect( xCtrlPB,SIGNAL(clicked(bool)),this,SLOT(_showControlX()));
  connect( yCtrlPB,SIGNAL(clicked(bool)),this,SLOT(_showControlY()));
  connect( xCSRPB,SIGNAL(clicked(bool)),this,SLOT(_showCsrX()));
  connect( yCSRPB,SIGNAL(clicked(bool)),this,SLOT(_showCsrY()));
  connect( xFeaturePB,SIGNAL(clicked(bool)),this,SLOT(_showFeatureX()));
  connect( yFeaturePB,SIGNAL(clicked(bool)),this,SLOT(_showFeatureY()));
  connect( xRRegsPB,SIGNAL(clicked(bool)),this,SLOT(_showReadRegX()));
  connect( yRRegsPB,SIGNAL(clicked(bool)),this,SLOT(_showReadRegY()));
  connect( xWtEEPPB,SIGNAL(clicked(bool)),this,SLOT(_showWriteEEPX()));
  connect( yWtEEPPB,SIGNAL(clicked(bool)),this,SLOT(_showWriteEEPY()));
  connect( xWtRamPB,SIGNAL(clicked(bool)),this,SLOT(_showWriteRamX()));
  connect( yWtRamPB,SIGNAL(clicked(bool)),this,SLOT(_showWriteRamY()));

  connect( AdcDacPB,SIGNAL(clicked(bool)),this,SLOT(_showAdcDac()));
  connect( hiddenPB,SIGNAL(clicked(bool)),this,SLOT(_showHidden()));
  connect( couplerPB,SIGNAL(clicked(bool)),this,SLOT(_showBK9000()));

  connect(actionExit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  prof.releaseProfile();
}
MainWindow::~MainWindow(){
  if(_motorx) delete _motorx;
  if(_motory) delete _motory;
  if(_controlx) delete _controlx;
  if(_controly) delete _controly;
  if(_csrx) delete _csrx;
  if(_csry) delete _csry;
  if(_featurex) delete _featurex;
  if(_featurey) delete _featurey;
  if(_readregx) delete _readregx;
  if(_readregy) delete _readregy;
  if(_writeeepx) delete _writeeepx;
  if(_writeeepy) delete _writeeepy;
  if(_writeramx) delete _writeramx;
  if(_writeramy) delete _writeramy;
  if(_adcdac) delete _adcdac;
  if(_hidden) delete _hidden;
  if(_bk9000) delete _bk9000;
}
void MainWindow::_csrCloseX(){
  if(_csrx) delete _csrx;
  _csrx=0;
}
void MainWindow::_csrCloseY(){
  if(_csry) delete _csry;
  _csry=0;
}
void MainWindow::_ctrlCloseX(){
  if(_controlx) delete _controlx;
  _controlx=0;
}
void MainWindow::_ctrlCloseY(){
  if(_controly) delete _controly;
  _controly=0;
}
void MainWindow::_featureCloseX(){
  if(_featurex) delete _featurex;
  _featurex=0;
}
void MainWindow::_featureCloseY(){
  if(_featurey) delete _featurey;
  _featurey=0;
}
void MainWindow::_motorCloseX(){
  if(_motorx) delete _motorx;
  _motorx=0;
}
void MainWindow::_motorCloseY(){
  if(_motory) delete _motory;
  _motory=0;
}
void MainWindow::_readRCloseX(){
  if(_readregx) delete _readregx;
  _readregx=0;
}
void MainWindow::_readRCloseY(){
  if(_readregy) delete _readregy;
  _readregy=0;
}
void MainWindow::_weCloseX(){
  if(_writeeepx) delete _writeeepx;
  _writeeepx=0;
}
void MainWindow::_weCloseY(){
  if(_writeeepy) delete _writeeepy;
  _writeeepy=0;
}
void MainWindow::_wrCloseX(){
  if(_writeramx) delete _writeramx;
  _writeramx=0;
}
void MainWindow::_wrCloseY(){
  if(_writeramy) delete _writeramy;
  _writeramy=0;
}
void MainWindow::_adClose(){
  if(_adcdac) delete _adcdac;
  _adcdac=0;
}
void MainWindow::_hidClose(){
  if(_hidden) delete _hidden;
  _hidden=0;
}
void MainWindow::_bkClose(){
  if(_bk9000) delete _bk9000;
  _bk9000=0;
}

void MainWindow::_showMotorX(){
  if(!_motorx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _motorx=new Motor( "Motor X",this);
    prof.releaseProfile();
    connect( _motorx,SIGNAL(closing()),this,SLOT(_motorCloseX()));
  }
 if(_motorx) _motorx->show();
}
void MainWindow::_showMotorY(){
  if(!_motory){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _motory=new Motor( "Motor Y",this);
    prof.releaseProfile();
    connect( _motory,SIGNAL(closing()),this,SLOT(_motorCloseY()));
  }
  if(_motory) _motory->show();
}
void MainWindow::_showControlX(){
  if(!_controlx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _controlx=new Control( "Control Motor X",this);
    prof.releaseProfile();
    connect( _controlx,SIGNAL(closing()),this,SLOT(_ctrlCloseX()));
  }
  if(_controlx) _controlx->show();
}
void MainWindow::_showControlY(){
  if(!_controly){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _controly=new Control( "Control Motor Y",this);
    prof.releaseProfile();
    connect( _controly,SIGNAL(closing()),this,SLOT(_ctrlCloseY()));
  }
  if(_controly) _controly->show();
}
void MainWindow::_showCsrX(){
  if(!_csrx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _csrx=new CSR( "CSR Motor X",this);
    prof.releaseProfile();
    connect( _csrx,SIGNAL(closing()),this,SLOT(_csrCloseX()));
  }
  if(_csrx) _csrx->show();
}
void MainWindow::_showCsrY(){
  if(!_csry){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _csry=new CSR( "CSR Motor Y",this);
    prof.releaseProfile();
    connect( _csry,SIGNAL(closing()),this,SLOT(_csrCloseY()));
  }
  if(_csry) _csry->show();
}
void MainWindow::_showFeatureX(){
  if(!_featurex){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _featurex=new Feature( "Feature Motor X",this);
    prof.releaseProfile();
    connect( _featurex,SIGNAL(closing()),this,SLOT(_featureCloseX()));
  }
  if(_featurex) _featurex->show();
}
void MainWindow::_showFeatureY(){
  if(!_featurey){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _featurey=new Feature( "Feature Motor Y",this);
    prof.releaseProfile();
    connect( _featurey,SIGNAL(closing()),this,SLOT(_featureCloseY()));
  }
  if(_featurey) _featurey->show();
}
void MainWindow::_showReadRegX(){
  if(!_readregx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _readregx=new ReadReg( "Read Reg Motor X",this);
    prof.releaseProfile();
    connect( _readregx,SIGNAL(closing()),this,SLOT(_readRCloseX()));
  }
  if(_readregx) _readregx->show();
}
void MainWindow::_showReadRegY(){
  if(!_readregy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _readregy=new ReadReg( "Read Reg Motor Y",this);
    prof.releaseProfile();
    connect( _readregy,SIGNAL(closing()),this,SLOT(_readRCloseY()));
  }
  if(_readregy) _readregy->show();
}
void MainWindow::_showWriteEEPX(){
  if(!_writeeepx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _writeeepx=new WriteEEP( "Write EEPROM Motor X",this);
    prof.releaseProfile();
    connect( _writeeepx,SIGNAL(closing()),this,SLOT(_weCloseX()));
  }
  if(_writeeepx) _writeeepx->show();
}
void MainWindow::_showWriteEEPY(){
  if(!_writeeepy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _writeeepy=new WriteEEP( "Write EEPROM Motor Y",this);
    prof.releaseProfile();
    connect( _writeeepy,SIGNAL(closing()),this,SLOT(_weCloseY()));
  }
  if(_writeeepy) _writeeepy->show();
}
void MainWindow::_showWriteRamX(){
  if(!_writeramx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _writeramx=new WriteRam( "Write Ram Motor X",this);
    prof.releaseProfile();
    connect( _writeramx,SIGNAL(closing()),this,SLOT(_wrCloseX()));
  }
  if(_writeramx) _writeramx->show();
}
void MainWindow::_showWriteRamY(){
  if(!_writeramy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _writeramy=new WriteRam( "Write Ram Motor Y",this);
    prof.releaseProfile();
    connect( _writeramy,SIGNAL(closing()),this,SLOT(_wrCloseY()));
  }
  if(_writeramy) _writeramy->show();
}

void MainWindow::_showAdcDac(){
  if(!_adcdac){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro3);
    _adcdac=new AdcDac( "ADC - DAC",this);
    prof.releaseProfile();
    connect( _adcdac,SIGNAL(closing()),this,SLOT(_adClose()));
  }
  if(_adcdac) _adcdac->show();
}
void MainWindow::_showHidden(){
  if(!_hidden){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro3);
    _hidden=new Hidden( "Hidden Registers",this);
    prof.releaseProfile();
    connect( _hidden,SIGNAL(closing()),this,SLOT(_hidClose()));
  }
  if(_hidden) _hidden->show();
}
void MainWindow::_showBK9000(){
  if(!_bk9000){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro3);
    _bk9000=new BK9000( "BK9000 Ethernet Coupler",this);
    prof.releaseProfile();
    connect( _bk9000,SIGNAL(closing()),this,SLOT(_bkClose()));
  }
  if(_bk9000) _bk9000->show();
}

void MainWindow::myQuit(){ qApp->quit();}
