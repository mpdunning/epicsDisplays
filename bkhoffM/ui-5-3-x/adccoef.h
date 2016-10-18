#ifndef _adccoef_h
#define _adccoef_h

#include <QDialog>
#include "ui_adccoef.h"

class ADCCoef: public QDialog, public Ui::ADCCoef{
  Q_OBJECT

public:
  explicit ADCCoef(QString title,QWidget *parent = 0);
  ~ADCCoef();

signals:
  void closing();

private slots:
  void myClose();
private:
};

#endif // _adccoef_h
