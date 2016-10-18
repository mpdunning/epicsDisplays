#include <QDebug>
#include "mainwindow.h"
#include "motor.h"
#include "motorcoef.h"
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

  _prof=new ContainerProfile;
  _prof->setupProfile( NULL,nullList,"","");
  ui=new Ui::MainWindow;
  ui->setupUi(this);
  _macro1.append(_pmac).append(",").append(_q1mac).append(",");
  _macro1.append(_rmac).append(",").append(_nmac).append(",C=1");
  _macro2.append(_pmac).append(",").append(_q2mac).append(",");
  _macro2.append(_rmac).append(",").append(_nmac).append(",C=2");
  _macro3.append(_pmac).append(",").append(_rmac).append(",");
  _macro3.append(_tmac).append(",").append(_nmac);

  _mx=_my=0;
  _mcx=_mcy=0;
  _adcc=0;
  _bkhd=0;
  connect( ui->motorXPB,SIGNAL(clicked(bool)),this,SLOT(_showMotorX()));
  connect( ui->motorYPB,SIGNAL(clicked(bool)),this,SLOT(_showMotorY()));
  connect( ui->coefMXPB,SIGNAL(clicked(bool)),this,SLOT(_showCoefMX()));
  connect( ui->coefMYPB,SIGNAL(clicked(bool)),this,SLOT(_showCoefMY()));
  connect( ui->coefADCPB,SIGNAL(clicked(bool)),this,SLOT(_showCoefADC()));
  connect( ui->debugPB,SIGNAL(clicked(bool)),this,SLOT(_showDebug()));

  connect( ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  statusBar()->addWidget( ui->errMessage1);
}
MainWindow::~MainWindow(){
  delete ui;
  if(_mx) delete _mx;
  if(_my) delete _my;
  if(_bkhd) delete _bkhd;
  delete _prof;
}
void MainWindow::_closeMotorX(){
  if(_mx) delete _mx;
  _mx=0;
}
void MainWindow::_closeMotorY(){
  if(_my) delete _my;
  _my=0;
}
void MainWindow::_closeCoefMX(){
  if(_mcx) delete _mcx;
  _mcx=0;
}
void MainWindow::_closeCoefMY(){
  if(_mcy) delete _mcy;
  _mcy=0;
}
void MainWindow::_closeCoefADC(){
  if(_adcc) delete _adcc;
  _adcc=0;
}
void MainWindow::_showMotorX(){
  if(!_mx){
    _prof->addMacroSubstitutions( _macro1);
    _mx=new Motor( "Motor X",this);
    _prof->removeMacroSubstitutions();
    connect( _mx,SIGNAL(closing()),this,SLOT(_closeMotorX()));
  }
 if(_mx) _mx->show();
}
void MainWindow::_showMotorY(){
  if(!_my){
    _prof->addMacroSubstitutions( _macro2);
    _my=new Motor( "Motor X",this);
    _prof->removeMacroSubstitutions();
    connect( _my,SIGNAL(closing()),this,SLOT(_closeMotorY()));
  }
 if(_my) _my->show();
}
void MainWindow::_showCoefMX(){
  if(!_mcx){
    _prof->addMacroSubstitutions( _macro1);
    _mcx=new MotorCoef( "Motor X Conversion",this);
    _prof->removeMacroSubstitutions();
    connect( _mcx,SIGNAL(closing()),this,SLOT(_closeCoefMX()));
  }
 if(_mcx) _mcx->show();
}
void MainWindow::_showCoefMY(){
  if(!_mcy){
    _prof->addMacroSubstitutions( _macro2);
    _mcy=new MotorCoef( "Motor Y Conversion",this);
    _prof->removeMacroSubstitutions();
    connect( _mcy,SIGNAL(closing()),this,SLOT(_closeCoefMY()));
  }
 if(_mcy) _mcy->show();
}
void MainWindow::_showCoefADC(){
  if(!_adcc){
    _prof->addMacroSubstitutions( _macro2);
    _adcc=new ADCCoef( "ADC Conversion",this);
    _prof->removeMacroSubstitutions();
    connect( _adcc,SIGNAL(closing()),this,SLOT(_closeCoefADC()));
  }
 if(_adcc) _adcc->show();
}
void MainWindow::_showDebug(){
  if(!_bkhd){
    _prof->addMacroSubstitutions( _macro3);
    _bkhd=new BkhDebug( "Beckhoff Debug Functions",this);
    _prof->removeMacroSubstitutions();
    connect( _bkhd,SIGNAL(closing()),this,SLOT(_closeDebug()));
  }
  if(_bkhd) _bkhd->show();
}
void MainWindow::_closeDebug(){
  if(_bkhd) delete _bkhd;
  _bkhd=0;
}
void MainWindow::myQuit(){ qApp->quit();}
