#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  QStringList nullList;
  _prof=new ContainerProfile;
  _prof->setupProfile( this,nullList,"","");
  ui->setupUi(this);
  _hmadialog=0;
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  connect(ui->actionShowHMRegs,SIGNAL(triggered(bool)),this,SLOT(showHMRegs()));
  connect(ui->actionShowStatus,SIGNAL(triggered(bool)),this,SLOT(showStatus()));
  connect(ui->actionShowHMAdcs,SIGNAL(triggered(bool)),this,SLOT(showHMAdcs()));
  connect(ui->actionShowTrig,SIGNAL(triggered(bool)),this,SLOT(showTrig()));
  connect(ui->actionShowPWM,SIGNAL(triggered(bool)),this,SLOT(showPwm()));
  connect(ui->actionShowWFM,SIGNAL(triggered(bool)),this,SLOT(showWfm()));
  connect(ui->actionShowGDRegs,SIGNAL(triggered(bool)),this,SLOT(showGDRegs()));
  connect(ui->actionShowGDWFM,SIGNAL(triggered(bool)),this,SLOT(showGDWfm()));
}
MainWindow::~MainWindow(){
  delete ui;
  if(_hmadialog) delete _hmadialog;
  delete _prof;
}
void MainWindow::myQuit(){ qApp->quit();}
void MainWindow::showHMRegs(){
}
void MainWindow::showStatus(){
}
void MainWindow::showHMAdcs(){
  if(!_hmadialog) _hmadialog=new HMAdcsDialog(this);
  _hmadialog->show();
}
void MainWindow::showTrig(){
}
void MainWindow::showPwm(){
}
void MainWindow::showWfm(){
}
void MainWindow::showGDRegs(){
}
void MainWindow::showGDWfm(){
}
