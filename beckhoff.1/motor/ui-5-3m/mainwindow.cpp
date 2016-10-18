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
  QString macro123,pmac,nmac,mac1,mac2,mac3;
  _haveM=0;
  if(pm){
    macro.append(pm);
    _haveM=1;
    mlist=macro.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P="))  pmac.append(str);
      if(str.contains("N="))  nmac.append(str);
      if(str.contains("M1=")) mac1.append(str);
      if(str.contains("M2=")) mac2.append(str);
      if(str.contains("M3=")) mac3.append(str);
    }
    qDebug()<<"MainWIndow: macro="<<macro;
  }
  else{
    pmac.append("P=CHA");
    nmac.append("N=3m");
    mac1.append("M1=2531-1");
    mac2.append("M2=2531-2");
    mac3.append("M3=2531-3");
  }
  ContainerProfile prof;
  _m1c=_m2c=_m3c=0; _bkh=0;
  ui=new Ui::MainWindow;
  _mac123.append(pmac).append(",").append(mac1).append(",");
  _mac123.append(mac2).append(",").append(mac3).append(",").append(nmac);
  _mac1c.append(pmac).append(",").append(mac1.remove(1,1));
  _mac1c.append(",").append(nmac);
  _mac2c.append(pmac).append(",").append(mac2.remove(1,1));
  _mac2c.append(",").append(nmac);
  _mac3c.append(pmac).append(",").append(mac3.remove(1,1));
  _mac3c.append(",").append(nmac);
qDebug()<<"mac123="<<_mac123;
  prof.setupProfile( this,nullList,"",_mac123);
  ui->setupUi(this);
  prof.removeMacroSubstitutions();

  connect(ui->qeformM1,SIGNAL(formLoaded(bool)),SLOT(qeformM1Ready(bool)));
  connect(ui->qeformM2,SIGNAL(formLoaded(bool)),SLOT(qeformM2Ready(bool)));
  connect(ui->qeformM3,SIGNAL(formLoaded(bool)),SLOT(qeformM3Ready(bool)));

  connect( ui->pbBkh,SIGNAL(clicked(bool)),this,SLOT(showBkhDetail()));

  connect( ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  statusBar()->addWidget( ui->errMessage1);
  prof.releaseProfile();
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::qeformM1Ready( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformM1Ready: failed to load";
    return;
  }
  _goDnyM1=(QELabel*)ui->qeformM1->getChild("DenyGoQELB");
  _goM1=(CAButton*)ui->qeformM1->getChild("GO_PB");
  if(!_goDnyM1||!_goM1) qDebug()<<"qeformM1Ready: DenyGoQELB not found";
  else connect( _goDnyM1,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM1ValChange(const QString&)));

  _foDnyM1=(QELabel*)ui->qeformM1->getChild("DenyFoQELB");
  _foM1=(CAButton*)ui->qeformM1->getChild("FOR_PB");
  if(!_foDnyM1||!_foM1) qDebug()<<"qeformM1Ready: DenyFoQELB not found";
  else connect( _foDnyM1,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foM1ValChange(const QString&)));

  _rvDnyM1=(QELabel*)ui->qeformM1->getChild("DenyRvQELB");
  _rvM1=(CAButton*)ui->qeformM1->getChild("REV_PB");
  if(!_rvDnyM1||!_rvM1) qDebug()<<"qeformM1Ready: DenyRvQELB not found";
  else connect( _rvDnyM1,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvM1ValChange(const QString&)));

  _ctrlM1=(QPushButton*)ui->qeformM1->getChild("ctrlPB");
  if(!_ctrlM1) qDebug()<<"qeformM1Ready: ctrlPB not found";
  else connect( _ctrlM1,SIGNAL(clicked(bool)),this,SLOT(showM1Control()));
}
void MainWindow::qeformM2Ready( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformM2Ready: failed to load";
    return;
  }
  _goDnyM2=(QELabel*)ui->qeformM2->getChild("DenyGoQELB");
  _goM2=(CAButton*)ui->qeformM2->getChild("GO_PB");
  if(!_goDnyM2||!_goM2) qDebug()<<"qeformM2Ready: DenyGoQELB not found";
  else connect( _goDnyM2,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM2ValChange(const QString&)));

  _foDnyM2=(QELabel*)ui->qeformM2->getChild("DenyFoQELB");
  _foM2=(CAButton*)ui->qeformM2->getChild("FOR_PB");
  if(!_foDnyM2||!_foM2) qDebug()<<"qeformM2Ready: DenyFoQELB not found";
  else connect( _foDnyM2,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foM2ValChange(const QString&)));

  _rvDnyM2=(QELabel*)ui->qeformM2->getChild("DenyRvQELB");
  _rvM2=(CAButton*)ui->qeformM2->getChild("REV_PB");
  if(!_rvDnyM2||!_rvM2) qDebug()<<"qeformM2Ready: DenyRvQELB not found";
  else connect( _rvDnyM2,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvM2ValChange(const QString&)));

  _ctrlM2=(QPushButton*)ui->qeformM2->getChild("ctrlPB");
  if(!_ctrlM2) qDebug()<<"qeformM2Ready: ctrlPB not found";
  else connect( _ctrlM2,SIGNAL(clicked(bool)),this,SLOT(showM2Control()));
}
void MainWindow::qeformM3Ready( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformM3Ready: failed to load";
    return;
  }
  _goDnyM3=(QELabel*)ui->qeformM3->getChild("DenyGoQELB");
  _goM3=(CAButton*)ui->qeformM3->getChild("GO_PB");
  if(!_goDnyM3||!_goM3) qDebug()<<"qeformM3Ready: DenyGoQELB not found";
  else connect( _goDnyM3,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM3ValChange(const QString&)));

  _foDnyM3=(QELabel*)ui->qeformM3->getChild("DenyFoQELB");
  _foM3=(CAButton*)ui->qeformM3->getChild("FOR_PB");
  if(!_foDnyM3||!_foM3) qDebug()<<"qeformM3Ready: DenyFoQELB not found";
  else connect( _foDnyM3,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foM3ValChange(const QString&)));

  _rvDnyM3=(QELabel*)ui->qeformM3->getChild("DenyRvQELB");
  _rvM3=(CAButton*)ui->qeformM3->getChild("REV_PB");
  if(!_rvDnyM3||!_rvM3) qDebug()<<"qeformM3Ready: DenyRvQELB not found";
  else connect( _rvDnyM3,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvM3ValChange(const QString&)));

  _ctrlM3=(QPushButton*)ui->qeformM3->getChild("ctrlPB");
  if(!_ctrlM3) qDebug()<<"qeformM3Ready: ctrlPB not found";
  else connect( _ctrlM3,SIGNAL(clicked(bool)),this,SLOT(showM3Control()));
}
void MainWindow::goM1ValChange( const QString& v){
  if(v.contains("Allow")) _goM1->setRunVisible(true);
  else _goM1->setRunVisible(false);
}
void MainWindow::foM1ValChange( const QString& v){
  if(v.contains("Allow")) _foM1->setRunVisible(true);
  else _foM1->setRunVisible(false);
}
void MainWindow::rvM1ValChange( const QString& v){
  if(v.contains("Allow")) _rvM1->setRunVisible(true);
  else _rvM1->setRunVisible(false);
}
void MainWindow::goM2ValChange( const QString& v){
  if(v.contains("Allow")) _goM2->setRunVisible(true);
  else _goM2->setRunVisible(false);
}
void MainWindow::foM2ValChange( const QString& v){
  if(v.contains("Allow")) _foM2->setRunVisible(true);
  else _foM2->setRunVisible(false);
}
void MainWindow::rvM2ValChange( const QString& v){
  if(v.contains("Allow")) _rvM2->setRunVisible(true);
  else _rvM2->setRunVisible(false);
}
void MainWindow::goM3ValChange( const QString& v){
  if(v.contains("Allow")) _goM3->setRunVisible(true);
  else _goM3->setRunVisible(false);
}
void MainWindow::foM3ValChange( const QString& v){
  if(v.contains("Allow")) _foM3->setRunVisible(true);
  else _foM3->setRunVisible(false);
}
void MainWindow::rvM3ValChange( const QString& v){
  if(v.contains("Allow")) _rvM3->setRunVisible(true);
  else _rvM3->setRunVisible(false);
}

void MainWindow::showM1Control(){
  if(!_m1c){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_mac1c);
    _m1c=new MotorCtrl( "Motor M1 Control",this);
    prof.releaseProfile();
  }
 if(_m1c) _m1c->show();
}
void MainWindow::showM2Control(){
  if(!_m2c){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_mac2c);
    _m2c=new MotorCtrl( "Motor M2 Control",this);
    prof.releaseProfile();
  }
 if(_m2c) _m2c->show();
}
void MainWindow::showM3Control(){
  if(!_m3c){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_mac3c);
    _m3c=new MotorCtrl( "Motor M3 Control",this);
    prof.releaseProfile();
  }
 if(_m3c) _m3c->show();
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
