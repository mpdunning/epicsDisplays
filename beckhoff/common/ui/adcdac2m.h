#ifndef _adcdac_h
#define _adcdac_h

#include <QDialog>
#include "ui_adcdac2msa.h"

class ADCCoef;

class AdcDac: public QDialog, public Ui::AdcDac2MSA{
  Q_OBJECT

public:
  explicit AdcDac(QString title,QWidget *parent = 0);
  ~AdcDac();
signals:
  void closing();

private slots:
  void requestAction( const QEActionRequests&){}
  void adcQEFReady(bool);
  void _showCoeff();
  void myClose();
private:
  QString	_macros;
  ADCCoef*	_coef;
  QPushButton*	_adcPB;
};

#endif // _adcdac_h
