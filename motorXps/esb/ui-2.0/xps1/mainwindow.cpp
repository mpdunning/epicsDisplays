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
    qDebug()<<"inMainWIndow: macros="<<_macros;
  }
  _prof=new ContainerProfile;
  _prof->setupProfile( this,nullList,"","");
  ui->setupUi(this);
  _mdialog=0;
  _sdialog=0;
  _pdialog=0;
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
}
MainWindow::~MainWindow(){
  delete ui;
  if(_mdialog) delete _mdialog;
  if(_sdialog) delete _sdialog;
  if(_pdialog) delete _pdialog;
  delete _prof;
}
MotorDialog* MainWindow::_findMotorDialog( QString subst){
  listItem_t* pi; MotorDialog* pd=0;
  QLinkedList<void*>::iterator i=_mdlist.begin();
  for( ; i!=_mdlist.end(); ++i){
    pi=(listItem_t*)*i;
    if(!pi->psubst->compare(subst)){ pd=(MotorDialog*)pi->pdlg; break;}
  }
  return(pd);
}
SetupDialog* MainWindow::_findSetupDialog( QString subst){
  listItem_t* pi; SetupDialog* pd=0;
  QLinkedList<void*>::iterator i=_sdlist.begin();
  for( ; i!=_sdlist.end(); ++i){
    pi=(listItem_t*)*i;
    if(!pi->psubst->compare(subst)){ pd=(SetupDialog*)pi->pdlg; break;}
  }
  return(pd);
}
void MainWindow::launchGui( QString name,QEForm::creationOptions){
  QString str; QStringList slist;
  slist=name.split('-');
  if(_haveM){ str=_macros; str.append(",");}
  if(slist.count()>1){
    str.append("M="); str.append(slist.at(1));
  }
qDebug()<<"in MainWindow::lauchGui: name="<<name;
qDebug()<<"in MainWindow::lauchGui: split="<<slist;
  if(!slist.at(0).compare(QString("motor"))){
qDebug()<<"in MainWindow::launchGui:0: slist.at(0)="<<slist.at(0);
    MotorDialog* pmd;
    if(!(pmd=_findMotorDialog( slist.at(1)))){
      _prof->addMacroSubstitutions( str);
      pmd=new MotorDialog(this);
      _prof->removeMacroSubstitutions();
      listItem_t* pi=new listItem_t;
      pi->psubst=new QString( slist.at(1));
      pi->pdlg=pmd;
      _mdlist.append(pi);
    }
    pmd->show();
  }
  else if(!slist.at(0).compare(QString("setup"))){
qDebug()<<"in MainWindow::launchGui:1: slist.at(0)="<<slist.at(0);
    SetupDialog* psd;
    if(!(psd=_findSetupDialog( slist.at(1)))){
      _prof->addMacroSubstitutions( str);
      psd=new SetupDialog(this);
      _prof->removeMacroSubstitutions();
      listItem_t* pi=new listItem_t;
      pi->psubst=new QString(slist.at(1));
      pi->pdlg=psd;
      _sdlist.append(pi);
    }
    psd->show();
  }
  else if(!slist.at(0).compare(QString("phasedialog.ui"))){
qDebug()<<"in MainWindow::launchGui:2: slist.at(0)="<<slist.at(0);
    if(!_pdialog){
      _prof->addMacroSubstitutions( str);
      _pdialog=new PhaseDialog(this);
      _prof->removeMacroSubstitutions();
    }
    _pdialog->show();
  }
}
void MainWindow::myQuit(){ qApp->quit();}
