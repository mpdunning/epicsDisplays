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
  void adcDacQEFReady(bool);
  void couplerQEFReady(bool);
  void _showDebug();
  void _showCoeff();
  void myClose();

private:
  Ui::BkhDetail*	ui;
  QString		_macros;
  QString		_macadc;
  ADCCoef*		_coef;
  BkhDebug*		_dbg;
  QPushButton*		_dbgPB;
  QPushButton*		_adcCPB;
};

#endif // bkhdetail_h
