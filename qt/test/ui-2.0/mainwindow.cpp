#include <QtGui>
#include "mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
//  _haveM=0;
//  if(pm){
//    _macros.append(pm);
//    _haveM=1;
//    qDebug()<<"inMainWIndow: macros="<<_macros;
//  }
//  _prof=new ContainerProfile;
//  _prof->setupProfile( this,this,this,this,"","","",false);
//  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
//  _image=new RenderArea;
  _image=new ImageFrame;
  _pixm.load( "21.png");
//  _pixm.load( "small.JPG");
  _image->setPixmap( _pixm);
  setCentralWidget(_image);

}

MainWindow::~MainWindow(){
//  delete _prof;
}
//void MainWindow::onStatusMessage( QString){}
//void MainWindow::onWarningMessage( QString){}
//void MainWindow::onErrorMessage( QString){}
void MainWindow::myQuit(){ qApp->quit();}
