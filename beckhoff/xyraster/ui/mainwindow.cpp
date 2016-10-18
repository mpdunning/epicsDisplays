#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
/*-----------------------------------------------------------------------------
 * First argument is a "list" of macro replacements.  It is of the form:
 * "P=<val>,X=<val>,M1=<val>,M2=<val>,R=<val>,T=<val>,N=<val>"
 * where
 * P=<val> is the area for the xyRaster program PVs,
 * X=<val> is the area for the Beckhoff motors IOC PVs,
 * M1=<val> is the motor 1 field in the motors IOC PVs,
 * M2=<val> is the motor 2 field in the motors IOC PVs,
 * R=<val> is the ADC field in the motors IOC PVs,
 * T=<val> is the DAC field in the motors IOC PVs,
 * N=<val> is the Beckhoff IOC number, which is part of all motors IOC PVs.
 * If macro replacements are supplied as a command line argument, then all
 * six components must be supplied.  If macro replacements are not supplied,
 * then default values, see below, are used.
 * Note, that the program is launched as follows:
 * <program name> [-m "<macro string>"]
 *---------------------------------------------------------------------------*/
  QStringList nullList; QStringList mlist; QString macs; QString str; int i;
  QString pmac,xmac,m1mac,m2mac,nmac,rmac,tmac;;
  _haveM=0;
  if(pm){
    macs.append(pm);
    _haveM=1;
    mlist=macs.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P")) pmac.append(str);
      if(str.contains("X")) xmac.append(str);
      if(str.contains("N")) nmac.append(str);
      if(str.contains("R")) rmac.append(str);
      if(str.contains("T")) tmac.append(str);
      if(str.contains("M1")) m1mac.append(str);
      if(str.contains("M2")) m2mac.append(str);
    }
  }
  else{
    pmac.append("P=CHA:XYM");
    xmac.append("P=CHA");
    nmac.append("N=2");
    rmac.append("R=3132");
    tmac.append("T=4132");
    m1mac.append("M1=2531-1");
    m2mac.append("M2=2531-2");
  }
  _macro.append(pmac);
  _mmacro.append(xmac).append(",").append(nmac).append(",");
  _mmacro.append(m1mac).append(",").append(m2mac).append(",");
  _mmacro.append(rmac).append(",").append(tmac);
  qDebug()<<"MainWIndow: _macro="<<_macro;
  qDebug()<<"MainWIndow: _mmacro="<<_mmacro;

  _prunning=false;
  ContainerProfile prof;
  ui=new Ui::MainWindow;
  prof.setupProfile( this,nullList,"",_macro);
  ui->setupUi(this);
  prof.removeMacroSubstitutions();

  connect( ui->xyMotPB,SIGNAL(clicked(bool)),this,SLOT(startXYRaster()));

  connect( ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
//  statusBar()->addWidget( ui->errMessage1);
  prof.releaseProfile();

  QMetaObject::Connection constat;
  _proc=new QProcess(this);
  constat=connect( _proc,SIGNAL(finished(int,QProcess::ExitStatus)),
	this,SLOT(procFinished(int,QProcess::ExitStatus)));
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::startXYRaster(){
  if(_prunning){
    qDebug()<<"MainWindow::startXYRaster: No action, process already loaded";
    return;
  }
  QString pname="/afs/slac/g/testfac/tools/display/beckhoff/";
  pname.append( "motor/ui-5-2mm/arch-64/motors");
  QStringList args;
  args<<"-m"<<_mmacro;
  _proc->start( pname,args);
  _prunning=true;
}
void MainWindow::procFinished( int exitc,QProcess::ExitStatus exits){
  qDebug()<<"procFinished: exitcode=%d"<<exitc;
  _prunning=false;
}
void MainWindow::myQuit(){ qApp->quit();}
