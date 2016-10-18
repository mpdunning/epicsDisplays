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
  void myClose();
  void _valueChanged( const QString& val);
private:
};

#endif // _motor_h
