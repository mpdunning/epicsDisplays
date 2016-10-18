#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"
#include "motor.h"
#include "control.h"
#include "csr.h"
#include "home.h"
#include "feature.h"
#include "readreg.h"
#include "writeeep.h"
#include "writeram.h"
#include "adcdac2m.h"
#include "hidden.h"
#include "bk9000.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
/*-----------------------------------------------------------------------------
 * First argument is a "list" of macro replacements.  It is of the form:
 * "P=<val>,M1=<val>,M2=<val>,R=<val>,T=<val>,N=<val>"
 * If macro replacements are supplied as a command line argument, then all
 * five components must be supplied.  If macro replacements are not supplied,
 * then default values, see below, are used.
 * Note, that the program is launched as follows:
 * <program name> [-m "<macro string>"]
 *---------------------------------------------------------------------------*/
  QStringList nullList; QStringList mlist; QString macro; QString str; int i;
  QString pmac,nmac,rmac,tmac,xmac,ymac;
  _haveM=0;
  if(pm){
    macro.append(pm);
    _haveM=1;
    mlist=macro.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P")) pmac.append(str);
      if(str.contains("N")) nmac.append(str);
      if(str.contains("R")) rmac.append(str);
      if(str.contains("T")) tmac.append(str);
      if(str.contains("M1")) xmac.append(str);
      if(str.contains("M2")) ymac.append(str);
    }
    qDebug()<<"MainWIndow: macro="<<macro;
  }
  else{
    pmac.append("P=CHA");
    nmac.append("N=2");
    rmac.append("R=3132");
    tmac.append("T=4132");
    xmac.append("M1=2531-1");
    ymac.append("M2=2531-2");
  }
  _macadc.append(pmac).append(",").append(rmac).append(",");
  _macadc.append(tmac).append(",").append(nmac);
  _machid.append(_macadc).append(",").append(xmac);
  _machid.append(",").append(ymac);
  xmac.remove(1,1);
  ymac.remove(1,1);
  _macmx.append(pmac).append(",").append(xmac).append(",");
  _macmx.append(rmac).append(",").append(nmac).append(",C=1");
  _macmy.append(pmac).append(",").append(ymac).append(",");
  _macmy.append(rmac).append(",").append(nmac).append(",C=2");
  _motx=_moty=0;
  _ctrlx=_ctrly=0;
  _csrx=_csry=0;
  _homex=_homey=NULL;
  _featurex=_featurey=0;
  _readregx=_readregy=0;
  _writeeepx=_writeeepy=0;
  _writeramx=_writeramy=0;
  _adcdac=0; _bk9000=0;
  _hidden=0;

  ContainerProfile prof;
  prof.setupProfile( this,QStringList(),"","");
  setupUi(this);
  prof.releaseProfile();

  connect( xMotorPB,  SIGNAL(clicked(bool)),this,SLOT(_showMotorX()));
  connect( yMotorPB,  SIGNAL(clicked(bool)),this,SLOT(_showMotorY()));
  connect( xCtrlPB,   SIGNAL(clicked(bool)),this,SLOT(_showControlX()));
  connect( yCtrlPB,   SIGNAL(clicked(bool)),this,SLOT(_showControlY()));
  connect( xCSRPB,    SIGNAL(clicked(bool)),this,SLOT(_showCsrX()));
  connect( yCSRPB,    SIGNAL(clicked(bool)),this,SLOT(_showCsrY()));
  connect( xHomePB,   SIGNAL(clicked(bool)),this,SLOT(_showHomeX()));
  connect( yHomePB,   SIGNAL(clicked(bool)),this,SLOT(_showHomeY()));
  connect( xFeaturePB,SIGNAL(clicked(bool)),this,SLOT(_showFeatureX()));
  connect( yFeaturePB,SIGNAL(clicked(bool)),this,SLOT(_showFeatureY()));
  connect( xRRegsPB,  SIGNAL(clicked(bool)),this,SLOT(_showReadRegX()));
  connect( yRRegsPB,  SIGNAL(clicked(bool)),this,SLOT(_showReadRegY()));
  connect( xWtEEPPB,  SIGNAL(clicked(bool)),this,SLOT(_showWriteEEPX()));
  connect( yWtEEPPB,  SIGNAL(clicked(bool)),this,SLOT(_showWriteEEPY()));
  connect( xWtRamPB,  SIGNAL(clicked(bool)),this,SLOT(_showWriteRamX()));
  connect( yWtRamPB,  SIGNAL(clicked(bool)),this,SLOT(_showWriteRamY()));

  connect( AdcDacPB,  SIGNAL(clicked(bool)),this,SLOT(_showAdcDac()));
  connect( hiddenPB,  SIGNAL(clicked(bool)),this,SLOT(_showHidden()));
  connect( couplerPB, SIGNAL(clicked(bool)),this,SLOT(_showBK9000()));

  connect(actionExit, SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}
MainWindow::~MainWindow(){
  if(_motx) delete _motx;
  if(_moty) delete _moty;
  if(_ctrlx) delete _ctrlx;
  if(_ctrly) delete _ctrly;
  if(_csrx) delete _csrx;
  if(_csry) delete _csry;
  if(_homex) delete _homex;
  if(_homey) delete _homey;
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
void MainWindow::_showMotorX(){
  if(!_motx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _motx=new Motor( "Motor X",this);
    prof.releaseProfile();
  }
 if(_motx) _motx->show();
}
void MainWindow::_showMotorY(){
  if(!_moty){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _moty=new Motor( "Motor Y",this);
    prof.releaseProfile();
  }
  if(_moty) _moty->show();
}
void MainWindow::_showControlX(){
  if(!_ctrlx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _ctrlx=new Control( "Control Motor X",this);
    prof.releaseProfile();
  }
  if(_ctrlx) _ctrlx->show();
}
void MainWindow::_showControlY(){
  if(!_ctrly){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _ctrly=new Control( "Control Motor Y",this);
    prof.releaseProfile();
  }
  if(_ctrly) _ctrly->show();
}
void MainWindow::_showCsrX(){
  if(!_csrx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _csrx=new CSR( "CSR Motor X",this);
    prof.releaseProfile();
  }
  if(_csrx) _csrx->show();
}
void MainWindow::_showCsrY(){
  if(!_csry){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _csry=new CSR( "CSR Motor Y",this);
    prof.releaseProfile();
  }
  if(_csry) _csry->show();
}
void MainWindow::_showHomeX(){
  if(!_homex){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _homex=new Home( "Home Motor X",this);
    prof.releaseProfile();
  }
  if(_homex) _homex->show();
}
void MainWindow::_showHomeY(){
  if(!_homey){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _homey=new Home( "Home Motor Y",this);
    prof.releaseProfile();
  }
  if(_homey) _homey->show();
}
void MainWindow::_showFeatureX(){
  if(!_featurex){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _featurex=new Feature( "Feature Motor X",this);
    prof.releaseProfile();
  }
  if(_featurex) _featurex->show();
}
void MainWindow::_showFeatureY(){
  if(!_featurey){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _featurey=new Feature( "Feature Motor Y",this);
    prof.releaseProfile();
  }
  if(_featurey) _featurey->show();
}
void MainWindow::_showReadRegX(){
  if(!_readregx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _readregx=new ReadReg( "Read Reg Motor X",this);
    prof.releaseProfile();
  }
  if(_readregx) _readregx->show();
}
void MainWindow::_showReadRegY(){
  if(!_readregy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _readregy=new ReadReg( "Read Reg Motor Y",this);
    prof.releaseProfile();
  }
  if(_readregy) _readregy->show();
}
void MainWindow::_showWriteEEPX(){
  if(!_writeeepx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _writeeepx=new WriteEEP( "Write EEPROM Motor X",this);
    prof.releaseProfile();
  }
  if(_writeeepx) _writeeepx->show();
}
void MainWindow::_showWriteEEPY(){
  if(!_writeeepy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _writeeepy=new WriteEEP( "Write EEPROM Motor Y",this);
    prof.releaseProfile();
  }
  if(_writeeepy) _writeeepy->show();
}
void MainWindow::_showWriteRamX(){
  if(!_writeramx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmx);
    _writeramx=new WriteRam( "Write Ram Motor X",this);
    prof.releaseProfile();
  }
  if(_writeramx) _writeramx->show();
}
void MainWindow::_showWriteRamY(){
  if(!_writeramy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmy);
    _writeramy=new WriteRam( "Write Ram Motor Y",this);
    prof.releaseProfile();
  }
  if(_writeramy) _writeramy->show();
}
void MainWindow::_showAdcDac(){
  if(!_adcdac){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macadc);
    _adcdac=new AdcDac( "ADC - DAC",this);
    prof.releaseProfile();
  }
  if(_adcdac) _adcdac->show();
}
void MainWindow::_showHidden(){
  if(!_hidden){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_machid);
    _hidden=new Hidden( "Hidden Registers",this);
    prof.releaseProfile();
  }
  if(_hidden) _hidden->show();
}
void MainWindow::_showBK9000(){
  if(!_bk9000){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macadc);
    _bk9000=new BK9000( "BK9000 Ethernet Coupler",this);
    prof.releaseProfile();
  }
  if(_bk9000) _bk9000->show();
}
void MainWindow::myQuit(){ qApp->quit();}
