#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"
#include "histogram.h"
#include "profiles.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  QStringList nullList,mlist; QString macros,str;
  if(pm){
    macros.append(pm);
    mlist=macros.split(QChar(','));
    for( int i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P=")) _pmac.append(str);
      if(str.contains("T=")) _tmac.append(str);
    }
  }
  else{
    _pmac.append( "P=CPS1");
    _tmac.append( "T=CHA Test dCam");
  }
  _title=_tmac.remove("T=");
qDebug()<<"MainWindow: title="<<_title;
  ContainerProfile prof;
  prof.setupProfile( NULL,nullList,"","");
  prof.addMacroSubstitutions( _pmac);
  prof.setDontActivateYet(true);
  ui->setupUi(this);
  prof.setDontActivateYet(false);
  QEWidget* awidget;
  while((awidget=prof.getNextContainedWidget())) awidget->activate();

  connect(ui->showHistPB,SIGNAL(clicked(bool)),this,SLOT(_showHisto()));
  connect(ui->showProfPB,SIGNAL(clicked(bool)),this,SLOT(_showProfs()));
  prof.releaseProfile();
  setWindowTitle( _title);
  _histd=0; _profd=0;
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::_showHisto(){
  if(!_histd){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_pmac);
    _histd=new HistoDlg(_title);
    prof.releaseProfile();
  }
  if(_histd) _histd->show();
}
void MainWindow::_showProfs(){
  if(!_profd){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",_pmac);
    _profd=new ProfDlg(_title);
    prof.releaseProfile();
  }
  if(_profd) _profd->show();
}
