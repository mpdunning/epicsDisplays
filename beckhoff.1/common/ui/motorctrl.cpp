#include <QDebug>
#include "ContainerProfile.h"
#include "motorctrl.h"

MotorCtrl::MotorCtrl( QString title,QWidget* parent): QDialog(parent){
/*-----------------------------------------------------------------------------
 *---------------------------------------------------------------------------*/
  ContainerProfile prof;
  _macros=prof.getMacroSubstitutions();
  ui=new Ui::MotorCtrl;
  ui->setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
  ui->ctrlClosePB->setDefault(false);
  ui->ctrlClosePB->setAutoDefault(false);
  connect( ui->ctrlClosePB,SIGNAL(clicked(bool)),this,SLOT(myClose()));
  prof.releaseProfile();
}
MotorCtrl::~MotorCtrl(){
  delete ui;
}
void MotorCtrl::myClose(){
  close();
  emit closing();
}
