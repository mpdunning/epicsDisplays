#ifndef bkhdetail_h
#define bkhdetail_h

#include <QDialog>
#include "QEActionRequests.h"
#include "ui_bkhdetail.h"

namespace Ui{ class BkhDetail;}

class BkhDebug;
class ADCCoef;

class BkhDetail: public QDialog, public Ui::BkhDetail{
  Q_OBJECT

public:
  explicit BkhDetail( QString title,QWidget* parent=0);
  ~BkhDetail();

signals:
  void closing();

private slots:
  void requestAction( const QEActionRequests&){}
  void adcDac1QEFReady(bool);
  void adcDac2QEFReady(bool);
  void couplerQEFReady(bool);
  void _showDebug();
  void _showCoeff1();
  void _showCoeff2();
  void myClose();

private:
  Ui::BkhDetail*	ui;
  QString		_macros;
  QString		_macadc1;
  QString		_macadc2;
  ADCCoef*		_coef1;
  ADCCoef*		_coef2;
  BkhDebug*		_dbg;
  QPushButton*		_dbgPB;
  QPushButton*		_adcCPB1;
  QPushButton*		_adcCPB2;
};

#endif // bkhdetail_h
