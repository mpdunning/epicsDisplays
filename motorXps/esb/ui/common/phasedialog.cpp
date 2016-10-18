#include "phasedialog.h"
#include "ui_phasedialog.h"

PhaseDialog::PhaseDialog(QWidget *parent):
	QDialog(parent), ui(new Ui::PhaseDialog){
  ui->setupUi(this);
}

PhaseDialog::~PhaseDialog(){ delete ui;}
