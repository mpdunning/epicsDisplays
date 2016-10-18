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
//  ~PicoMotor();
  void setup( QString title,QString nm1,QString nm3,QString nm2,
		QString mac1,QString mac3,QString mac2);
  QAction* winAction() const {return(_action);}
  QString title(){ return(_title);}

private slots:
  void _exit();
  void _actTriggered();
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
  QString	_title;
  MotorDialog*	_mdlg1;
  MotorDialog*	_mdlg3;
  MotorDialog*	_mdlg2;		// for middle motor (B) dialog
  MotorDetails*	_ddlg1;
  MotorDetails*	_ddlg3;
  MotorDetails*	_ddlg2;
  MRecord*	_rdlg1;
  MRecord*	_rdlg3;
  ContainerProfile*	_prof;
  QAction*	_action;
};

#endif
