#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  QStringList nullList,mlist; QString macros,pmac,tmac,str,title;
  if(pm){
    macros.append(pm);
    mlist=macros.split(QChar(','));
    for( int i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P=")) pmac.append(str);
      if(str.contains("T=")) tmac.append(str);
    }
  }
  else{
    pmac.append( "P=CPS1");
    tmac.append( "T=CHA Test dCam");
  }
  title=tmac.remove("T=");
qDebug()<<"MainWindow: title="<<title;
  ContainerProfile prof;
  prof.setupProfile( NULL,nullList,"","");
  prof.addMacroSubstitutions( pmac);
  prof.setDontActivateYet(true);
  ui->setupUi(this);
  prof.setDontActivateYet(false);
  QEWidget* awidget;
  while((awidget=prof.getNextContainedWidget())) awidget->activate();

  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  prof.releaseProfile();
  setWindowTitle( title);
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::myQuit(){ qApp->quit();}
