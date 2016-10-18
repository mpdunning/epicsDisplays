#include "motordialog.h"
#include "motordetails.h"
#include "ui_motordialog.h"

MotorDialog::MotorDialog(QString title,QWidget *parent): QDialog(parent){
//  ui=new Ui::MotorDialog;
//  ui->setupUi(this);
  setupUi(this);
  _pdlg=0;
  if(!title.isEmpty()) setWindowTitle( title);
  connect( pbDetails,SIGNAL(clicked(bool)),this,SLOT(_showDetails()));
}
MotorDialog::~MotorDialog(){}
void MotorDialog::_showDetails(){
  if(!_pdlg) return;
  _pdlg->show();
}
