#include <QDebug>
#include "mainwindow.h"
#include "../motorCtrl.h"
#include "testdialog.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
  QStringList nullList;
  _haveM=0;
  if(pm){
//    _macros.append(pm);
//    _haveM=1;
//    qDebug()<<"inMainWIndow: macros="<<_macros;
  }
  _prof=new ContainerProfile;
  _prof->setupProfile( NULL,nullList,"","");
  setupUi(this);
  _macro1.append("P=CHA,R=2531-1-2");
  _macro2.append("P=CHA,R=2531-2-2");
  _prof->addMacroSubstitutions( _macro1);
  _m1dialog=new MotorCtrl( "",this);
  _prof->removeMacroSubstitutions();
  _prof->addMacroSubstitutions( _macro2);
  _m2dialog=new MotorCtrl( "",this);
  _tdialog=new TestDialog( "",this);
  _prof->removeMacroSubstitutions();


  connect( pushButtonM1,SIGNAL(clicked(bool)),this,SLOT(_showM1Dialog()));
  connect( pushButtonM2,SIGNAL(clicked(bool)),this,SLOT(_showM2Dialog()));
  connect( testButtons, SIGNAL(clicked(bool)),this,SLOT(_showTDialog()));

  connect(actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}
MainWindow::~MainWindow(){
  if(_m1dialog) delete _m1dialog;
  if(_m2dialog) delete _m2dialog;
  delete _prof;
}
void MainWindow::_showM1Dialog(){ if(_m1dialog) _m1dialog->show();}
void MainWindow::_showM2Dialog(){ if(_m2dialog) _m2dialog->show();}
void MainWindow::_showTDialog(){ if(_tdialog) _tdialog->show();}
void MainWindow::myQuit(){ qApp->quit();}
