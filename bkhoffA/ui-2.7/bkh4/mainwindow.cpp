#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  QStringList nullList;
  _haveM=0;
  if(pm){
    _macros.append(pm);
    _haveM=1;
    qDebug()<<"in MainWIndow: macros="<<_macros;
  }
  _prof=new ContainerProfile;
  _prof->setupProfile( NULL,nullList,"",_macros);
  ui->setupUi(this);
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}
MainWindow::~MainWindow(){
  delete ui;
  delete _prof;
}
//void MainWindow::onStatusMessage( QString){}
//void MainWindow::onWarningMessage( QString){}
//void MainWindow::onErrorMessage( QString){}
void MainWindow::myQuit(){ qApp->quit();}
