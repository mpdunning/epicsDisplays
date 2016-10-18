#ifndef _motorcoef_h
#define _motorcoef_h

#include <QDialog>
#include "ui_motorcoef.h"

class MotorCoef: public QDialog, public Ui::MotorCoef{
  Q_OBJECT

public:
  explicit MotorCoef(QString title,QWidget *parent = 0);
  ~MotorCoef();

signals:
  void closing();

private slots:
  void myClose();
private:
};

#endif // _motorcoef_h
