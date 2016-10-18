#ifndef _picomotor_h
#define _picomotor_h

#include <QDialog>
#include <QEForm.h>
#include <ContainerProfile.h>
#include "ui_picomotor.h"

class MotorDialog;
class MotorDetails;
class MRecord;

class PicoMotor: public QDialog, public Ui::PicoMotor{
  Q_OBJECT
public:
  PicoMotor( QWidget* parent=0);
  void setup( QString title,QString mac1,QString mac2,QString mac3);

private slots:
  void _mDialog1();
  void _mDialog3();
  void _dDialog1();
  void _dDialog3();
  void _rDialog1();
  void _rDialog3();
  void _mDialog2();
//  void onStatusMessage( QString){};
//  void onWarningMessage( QString){};
//  void onErrorMessage( QString){};
  void launchGui( QString,QEForm::creationOptions){};

private:
  MotorDialog*	_mdlg1;
  MotorDialog*	_mdlg3;
  MotorDialog*	_mdlg2;		// for middle motor (B) dialog
  MotorDetails*	_ddlg1;
  MotorDetails*	_ddlg3;
  MotorDetails*	_ddlg2;
  MRecord*	_rdlg1;
  MRecord*	_rdlg3;
  ContainerProfile*	_prof;
};

#endif
