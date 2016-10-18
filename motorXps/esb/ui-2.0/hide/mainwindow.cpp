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
  _prof->setupProfile( this,this,this,this,"","","",false);
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
void MainWindow::launchGui( QString name,QString subst,
        ASguiForm::creationOptions){
  QString str;
  if(_haveM){ str=_macros; str.append(","); str.append(subst);}
  else str=subst;
  if(!name.compare(QString("motordialog.ui"))){
    MotorDialog* pmd;
    if(!(pmd=_findMotorDialog( subst))){
      _prof->addMacroSubstitutions( str);
      pmd=new MotorDialog(this);
      _prof->removeMacroSubstitutions();
      listItem_t* pi=new listItem_t;
      pi->psubst=new QString(subst);
      pi->pdlg=pmd;
      _mdlist.append(pi);
    }
    pmd->show();
  }
  else if(!name.compare(QString("setupdialog.ui"))){
    SetupDialog* psd;
    if(!(psd=_findSetupDialog( subst))){
      _prof->addMacroSubstitutions( str);
      psd=new SetupDialog(this);
      _prof->removeMacroSubstitutions();
      listItem_t* pi=new listItem_t;
      pi->psubst=new QString(subst);
      pi->pdlg=psd;
      _sdlist.append(pi);
    }
    psd->show();
  }
  else if(!name.compare(QString("phasedialog.ui"))){
    if(!_pdialog){
      _prof->addMacroSubstitutions( str);
      _pdialog=new PhaseDialog(this);
      _prof->removeMacroSubstitutions();
    }
    _pdialog->show();
  }
}
void MainWindow::onStatusMessage( QString){}
void MainWindow::onWarningMessage( QString){}
void MainWindow::onErrorMessage( QString){}
void MainWindow::myQuit(){ qApp->quit();}
