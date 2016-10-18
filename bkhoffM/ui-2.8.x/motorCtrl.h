#ifndef _motorCtrl_h
#define _motorCtrl_h

#include <QDialog>
#include "ui_motorCtrl.h"

//class MotorDetails;
//namespace Ui{ class MotorDialog;}

class MotorCtrl: public QDialog, public Ui::MotorCtrl{
  Q_OBJECT

public:
  explicit MotorCtrl(QString title,QWidget *parent = 0);
  ~MotorCtrl();
//  void setDetails( MotorDetails* pdlg){ _pdlg=pdlg;}

private slots:
  void _valueChanged( const QString& val);
//  void _showDetails();
private:
//  Ui::MotorDialog *ui;
//  MotorDetails* _pdlg;
};

#endif // _motorCtrl_h
