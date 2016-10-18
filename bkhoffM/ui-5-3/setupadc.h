#ifndef _setupadc_h
#define _setupadc_h

#include <QDialog>
#include "ui_setupadc.h"

class SetupADC: public QDialog, public Ui::SetupADC{
  Q_OBJECT

public:
  explicit SetupADC(QString title,QWidget *parent = 0);
  ~SetupADC();
signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _setupadc_h
