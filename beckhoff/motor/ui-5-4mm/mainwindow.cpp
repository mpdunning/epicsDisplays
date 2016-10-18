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
  QString pmac,nmac,amac,bmac,dmac,emac,macm1,macm2,macm3,macm4,macch;
  _haveM=0;
  if(pm){
    macro.append(pm);
    _haveM=1;
    macch.append("C1");
    macch.append(macro.section("C1",1));
    mlist=macro.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P")) pmac.append(str);
      if(str.contains("N")) nmac.append(str);
      if(str.contains("A1")) amac.append(str);
      if(str.contains("D1")) dmac.append(str);
      if(str.contains("M1")) macm1.append(str);
      if(str.contains("M2")) macm2.append(str);
      if(str.contains("M3")) macm3.append(str);
      if(str.contains("M4")) macm4.append(str);
    }
    qDebug()<<"MainWIndow: macro="<<macro;
    qDebug()<<"MainWIndow: macch="<<macch;
  }
  else{
    pmac.append("P=CHA");
    nmac.append("N=3m");
    amac.append("A1=3162");
    dmac.append("D1=4002");
    macm1.append("M1=2531-3");
    macm2.append("M2=2531-4");
    macm3.append("M3=2531-5");
    macm4.append("M3=2531-6");
  }
  ContainerProfile prof;
  _mc1=_mc2=_mc3=_mc4=0; _bkh=0;
  ui=new Ui::MainWindow;
  _mac1234.append(pmac).append(",").append(macm1).append(",");
  _mac1234.append(macm2).append(",").append(macm3).append(",");
  _mac1234.append(macm4).append(",").append(amac).append(",");
  _mac1234.append(dmac).append(",").append(nmac).append(",");
  _mac1234.append(macch);
  _macM1c.append(pmac).append(",").append(macm1.remove(1,1));
  _macM1c.append(",").append(nmac);
  _macM2c.append(pmac).append(",").append(macm2.remove(1,1));
  _macM2c.append(",").append(nmac);
  _macM3c.append(pmac).append(",").append(macm3.remove(1,1));
  _macM3c.append(",").append(nmac);
  _macM4c.append(pmac).append(",").append(macm4.remove(1,1));
  _macM4c.append(",").append(nmac);
qDebug()<<"mac1234="<<_mac1234;
QString macsub=prof.getMacroSubstitutions();
qDebug()<<"macsub="<<macsub;
//  prof.setupProfile( this,nullList,"",_mac1234);
  prof.setupProfile( this,nullList,"","");
  prof.addMacroSubstitutions( _mac1234);
macsub=prof.getMacroSubstitutions();
qDebug()<<"macsub="<<macsub;
  ui->setupUi(this);
  prof.removeMacroSubstitutions();
macsub=prof.getMacroSubstitutions();
qDebug()<<"macsub="<<macsub;

  connect(ui->qeform1,SIGNAL(formLoaded(bool)),SLOT(qeformM1Ready(bool)));
  connect(ui->qeform2,SIGNAL(formLoaded(bool)),SLOT(qeformM2Ready(bool)));
  connect(ui->qeform3,SIGNAL(formLoaded(bool)),SLOT(qeformM3Ready(bool)));
  connect(ui->qeform4,SIGNAL(formLoaded(bool)),SLOT(qeformM4Ready(bool)));

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
  _goDnyM1=(QELabel*)ui->qeform1->getChild("DenyGoQELB");
  _goM1=(CAButton*)ui->qeform1->getChild("GO_PB");
  if(!_goDnyM1||!_goM1) qDebug()<<"qeformM1Ready: DenyGoQELB not found";
  else connect( _goDnyM1,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM1ValChange(const QString&)));

  _foDnyM1=(QELabel*)ui->qeform1->getChild("DenyFoQELB");
  _foM1=(CAButton*)ui->qeform1->getChild("FOR_PB");
  if(!_foDnyM1||!_foM1) qDebug()<<"qeformM1Ready: DenyFoQELB not found";
  else connect( _foDnyM1,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foM1ValChange(const QString&)));

  _rvDnyM1=(QELabel*)ui->qeform1->getChild("DenyRvQELB");
  _rvM1=(CAButton*)ui->qeform1->getChild("REV_PB");
  if(!_rvDnyM1||!_rvM1) qDebug()<<"qeformM1Ready: DenyRvQELB not found";
  else connect( _rvDnyM1,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvM1ValChange(const QString&)));

  _ctrlM1=(QPushButton*)ui->qeform1->getChild("ctrlPB");
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
  _goDnyM2=(QELabel*)ui->qeform2->getChild("DenyGoQELB");
  _goM2=(CAButton*)ui->qeform2->getChild("GO_PB");
  if(!_goDnyM2||!_goM2) qDebug()<<"qeformM2Ready: DenyGoQELB not found";
  else connect( _goDnyM2,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM2ValChange(const QString&)));

  _foDnyM2=(QELabel*)ui->qeform2->getChild("DenyFoQELB");
  _foM2=(CAButton*)ui->qeform2->getChild("FOR_PB");
  if(!_foDnyM2||!_foM2) qDebug()<<"qeformM2Ready: DenyFoQELB not found";
  else connect( _foDnyM2,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foM2ValChange(const QString&)));

  _rvDnyM2=(QELabel*)ui->qeform2->getChild("DenyRvQELB");
  _rvM2=(CAButton*)ui->qeform2->getChild("REV_PB");
  if(!_rvDnyM2||!_rvM2) qDebug()<<"qeformM2Ready: DenyRvQELB not found";
  else connect( _rvDnyM2,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvM2ValChange(const QString&)));

  _ctrlM2=(QPushButton*)ui->qeform2->getChild("ctrlPB");
  if(!_ctrlM2) qDebug()<<"qeform2Ready: ctrlPB not found";
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
  _goDnyM3=(QELabel*)ui->qeform3->getChild("DenyGoQELB");
  _goM3=(CAButton*)ui->qeform3->getChild("GO_PB");
  if(!_goDnyM3||!_goM3) qDebug()<<"qeformM3Ready: DenyGoQELB not found";
  else connect( _goDnyM3,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM3ValChange(const QString&)));

  _foDnyM3=(QELabel*)ui->qeform3->getChild("DenyFoQELB");
  _foM3=(CAButton*)ui->qeform3->getChild("FOR_PB");
  if(!_foDnyM3||!_foM3) qDebug()<<"qeformM3Ready: DenyFoQELB not found";
  else connect( _foDnyM3,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foM3ValChange(const QString&)));

  _rvDnyM3=(QELabel*)ui->qeform3->getChild("DenyRvQELB");
  _rvM3=(CAButton*)ui->qeform3->getChild("REV_PB");
  if(!_rvDnyM3||!_rvM3) qDebug()<<"qeformM3Ready: DenyRvQELB not found";
  else connect( _rvDnyM3,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvM3ValChange(const QString&)));

  _ctrlM3=(QPushButton*)ui->qeform3->getChild("ctrlPB");
  if(!_ctrlM3) qDebug()<<"qeformM3Ready: ctrlPB not found";
  else connect( _ctrlM3,SIGNAL(clicked(bool)),this,SLOT(showM3Control()));
}
void MainWindow::qeformM4Ready( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::qeformM4Ready: failed to load";
    return;
  }
  _goDnyM4=(QELabel*)ui->qeform4->getChild("DenyGoQELB");
  _goM4=(CAButton*)ui->qeform4->getChild("GO_PB");
  if(!_goDnyM4||!_goM4) qDebug()<<"qeformM4Ready: DenyGoQELB not found";
  else connect( _goDnyM4,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(goM4ValChange(const QString&)));

  _foDnyM4=(QELabel*)ui->qeform4->getChild("DenyFoQELB");
  _foM4=(CAButton*)ui->qeform4->getChild("FOR_PB");
  if(!_foDnyM4||!_foM4) qDebug()<<"qeformM4Ready: DenyFoQELB not found";
  else connect( _foDnyM4,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(foM4ValChange(const QString&)));

  _rvDnyM4=(QELabel*)ui->qeform4->getChild("DenyRvQELB");
  _rvM4=(CAButton*)ui->qeform4->getChild("REV_PB");
  if(!_rvDnyM4||!_rvM4) qDebug()<<"qeformM4Ready: DenyRvQELB not found";
  else connect( _rvDnyM4,SIGNAL(dbValueChanged(const QString&)),
        this,SLOT(rvM4ValChange(const QString&)));

  _ctrlM4=(QPushButton*)ui->qeform4->getChild("ctrlPB");
  if(!_ctrlM4) qDebug()<<"qeformM4Ready: ctrlPB not found";
  else connect( _ctrlM4,SIGNAL(clicked(bool)),this,SLOT(showM4Control()));
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
void MainWindow::goM4ValChange( const QString& v){
  if(v.contains("Allow")) _goM4->setRunVisible(true);
  else _goM4->setRunVisible(false);
}
void MainWindow::foM4ValChange( const QString& v){
  if(v.contains("Allow")) _foM4->setRunVisible(true);
  else _foM4->setRunVisible(false);
}
void MainWindow::rvM4ValChange( const QString& v){
  if(v.contains("Allow")) _rvM4->setRunVisible(true);
  else _rvM4->setRunVisible(false);
}

void MainWindow::showM1Control(){
  if(!_mc1){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macM1c);
    _mc1=new MotorCtrl( "Motor M1 Control",this);
    prof.releaseProfile();
  }
 if(_mc1) _mc1->show();
}
void MainWindow::showM2Control(){
  if(!_mc2){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macM2c);
    _mc2=new MotorCtrl( "Motor M2 Control",this);
    prof.releaseProfile();
  }
 if(_mc2) _mc2->show();
}
void MainWindow::showM3Control(){
  if(!_mc3){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macM3c);
    _mc3=new MotorCtrl( "Motor M3 Control",this);
    prof.releaseProfile();
  }
 if(_mc3) _mc3->show();
}
void MainWindow::showM4Control(){
  if(!_mc4){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_macM4c);
    _mc4=new MotorCtrl( "Motor M4 Control",this);
    prof.releaseProfile();
  }
 if(_mc4) _mc4->show();
}
void MainWindow::showBkhDetail(){
  if(!_bkh){
    ContainerProfile prof;
QString macsub=prof.getMacroSubstitutions();
qDebug()<<"macsub="<<macsub;
//    prof.setupProfile( this,QStringList(),"",_mac1234);
    prof.addMacroSubstitutions( _mac1234);
macsub=prof.getMacroSubstitutions();
qDebug()<<"macsub="<<macsub;
    _bkh=new BkhDetail( "Beckhoff Detail",this);
    prof.releaseProfile();
  }
 if(_bkh) _bkh->show();
}
void MainWindow::myQuit(){ qApp->quit();}
