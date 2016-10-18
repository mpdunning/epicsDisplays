#ifndef bkhdetail_h
#define bkhdetail_h

#include <QDialog>
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
  void _closeDebug();
  void _showDebug();
  void _closeCoeff();
  void _showCoeff();
  void myClose();

private:
  Ui::BkhDetail*	ui;
  ADCCoef*		_coef;
  BkhDebug*		_dbg;
};

#endif // bkhdetail_h
