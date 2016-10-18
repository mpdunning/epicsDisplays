#ifndef _motor_h
#define _motor_h

#include <QDialog>
#include "QEActionRequests.h"
#include "ui_motor.h"

class Motor: public QDialog, public Ui::Motor{
  Q_OBJECT

public:
  explicit Motor(QString title,QWidget *parent = 0);
  ~Motor();

signals:
  void closing();

private slots:
  void myClose();
  void goValChange( const QString&);
  void foValChange( const QString&);
  void rvValChange( const QString&);
  void requestAction( const QEActionRequests&){}
private:
};

#endif // _motor_h
