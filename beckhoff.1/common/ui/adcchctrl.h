#ifndef _adcchctrl_h
#define _adcchctrl_h

#include <QDialog>
#include "ui_adcchctrl.h"

class AdcChCtrl: public QDialog, public Ui::AdcChCtrl{
  Q_OBJECT

public:
  explicit AdcChCtrl(QString title,QWidget *parent = 0);
  ~AdcChCtrl();

signals:
  void closing();

private slots:
  void myClose();
private:
};

#endif // _adcchctrl_h
