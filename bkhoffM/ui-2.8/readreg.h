#ifndef _readreg_h
#define _readreg_h

#include <QDialog>
#include "ui_readreg.h"

class ReadReg: public QDialog, public Ui::ReadReg{
  Q_OBJECT

public:
  explicit ReadReg(QString title,QWidget *parent = 0);
  ~ReadReg();

signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _readreg_h
