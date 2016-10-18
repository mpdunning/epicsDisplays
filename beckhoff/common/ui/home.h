#ifndef _home_h
#define _home_h

#include <QDialog>
#include "ui_homesa.h"

class Home: public QDialog, public Ui::HomeSA{
  Q_OBJECT

public:
  explicit Home(QString title,QWidget *parent = 0);
  ~Home();

signals:
  void closing();

private slots:
  void myClose();

private:
};

#endif // _home_h
