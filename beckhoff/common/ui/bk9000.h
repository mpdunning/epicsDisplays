#ifndef _bk9000_h
#define _bk9000_h

#include <QDialog>
#include "QEActionRequests.h"
#include "ui_bk9000sa.h"

class BkhDebug;

class BK9000: public QDialog, public Ui::BK9000{
  Q_OBJECT

public:
  explicit BK9000(QString title,QWidget *parent = 0);
  ~BK9000();
signals:
  void closing();

private slots:
  void requestAction( const QEActionRequests&){}
  void cplrQEFReady(bool);
  void myClose();
  void _showDebug();

private:
  BkhDebug*	_bkhdebug;
  QString	_macros;
  QPushButton*	_dbgPB;
};

#endif // _bk9000_h
