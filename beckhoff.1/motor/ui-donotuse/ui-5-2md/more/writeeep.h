#ifndef _writeeep_h
#define _writeeep_h

#include <QDialog>
#include "ui_writeeep.h"

class WriteEEP: public QDialog, public Ui::WriteEEP{
  Q_OBJECT

public:
  explicit WriteEEP(QString title,QWidget *parent = 0);
  ~WriteEEP();

signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _writeeep_h
