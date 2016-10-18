#include "motordialog.h"
#include "ui_motordialog.h"

MotorDialog::MotorDialog(QWidget *parent):
	QDialog(parent), ui(new Ui::MotorDialog){
  ui->setupUi(this);
}

MotorDialog::~MotorDialog(){ delete ui;}
