#include "testdialog.h"
#include "ui_testdialog.h"

TestDialog::TestDialog(QString title,QWidget *parent): QDialog(parent){
  setupUi(this);
  if(!title.isEmpty()) setWindowTitle( title);
}
TestDialog::~TestDialog(){}
