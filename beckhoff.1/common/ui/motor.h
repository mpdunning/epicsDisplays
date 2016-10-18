#ifndef _motor_h
#define _motor_h

#include <QDialog>
#include "ui_motor.h"

class Motor: public QDialog, public Ui::Motor{
  Q_OBJECT

public:
  explicit Motor(QString title,QWidget *parent = 0);
  ~Motor();

signals:
  void closing();

private slots:
  void goMValChange( const QString&);
  void foMValChange( const QString&);
  void rvMValChange( const QString&);
  void myClose();
private:
};

#endif // _motor_h
