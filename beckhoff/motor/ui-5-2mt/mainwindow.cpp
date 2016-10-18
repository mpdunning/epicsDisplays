#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"
#include "motor.h"
#include "adccoef.h"
#include "bkhdebug.h"

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
  QStringList nullList; QStringList mlist; QString str; int i;
  QString pmac,nmac,rmac,tmac,xmac,ymac,macro;
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
  macro.clear();
  macro.append(pmac).append(",").append(xmac).append(",").append(ymac);
  macro.append(",").append(rmac).append(",").append(tmac);
  macro.append(",").append(nmac);
qDebug()<<"Mainwindow:: macro="<<macro;
  ContainerProfile prof;
  prof.setupProfile( NULL,nullList,"",macro);
  ui=new Ui::MainWindow;
  ui->setupUi(this);
  prof.releaseProfile();
  _macrox.append(pmac).append(",").append(xmac.remove(1,1)).append(",");
  _macrox.append(rmac).append(",").append(nmac).append(",C=1");
  _macroy.append(pmac).append(",").append(ymac.remove(1,1)).append(",");
  _macroy.append(rmac).append(",").append(nmac).append(",C=2");
  _macrob.append(pmac).append(",").append(rmac).append(",");
  _macrob.append(tmac).append(",").append(nmac);

  _mx=_my=0;
  _adcc=0;
  _bkhd=0;
  connect( ui->motorXPB,SIGNAL(clicked(bool)),SLOT(_showMotorX()));
  connect( ui->motorYPB,SIGNAL(clicked(bool)),SLOT(_showMotorY()));
  connect( ui->adcQEF,SIGNAL(formLoaded(bool)),SLOT(adcQEFReady(bool)));
  connect( ui->cplQEF,SIGNAL(formLoaded(bool)),SLOT(cplQEFReady(bool)));

  connect( ui->actionQuit,SIGNAL(triggered(bool)),SLOT(myQuit()));
  statusBar()->addWidget( ui->errMessage1);
}
MainWindow::~MainWindow(){
  delete ui;
  if(_mx) delete _mx;
  if(_my) delete _my;
  if(_bkhd) delete _bkhd;
  if(_adcc) delete _adcc;
}
void MainWindow::adcQEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::adcQEFReady: failed to load";
    return;
  }
  _adcPB=(QPushButton*)ui->adcQEF->getChild("adcCoefPB");
  if(!_adcPB) qDebug()<<"MainWindow::adcQEFReady: not found";
  else connect( _adcPB,SIGNAL(clicked()),SLOT(_showCoefADC()));
 }
void MainWindow::cplQEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done loading an ui file.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::cplQEFReady: failed to load";
    return;
  }
  _dbgPB=(QPushButton*)ui->cplQEF->getChild("dbgPB");
  if(!_dbgPB) qDebug()<<"MainWindow::cplQEFReady: not found";
  else connect( _dbgPB,SIGNAL(clicked()),SLOT(_showDebug()));
 }
void MainWindow::_closeMotorX(){
  if(_mx) delete _mx;
  _mx=0;
}
void MainWindow::_closeMotorY(){
  if(_my) delete _my;
  _my=0;
}
void MainWindow::_closeCoefADC(){
  if(_adcc) delete _adcc;
  _adcc=0;
}
void MainWindow::_showMotorX(){
  if(!_mx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macrox);
    _mx=new Motor( "Motor X",this);
    prof.releaseProfile();
    connect( _mx,SIGNAL(closing()),this,SLOT(_closeMotorX()));
  }
 if(_mx) _mx->show();
}
void MainWindow::_showMotorY(){
  if(!_my){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macroy);
    _my=new Motor( "Motor Y",this);
    prof.releaseProfile();
    connect( _my,SIGNAL(closing()),this,SLOT(_closeMotorY()));
  }
 if(_my) _my->show();
}
void MainWindow::_showCoefADC(){
  if(!_adcc){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macroy);
    _adcc=new ADCCoef( "ADC Conversion",this);
    prof.releaseProfile();
    connect( _adcc,SIGNAL(closing()),this,SLOT(_closeCoefADC()));
  }
 if(_adcc) _adcc->show();
}
void MainWindow::_showDebug(){
  if(!_bkhd){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macrob);
    _bkhd=new BkhDebug( "Beckhoff Debug Functions",this);
    prof.releaseProfile();
    connect( _bkhd,SIGNAL(closing()),this,SLOT(_closeDebug()));
  }
  if(_bkhd) _bkhd->show();
}
void MainWindow::_closeDebug(){
  if(_bkhd) delete _bkhd;
  _bkhd=0;
}
void MainWindow::myQuit(){ qApp->quit();}
