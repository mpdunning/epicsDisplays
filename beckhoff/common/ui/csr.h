#ifndef _csr_h
#define _csr_h

#include <QDialog>
#include "ui_csrsa.h"

class CSR: public QDialog, public Ui::CSR{
  Q_OBJECT

public:
  explicit CSR(QString title,QWidget *parent = 0);
  ~CSR();
signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _csr_h
