#include <QDebug>
#include <ContainerProfile.h>
#include "cabutton.h"
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
  QString macro123,pmac,nmac,amac,bmac,dmac,emac,xmac,ymac,zmac;
  _haveM=0;
  if(pm){
    macro.append(pm);
    _haveM=1;
    mlist=macro.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
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
    qDebug()<<"MainWIndow: macro="<<macro;
  }
  else{
    pmac.append("P=CHA");
    nmac.append("N=3m");
    amac.append("A1=3132-1");
    bmac.append("A2=3132-2");
    dmac.append("D1=4132-1");
    emac.append("D2=4132-2");
    xmac.append("M1=2531-1");
    ymac.append("M2=2531-2");
    zmac.append("M3=2531-3");
  }
  ContainerProfile prof;
  _mcx=_mcy=_mcz=0; _bkh=0;
  ui=new Ui::MainWindow;
  _mac123.append(pmac).append(",").append(xmac).append(",");
  _mac123.append(ymac).append(",").append(zmac).append(",");
  _mac123.append(amac).append(",").append(bmac).append(",");
  _mac123.append(dmac).append(",").append(emac).append(",").append(nmac);
  _macXc.append(pmac).append(",").append(xmac.remove(1,1));
  _macXc.append(",").append(nmac);
  _macYc.append(pmac).append(",").append(ymac.remove(1,1));
  _macYc.append(",").append(nmac);
  _macZc.append(pmac).append(",").append(zmac.remove(1,1));
  _macZc.append(",").append(nmac);
qDebug()<<"mac123="<<_mac123;
  prof.setupProfile( this,nullList,"",_mac123);
  ui->setupUi(this);
  prof.removeMacroSubstitutions();

  connect(ui->qeformX,SIGNAL(formLoaded(bool)),SLOT(qeformXReady(bool)));
  connect(ui->qeformY,SIGNAL(formLoaded(bool)),SLOT(qeformYReady(bool)));
  connect(ui->qeformZ,SIGNAL(formLoaded(bool)),SLOT(qeformZReady(bool)));

  connect( ui->pbBkh,SIGNAL(clicked(bool)),this,SLOT(showBkhDetail()));

  connect( ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  statusBar()->addWidget( ui->errMessage1);
  prof.releaseProfile();
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::qeformXReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformXReady: failed to load";
    return;
  }
  _goDnyX=(QELabel*)ui->qeformX->getChild("DenyGoQELB");
  _goX=(CAButton*)ui->qeformX->getChild("GO_PB");
  if(!_goDnyX||!_goX) qDebug()<<"qeformXReady: DenyGoQELB not found";
  else connect( _goDnyX,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goXValChange(const QString&)));

  _foDnyX=(QELabel*)ui->qeformX->getChild("DenyFoQELB");
  _foX=(CAButton*)ui->qeformX->getChild("FOR_PB");
  if(!_foDnyX||!_foX) qDebug()<<"qeformXReady: DenyFoQELB not found";
  else connect( _foDnyX,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foXValChange(const QString&)));

  _rvDnyX=(QELabel*)ui->qeformX->getChild("DenyRvQELB");
  _rvX=(CAButton*)ui->qeformX->getChild("REV_PB");
  if(!_rvDnyX||!_rvX) qDebug()<<"qeformXReady: DenyRvQELB not found";
  else connect( _rvDnyX,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvXValChange(const QString&)));

  _ctrlX=(QPushButton*)ui->qeformX->getChild("ctrlPB");
  if(!_ctrlX) qDebug()<<"qeformXReady: ctrlPB not found";
  else connect( _ctrlX,SIGNAL(clicked(bool)),this,SLOT(showXControl()));
}
void MainWindow::qeformYReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformYReady: failed to load";
    return;
  }
  _goDnyY=(QELabel*)ui->qeformY->getChild("DenyGoQELB");
  _goY=(CAButton*)ui->qeformY->getChild("GO_PB");
  if(!_goDnyY||!_goY) qDebug()<<"qeformYReady: DenyGoQELB not found";
  else connect( _goDnyY,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goYValChange(const QString&)));

  _foDnyY=(QELabel*)ui->qeformY->getChild("DenyFoQELB");
  _foY=(CAButton*)ui->qeformY->getChild("FOR_PB");
  if(!_foDnyY||!_foY) qDebug()<<"qeformYReady: DenyFoQELB not found";
  else connect( _foDnyY,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foYValChange(const QString&)));

  _rvDnyY=(QELabel*)ui->qeformY->getChild("DenyRvQELB");
  _rvY=(CAButton*)ui->qeformY->getChild("REV_PB");
  if(!_rvDnyY||!_rvY) qDebug()<<"qeformYReady: DenyRvQELB not found";
  else connect( _rvDnyY,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvYValChange(const QString&)));

  _ctrlY=(QPushButton*)ui->qeformY->getChild("ctrlPB");
  if(!_ctrlY) qDebug()<<"qeformYReady: ctrlPB not found";
  else connect( _ctrlY,SIGNAL(clicked(bool)),this,SLOT(showYControl()));
}
void MainWindow::qeformZReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformZReady: failed to load";
    return;
  }
  _goDnyZ=(QELabel*)ui->qeformZ->getChild("DenyGoQELB");
  _goZ=(CAButton*)ui->qeformZ->getChild("GO_PB");
  if(!_goDnyZ||!_goZ) qDebug()<<"qeformZReady: DenyGoQELB not found";
  else connect( _goDnyZ,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goZValChange(const QString&)));

  _foDnyZ=(QELabel*)ui->qeformZ->getChild("DenyFoQELB");
  _foZ=(CAButton*)ui->qeformZ->getChild("FOR_PB");
  if(!_foDnyZ||!_foZ) qDebug()<<"qeformZReady: DenyFoQELB not found";
  else connect( _foDnyZ,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foZValChange(const QString&)));

  _rvDnyZ=(QELabel*)ui->qeformZ->getChild("DenyRvQELB");
  _rvZ=(CAButton*)ui->qeformZ->getChild("REV_PB");
  if(!_rvDnyZ||!_rvZ) qDebug()<<"qeformZReady: DenyRvQELB not found";
  else connect( _rvDnyZ,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvZValChange(const QString&)));

  _ctrlZ=(QPushButton*)ui->qeformZ->getChild("ctrlPB");
  if(!_ctrlZ) qDebug()<<"qeformZReady: ctrlPB not found";
  else connect( _ctrlZ,SIGNAL(clicked(bool)),this,SLOT(showZControl()));
}
void MainWindow::goXValChange( const QString& v){
  if(v.contains("Allow")) _goX->setRunVisible(true);
  else _goX->setRunVisible(false);
}
void MainWindow::foXValChange( const QString& v){
  if(v.contains("Allow")) _foX->setRunVisible(true);
  else _foX->setRunVisible(false);
}
void MainWindow::rvXValChange( const QString& v){
  if(v.contains("Allow")) _rvX->setRunVisible(true);
  else _rvX->setRunVisible(false);
}
void MainWindow::goYValChange( const QString& v){
  if(v.contains("Allow")) _goY->setRunVisible(true);
  else _goY->setRunVisible(false);
}
void MainWindow::foYValChange( const QString& v){
  if(v.contains("Allow")) _foY->setRunVisible(true);
  else _foY->setRunVisible(false);
}
void MainWindow::rvYValChange( const QString& v){
  if(v.contains("Allow")) _rvY->setRunVisible(true);
  else _rvY->setRunVisible(false);
}
void MainWindow::goZValChange( const QString& v){
  if(v.contains("Allow")) _goZ->setRunVisible(true);
  else _goZ->setRunVisible(false);
}
void MainWindow::foZValChange( const QString& v){
  if(v.contains("Allow")) _foZ->setRunVisible(true);
  else _foZ->setRunVisible(false);
}
void MainWindow::rvZValChange( const QString& v){
  if(v.contains("Allow")) _rvZ->setRunVisible(true);
  else _rvZ->setRunVisible(false);
}

void MainWindow::showXControl(){
  if(!_mcx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macXc);
    _mcx=new MotorCtrl( "Motor X Control",this);
    prof.releaseProfile();
  }
 if(_mcx) _mcx->show();
}
void MainWindow::showYControl(){
  if(!_mcy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macYc);
    _mcy=new MotorCtrl( "Motor Y Control",this);
    prof.releaseProfile();
  }
 if(_mcy) _mcy->show();
}
void MainWindow::showZControl(){
  if(!_mcz){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macZc);
    _mcz=new MotorCtrl( "Motor Z Control",this);
    prof.releaseProfile();
  }
 if(_mcz) _mcz->show();
}
void MainWindow::showBkhDetail(){
  if(!_bkh){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_mac123);
    _bkh=new BkhDetail( "Beckhoff Detail",this);
    prof.releaseProfile();
  }
 if(_bkh) _bkh->show();
}
void MainWindow::myQuit(){ qApp->quit();}
