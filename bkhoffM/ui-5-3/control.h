#ifndef _control_h
#define _control_h

#include <QDialog>
#include "ui_controlm.h"

class Control: public QDialog, public Ui::Control{
  Q_OBJECT

public:
  explicit Control(QString title,QWidget *parent = 0);
  ~Control();

signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _control_h
