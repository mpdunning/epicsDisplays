#include <QProcess>
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  ui->setupUi(this);
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
//  connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(myCmnd()));
}

MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::myQuit(){
  qApp->quit();
}
void MainWindow::myCmnd(){
//  QProcess* process=new QProcess(this); int stat;
//  QString prog="/afs/slac/g/testfac/extras/scripts/startImageJ";
//  QStringList args;
//  args<<" ";
//  process->start(prog,args);
//  stat=process->waitForStarted();
//  qDebug()<<"in MainWindow::myCmnd: waitForStarted="<<stat;
}
