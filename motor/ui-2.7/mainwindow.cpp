#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"
#include "motordialog.h"
#include "motordetails.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
  QStringList nullList;
  _haveM=0;
  if(pm){
//    _macros.append(pm);
//    _haveM=1;
//    qDebug()<<"inMainWIndow: macros="<<_macros;
  }
  ContainerProfile prof;
  prof.setupProfile( NULL,nullList,"","");
  setupUi(this);
  _macro1.append("P=XPS,M=m1");
  _macro2.append("P=PICO,M=m2");
  prof.addMacroSubstitutions( _macro1);
  _m1dialog=new MotorDialog( "",this);
  _d1dialog=new MotorDetails(this);
  _m1dialog->setDetails( _d1dialog);
  prof.removeMacroSubstitutions();
  prof.addMacroSubstitutions( _macro2);
  _m2dialog=new MotorDialog( "",this);
  _d2dialog=new MotorDetails(this);
  _m2dialog->setDetails( _d2dialog);
  prof.releaseProfile();

  connect( pushButtonM1,SIGNAL(clicked(bool)),this,SLOT(_showM1Dialog()));
  connect( pushButtonM2,SIGNAL(clicked(bool)),this,SLOT(_showM2Dialog()));

  connect(actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}
MainWindow::~MainWindow(){
  if(_m1dialog) delete _m1dialog;
  if(_m2dialog) delete _m2dialog;
  if(_d1dialog) delete _d1dialog;
  if(_d2dialog) delete _d2dialog;
}
void MainWindow::_showM1Dialog(){ if(_m1dialog) _m1dialog->show();}
void MainWindow::_showM2Dialog(){ if(_m2dialog) _m2dialog->show();}
void MainWindow::myQuit(){ qApp->quit();}
