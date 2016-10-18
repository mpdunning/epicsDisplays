#include <QtGui>
#include "picomotor.h"
#include "motordialog.h"
#include "motordetails.h"
#include "mrecord.h"

PicoMotor::PicoMotor( QWidget* parent): QDialog( parent){
  QStringList nullList;
  setupUi(this);
  connect( Motor1,SIGNAL(clicked(bool)), this, SLOT(_mDialog1()));
  connect( Detail1,SIGNAL(clicked(bool)), this, SLOT(_dDialog1()));
  connect( Debug1,SIGNAL(clicked(bool)), this, SLOT(_rDialog1()));
  connect( Motor2,SIGNAL(clicked(bool)), this, SLOT(_mDialog2()));
  connect( Motor3,SIGNAL(clicked(bool)), this, SLOT(_mDialog3()));
  connect( Detail3,SIGNAL(clicked(bool)), this, SLOT(_dDialog3()));
  connect( Debug3,SIGNAL(clicked(bool)), this, SLOT(_rDialog3()));
  _prof=new ContainerProfile;
  _prof->setupProfile( this,nullList,"","","","","");
}

void PicoMotor::setup( QString title,QString mac1,QString mac2,QString mac3){
  _prof->addMacroSubstitutions( mac1);
  _mdlg1=new MotorDialog("",this);
  _ddlg1=new MotorDetails(this);
  _mdlg1->setDetails(_ddlg1);
  _rdlg1=new MRecord(this);
  _mdlg1->setWindowTitle(title);
  _ddlg1->setWindowTitle(title);
  _rdlg1->setWindowTitle(title);
  _prof->removeMacroSubstitutions();

  _prof->addMacroSubstitutions( mac2);
  _mdlg2=new MotorDialog("",this);
  _ddlg2=new MotorDetails(this);
  _mdlg2->setDetails(_ddlg2);
  _mdlg2->setWindowTitle(title);
  _prof->removeMacroSubstitutions();

  _prof->addMacroSubstitutions( mac3);
  _mdlg3=new MotorDialog("",this);
  _ddlg3=new MotorDetails(this);
  _mdlg3->setDetails(_ddlg3);
  _rdlg3=new MRecord(this);
  _mdlg3->setWindowTitle(title);
  _ddlg3->setWindowTitle(title);
  _rdlg3->setWindowTitle(title);
  _prof->removeMacroSubstitutions();
}
void PicoMotor::_mDialog1(){ _mdlg1->show();}
void PicoMotor::_mDialog2(){ _mdlg2->show();}
void PicoMotor::_mDialog3(){ _mdlg3->show();}
void PicoMotor::_dDialog1(){ _ddlg1->show();}
void PicoMotor::_dDialog3(){ _ddlg3->show();}
void PicoMotor::_rDialog1(){ _rdlg1->show();}
void PicoMotor::_rDialog3(){ _rdlg3->show();}
