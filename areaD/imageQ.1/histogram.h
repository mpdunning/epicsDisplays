#ifndef _histogram_h
#define _histogram_h

#include <QDialog>
#include "ui_histogram.h"

class HistoDlg: public QDialog, public Ui::HistoDialog{
  Q_OBJECT

public:
  explicit HistoDlg(QString title,QWidget *parent = 0);
  ~HistoDlg();
signals:
  void closing();

private slots:
  void requestAction( const QEActionRequests&){}
  void myClose();
private:
};

#endif // _histogram_h
