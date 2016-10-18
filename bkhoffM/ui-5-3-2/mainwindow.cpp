#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"
#include "motorctrl.h"
#include "bkhdetail.h"

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
  prof.setupProfile( this,nullList,"","");
  _mcx=_mcy=0; _bkh=0;
  ui=new Ui::MainWindow;
  ui->setupUi(this);
  _macro1.append(_pmac).append(",").append(_q1mac).append(",");
  _macro1.append(_nmac);
  _macro2.append(_pmac).append(",").append(_q2mac).append(",");
  _macro2.append(_nmac);
  _macro3.append(_pmac).append(",").append(_rmac).append(",");
  _macro3.append(_tmac).append(",").append(_nmac);

  connect( ui->DenyGoXQELB,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(goM1ValChange(const QString&)));
  connect( ui->DenyFoXQELB,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(foM1ValChange(const QString&)));
  connect( ui->DenyRvXQELB,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(rvM1ValChange(const QString&)));
  connect( ui->DenyGoYQELB,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(goM2ValChange(const QString&)));
  connect( ui->DenyFoYQELB,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(foM2ValChange(const QString&)));
  connect( ui->DenyRvYQELB,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(rvM2ValChange(const QString&)));

  connect( ui->pbMCtrlX,SIGNAL(clicked(bool)),this,SLOT(showMXControl()));
  connect( ui->pbMCtrlY,SIGNAL(clicked(bool)),this,SLOT(showMYControl()));
  connect( ui->pbBkh,SIGNAL(clicked(bool)),this,SLOT(showBkhDetail()));

  connect( ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  statusBar()->addWidget( ui->errMessage1);
  prof.releaseProfile();
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::goM1ValChange( const QString& v){
  if(v.contains("Allow")) ui->GOX_PB->setRunVisible(true);
  else ui->GOX_PB->setRunVisible(false);
}
void MainWindow::foM1ValChange( const QString& v){
  if(v.contains("Allow")) ui->FORX_PB->setRunVisible(true);
  else ui->FORX_PB->setRunVisible(false);
}
void MainWindow::rvM1ValChange( const QString& v){
  if(v.contains("Allow")) ui->REVX_PB->setRunVisible(true);
  else ui->REVX_PB->setRunVisible(false);
}
void MainWindow::goM2ValChange( const QString& v){
  if(v.contains("Allow")) ui->GOY_PB->setRunVisible(true);
  else ui->GOY_PB->setRunVisible(false);
}
void MainWindow::foM2ValChange( const QString& v){
  if(v.contains("Allow")) ui->FORY_PB->setRunVisible(true);
  else ui->FORY_PB->setRunVisible(false);
}
void MainWindow::rvM2ValChange( const QString& v){
  if(v.contains("Allow")) ui->REVY_PB->setRunVisible(true);
  else ui->REVY_PB->setRunVisible(false);
}
void MainWindow::showMXControl(){
  if(!_mcx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro1);
    _mcx=new MotorCtrl( "Motor X Control",this);
    prof.releaseProfile();
    connect( _mcx,SIGNAL(closing()),this,SLOT(closeMXControl()));
  }
 if(_mcx) _mcx->show();
}
void MainWindow::showMYControl(){
  if(!_mcy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro2);
    _mcy=new MotorCtrl( "Motor Y Control",this);
    prof.releaseProfile();
    connect( _mcy,SIGNAL(closing()),this,SLOT(closeMYControl()));
  }
 if(_mcy) _mcy->show();
}
void MainWindow::showBkhDetail(){
  if(!_bkh){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macro3);
    _bkh=new BkhDetail( "Beckhoff Detail",this);
    prof.releaseProfile();
    connect( _bkh,SIGNAL(closing()),this,SLOT(closeBkhDetail()));
  }
 if(_bkh) _bkh->show();
}
void MainWindow::closeMXControl(){
  if(_mcx) delete _mcx;
  _mcx=0;
}
void MainWindow::closeMYControl(){
  if(_mcy) delete _mcy;
  _mcy=0;
}
void MainWindow::closeBkhDetail(){
  if(_bkh) delete _bkh;
  _bkh=0;
}
void MainWindow::myQuit(){ qApp->quit();}
