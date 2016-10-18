#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  _haveM=0;
  if(pm){
    _macros.append(pm);
    _haveM=1;
    qDebug()<<"inMainWIndow: macros="<<_macros;
  }
  _prof=new ContainerProfile;
  _prof->setupProfile( this,this,this,this,"","","");
  ui->setupUi(this);
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}

MainWindow::~MainWindow(){
  delete ui;
  delete _prof;
}
//void MainWindow::onStatusMessage( QString s){}
//void MainWindow::onWarningMessage( QString s){}
//void MainWindow::onErrorMessage( QString s){}
void MainWindow::myQuit(){
  qApp->quit();
}
