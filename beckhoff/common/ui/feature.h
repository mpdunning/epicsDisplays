#ifndef _feature_h
#define _feature_h

#include <QDialog>
#include "ui_featuresa.h"

class Feature: public QDialog, public Ui::Feature{
  Q_OBJECT

public:
  explicit Feature(QString title,QWidget *parent = 0);
  ~Feature();
signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _feature_h
