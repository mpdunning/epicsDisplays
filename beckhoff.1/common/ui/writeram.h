#ifndef _writeram_h
#define _writeram_h

#include <QDialog>
#include "ui_writeramsa.h"

class WriteRam: public QDialog, public Ui::WriteRam{
  Q_OBJECT

public:
  explicit WriteRam(QString title,QWidget *parent = 0);
  ~WriteRam();

signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _writeram_h
