#include "motordetails.h"
#include "ui_motordetails.h"

MotorDetails::MotorDetails(QWidget *parent): QDialog(parent){
  ui=new Ui::MotorDetails;
  ui->setupUi(this);
  _action=new QAction(this);
  _action->setCheckable(true);
  connect( _action,SIGNAL(triggered()),this,SLOT(_actTriggered()));
  connect( _action,SIGNAL(triggered()),this,SLOT(show()));
  connect( _action,SIGNAL(triggered()),this,SLOT(setFocus()));
}
MotorDetails::~MotorDetails(){ delete ui;}
void MotorDetails::newAction( QString name){
  _action->setText(name);
  setWindowTitle(name);
}
void MotorDetails::_actTriggered(){
//--- action triggered, make sure is maximized --------------------
  if(windowState()==Qt::WindowMinimized) setWindowState( Qt::WindowActive);
}
