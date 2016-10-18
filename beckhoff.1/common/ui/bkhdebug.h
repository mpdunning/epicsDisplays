#ifndef _bkhdebug_h
#define _bkhdebug_h

#include <QDialog>
#include "QEActionRequests.h"
#include "ui_bkhdebug.h"

class BkhDebug: public QDialog, public Ui::BkhDebug{
  Q_OBJECT

public:
  explicit BkhDebug(QString title,QWidget *parent = 0);
  ~BkhDebug();
signals:
  void closing();

private slots:
  void requestAction( const QEActionRequests&){}
  void myClose();

private:
};

#endif // _bkhdebug_h
