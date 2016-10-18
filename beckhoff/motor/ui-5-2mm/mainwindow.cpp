#include <QDebug>
#include <ContainerProfile.h>
#include "cabutton.h"
#include "mainwindow.h"
#include "motorctrl.h"
#include "bkhdetail.h"

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
  QString macro12,pmac,nmac,rmac,tmac,xmac,ymac,m12mac;
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
  }
  else{
    pmac.append("P=CHA");
    nmac.append("N=2");
    rmac.append("R=3132");
    tmac.append("T=4132");
    xmac.append("M1=2531-1");
    ymac.append("M2=2531-2");
  }
  m12mac.append(xmac).append(",").append(ymac);
  _mcx=_mcy=0; _bkh=0;
  _macxc.append(pmac).append(",").append(xmac.remove(1,1));
  _macxc.append(",").append(nmac);
  _macyc.append(pmac).append(",").append(ymac.remove(1,1));
  _macyc.append(",").append(nmac);
  _macbk.append(pmac).append(",").append(m12mac).append(",");
  _macbk.append(rmac).append(",").append(tmac).append(",").append(nmac);
  macro12.append(pmac).append(",").append(m12mac).append(",").append(nmac);
  macro12.append(",").append(rmac).append(",").append(tmac);
  _goDnyM1=_foDnyM1=_rvDnyM1=NULL;
  _goDnyM2=_foDnyM2=_rvDnyM2=NULL;
  _ctrlM1=_ctrlM2=NULL;
  _goM1=_foM1=_rvM1=_goM2=_foM2=_rvM2=NULL;
  ContainerProfile prof;
  prof.setupProfile( this,nullList,"",macro12);
  ui=new Ui::MainWindow;
  ui->setupUi(this);
  prof.removeMacroSubstitutions();

  connect(ui->qeformM1,SIGNAL(formLoaded(bool)),SLOT(qeformM1Ready(bool)));
  connect(ui->qeformM2,SIGNAL(formLoaded(bool)),SLOT(qeformM2Ready(bool)));

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
  else connect( _ctrlM1,SIGNAL(clicked(bool)),this,SLOT(showMXControl()));
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
  if(!_goDnyM2||!_goM2) qDebug()<<"qeformM1Ready: DenyGoQELB not found";
  else connect( _goDnyM2,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM2ValChange(const QString&)));

  _foDnyM2=(QELabel*)ui->qeformM2->getChild("DenyFoQELB");
  _foM2=(CAButton*)ui->qeformM2->getChild("FOR_PB");
  if(!_foDnyM2||!_foM2) qDebug()<<"qeformM1Ready: DenyFoQELB not found";
  else connect( _foDnyM2,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(foM2ValChange(const QString&)));

  _rvDnyM2=(QELabel*)ui->qeformM2->getChild("DenyRvQELB");
  _rvM2=(CAButton*)ui->qeformM2->getChild("REV_PB");
  if(!_rvDnyM2||!_rvM2) qDebug()<<"qeformM1Ready: DenyRvQELB not found";
  else connect( _rvDnyM2,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(rvM2ValChange(const QString&)));

  _ctrlM2=(QPushButton*)ui->qeformM2->getChild("ctrlPB");
  if(!_ctrlM2) qDebug()<<"qeformM1Ready: ctrlPB not found";
  else connect( _ctrlM2,SIGNAL(clicked(bool)),this,SLOT(showMYControl()));
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
void MainWindow::showMXControl(){
  if(!_mcx){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macxc);
    _mcx=new MotorCtrl( "Motor X Control",this);
    prof.releaseProfile();
  }
 if(_mcx) _mcx->show();
}
void MainWindow::showMYControl(){
  if(!_mcy){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macyc);
    _mcy=new MotorCtrl( "Motor Y Control",this);
    prof.releaseProfile();
  }
 if(_mcy) _mcy->show();
}
void MainWindow::showBkhDetail(){
  if(!_bkh){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macbk);
    _bkh=new BkhDetail( "Beckhoff Detail",this);
    prof.releaseProfile();
  }
 if(_bkh) _bkh->show();
}
void MainWindow::myQuit(){ qApp->quit();}
