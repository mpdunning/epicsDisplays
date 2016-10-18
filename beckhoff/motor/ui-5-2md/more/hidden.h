#ifndef _hidden_h
#define _hidden_h

#include <QDialog>
#include "ui_hidden.h"

class Hidden: public QDialog, public Ui::Hidden{
  Q_OBJECT

public:
  explicit Hidden(QString title,QWidget *parent = 0);
  ~Hidden();
signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _hidden_h
