#ifndef motorctrl_h
#define motorctrl_h

#include <QDialog>
#include "QEActionRequests.h"
#include "ui_motorctrl.h"

namespace Ui{ class MotorCtrl;}

class MotorCtrl: public QDialog, public Ui::MotorCtrl{
  Q_OBJECT

public:
  explicit MotorCtrl( QString title,QWidget* parent=0);
  ~MotorCtrl();

signals:
  void closing();

private slots:
  void myClose();
  void requestAction( const QEActionRequests&){}

private:
  Ui::MotorCtrl*	ui;
  QString		_macros;
};

#endif // motorctrl_h
