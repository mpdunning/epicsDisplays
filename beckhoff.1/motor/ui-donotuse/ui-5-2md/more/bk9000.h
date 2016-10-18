#ifndef _bk9000_h
#define _bk9000_h

#include <QDialog>
#include <ContainerProfile.h>
#include "ui_bk9000.h"

class BkhDebug;

class BK9000: public QDialog, public Ui::BK9000{
  Q_OBJECT

public:
  explicit BK9000(QString title,QWidget *parent = 0);
  ~BK9000();
signals:
  void closing();

private slots:
  void myClose();
  void _showDebug();
  void _closeDebug();

private:
  BkhDebug* _bkhdebug;
  ContainerProfile* _prof;
  QString _macro;
};

#endif // _bk9000_h
