#include <QDebug>
#include "mainwindow.h"
#include "motorCtrl.h"
//#include "motordetails.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
  QStringList nullList;
  _haveM=0;
  if(pm){
    _macro1.append(pm);
    _haveM=1;
    qDebug()<<"inMainWIndow: macro1="<<_macro1;
  }
  _prof=new ContainerProfile;
  _prof->setupProfile( NULL,nullList,"","");
  setupUi(this);
//  _macro1.append("P=XPS,M=m1");
//  _prof->addMacroSubstitutions( _macro1);
//  _m1Ctrl=new MotorCtrl( "",this);
//  _prof->removeMacroSubstitutions();
//  _prof->addMacroSubstitutions( _macro2);
//  _m2Ctrl=new MotorCtrl( "",this);
  //_d2dialog=new MotorDetails(this);
  //_m2dialog->setDetails( _d2dialog);
  _prof->removeMacroSubstitutions();

//  connect( pushButtonM1,SIGNAL(clicked(bool)),this,SLOT(_showM1Ctrl()));
//  connect( pushButtonM2,SIGNAL(clicked(bool)),this,SLOT(_showM2Ctrl()));

  connect(actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}
MainWindow::~MainWindow(){
//  if(_m1Ctrl) delete _m1Ctrl;
//  if(_m2Ctrl) delete _m2Ctrl;
//  if(_d1dialog) delete _d1dialog;
//  if(_d2dialog) delete _d2dialog;
  delete _prof;
}
//void MainWindow::_showM1Ctrl(){ if(_m1Ctrl) _m1Ctrl->show();}
//void MainWindow::_showM2Ctrl(){ if(_m2Ctrl) _m2Ctrl->show();}
void MainWindow::myQuit(){ qApp->quit();}
