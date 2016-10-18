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
  QStringList nullList; QStringList mlist; int i;
  QString macro,macros,pmac,nmac,amac,dmac,mmac,xmac,macch,str;
  _haveM=0;
  if(pm){
    macro.append(pm);
    _haveM=1;
    macch.append("C1").append(macro.section("C1",1));
    mlist=macro.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P="))  pmac.append(str);
      if(str.contains("N="))  nmac.append(str);
      if(str.contains("A1=")) amac.append(str);
      if(str.contains("D1=")) dmac.append(str);
      if(str.contains("M1=")) mmac.append(str);
    }
  }
  else{
    pmac.append("P=CHA");
    nmac.append("N=2");
    amac.append("A1=3132");
    dmac.append("D1=4132");
    mmac.append("M1=2531-1");
  }
  _m1c=0; _bkh=0;
  xmac=mmac;
//  mmac=mmac.remove(1,1);
  _macmc.append(pmac).append(",").append(xmac.remove(1,1)).append(",");
  _macmc.append(nmac);
  _macbk.append(pmac).append(",").append(mmac).append(",");
  _macbk.append(amac).append(",").append(dmac).append(",").append(nmac);
  macros.append(pmac).append(",").append(mmac).append(",");
  macros.append(nmac).append(",").append(amac).append(",");
  macros.append(dmac).append(",").append(macch);
  _goDnyM1=_foDnyM1=_rvDnyM1=NULL;
  _ctrlM1=NULL;
  _goM1=_foM1=_rvM1=NULL;
qDebug()<<"macros="<<macros;
  ContainerProfile prof;
  prof.setupProfile( this,nullList,"",macros);
  ui=new Ui::MainWindow;
  ui->setupUi(this);
  prof.removeMacroSubstitutions();

  connect(ui->qeformM1,SIGNAL(formLoaded(bool)),SLOT(qeformMReady(bool)));

  connect( ui->pbBkh,SIGNAL(clicked(bool)),this,SLOT(showBkhDetail()));
  connect( ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  prof.releaseProfile();
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::qeformMReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformMReady: failed to load";
    return;
  }
  _goDnyM1=(QELabel*)ui->qeformM1->getChild("DenyGoQELB");
  _goM1=(CAButton*)ui->qeformM1->getChild("GO_PB");
  if(!_goDnyM1||!_goM1) qDebug()<<"qeformMReady: DenyGoQELB not found";
  else connect( _goDnyM1,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM1ValChange(const QString&)));

  _foDnyM1=(QELabel*)ui->qeformM1->getChild("DenyFoQELB");
  _foM1=(CAButton*)ui->qeformM1->getChild("FOR_PB");
  if(!_foDnyM1||!_foM1) qDebug()<<"qeformMReady: DenyFoQELB not found";
  else connect( _foDnyM1,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(foM1ValChange(const QString&)));

  _rvDnyM1=(QELabel*)ui->qeformM1->getChild("DenyRvQELB");
  _rvM1=(CAButton*)ui->qeformM1->getChild("REV_PB");
  if(!_rvDnyM1||!_rvM1) qDebug()<<"qeformMReady: DenyRvQELB not found";
  else connect( _rvDnyM1,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(rvM1ValChange(const QString&)));

  _ctrlM1=(QPushButton*)ui->qeformM1->getChild("ctrlPB");
  if(!_ctrlM1) qDebug()<<"qeformMReady: ctrlPB not found";
  else connect( _ctrlM1,SIGNAL(clicked(bool)),this,SLOT(showMControl()));
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
void MainWindow::showMControl(){
  if(!_m1c){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macmc);
    _m1c=new MotorCtrl( "Motor X Control",this);
    prof.releaseProfile();
  }
 if(_m1c) _m1c->show();
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
