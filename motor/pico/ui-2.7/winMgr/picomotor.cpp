#include <QtGui>
#include "picomotor.h"
#include "motordialog.h"
#include "motordetails.h"
#include "mrecord.h"

PicoMotor::PicoMotor( QWidget* parent): QDialog( parent){
  QStringList nullList;
  setupUi(this);
  connect( Motor1,SIGNAL(clicked(bool)), this, SLOT(_mDialog1()));
  connect( Motor3,SIGNAL(clicked(bool)), this, SLOT(_mDialog3()));
  connect( Motor2,SIGNAL(clicked(bool)), this, SLOT(_mDialog2()));
  connect( Detail1,SIGNAL(clicked(bool)), this, SLOT(_dDialog1()));
  connect( Detail3,SIGNAL(clicked(bool)), this, SLOT(_dDialog3()));
  connect( Debug1,SIGNAL(clicked(bool)), this, SLOT(_rDialog1()));
  connect( Debug3,SIGNAL(clicked(bool)), this, SLOT(_rDialog3()));
  _prof=new ContainerProfile;
  _prof->setupProfile( this,nullList,"","");
  _action=new QAction(this);
  _action->setCheckable(true);
  connect( _action,SIGNAL(triggered()),this,SLOT(_actTriggered()));
  connect( _action,SIGNAL(triggered()),this,SLOT(show()));
  connect( _action,SIGNAL(triggered()),this,SLOT(setFocus()));
  connect( this,SIGNAL(destroyed(QObject*)),this,SLOT(_exit()));
}
//PicoMotor::~PicoMotor(){}

void PicoMotor::setup( QString title,QString nm1,QString nm3,QString nm2,
			QString mac1,QString mac3,QString mac2){
  _title=title;
  setWindowTitle(title);
  _action->setText(title);
  _prof->addMacroSubstitutions( mac1);
  _mdlg1=new MotorDialog("",this);
  _ddlg1=new MotorDetails(this);
  _mdlg1->setDetails(_ddlg1);
  _rdlg1=new MRecord(this);
  _mdlg1->setWindowTitle(nm1);
  _ddlg1->setWindowTitle(nm1);
  _rdlg1->setWindowTitle(nm1);
  _prof->removeMacroSubstitutions();
  _prof->addMacroSubstitutions( mac3);
  _mdlg3=new MotorDialog("",this);
  _ddlg3=new MotorDetails(this);
  _mdlg3->setDetails(_ddlg3);
  _rdlg3=new MRecord(this);
  _mdlg3->setWindowTitle(nm3);
  _ddlg3->setWindowTitle(nm3);
  _rdlg3->setWindowTitle(nm3);
  _prof->removeMacroSubstitutions();
  _prof->addMacroSubstitutions( mac2);
  _mdlg2=new MotorDialog("",this);
  _ddlg2=new MotorDetails(this);
  _mdlg2->setDetails(_ddlg2);
  _mdlg2->setWindowTitle(nm2);
  _prof->removeMacroSubstitutions();
   Qt::WindowFlags flags;
  flags=	Qt::CustomizeWindowHint;
//		Qt::WindowTitleHint|
//		Qt::WindowMinimizeButtonHint|
//		Qt::WindowMaximizeButtonHint;
  setWindowFlags(flags);
}
void PicoMotor::_mDialog1(){ _mdlg1->show();}
void PicoMotor::_mDialog2(){ _mdlg2->show();}
void PicoMotor::_mDialog3(){ _mdlg3->show();}
void PicoMotor::_dDialog1(){ _ddlg1->show();}
void PicoMotor::_dDialog3(){ _ddlg3->show();}
void PicoMotor::_rDialog1(){ _rdlg1->show();}
void PicoMotor::_rDialog3(){ _rdlg3->show();}
void PicoMotor::_exit(){
  qDebug()<<"PicoMotor::_exit"<<_title;
}
void PicoMotor::_actTriggered(){
//--- action triggered, make sure is maximized --------------------
  if(windowState()==Qt::WindowMinimized) setWindowState( Qt::WindowActive);
}
