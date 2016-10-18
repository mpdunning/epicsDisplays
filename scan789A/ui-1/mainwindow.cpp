#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  _prof=new ContainerProfile;
  _prof->setupProfile( this,this,this,this,"","","",false);
  ui->setupUi(this);
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}

MainWindow::~MainWindow(){
  delete ui;
  delete _prof;
}
void MainWindow::myQuit(){ qApp->quit();}
