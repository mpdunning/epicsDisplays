#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( char* pm,QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  QStringList nullList;
  _haveM=0;
  //qDebug()<<"in MainWindow: "<<pm;
  if(pm){
    _macros.append(pm);
    _haveM=1;
    //qDebug()<<"inMainWIndow: macros="<<_macros;
  }
  _prof=new ContainerProfile;
  _prof->setupProfile( NULL,nullList,"","");
  _prof->addMacroSubstitutions( _macros);
  _prof->setDontActivateYet(true);
  ui->setupUi(this);
  _prof->setDontActivateYet(false);
  QEWidget* awidget;
  while((awidget=_prof->getNextContainedWidget())) awidget->activate();

  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  _prof->removeMacroSubstitutions();
}
//void MainWindow::launchGui( QString name,QEForm::creationOptions){
  //qDebug()<<"in MainWindow::launchGui: name="<<name;
//}
MainWindow::~MainWindow(){
  delete ui;
  delete _prof;
}
void MainWindow::myQuit(){ qApp->quit();}
