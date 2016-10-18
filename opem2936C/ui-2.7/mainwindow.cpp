#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  ui->setupUi(this);
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}

MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::myQuit(){ qApp->quit();}
