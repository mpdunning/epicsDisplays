#ifndef _profiles_h
#define _profiles_h

#include <QDialog>
#include "ui_profiles.h"

class ProfDlg: public QDialog, public Ui::ProfDialog{
  Q_OBJECT

public:
  explicit ProfDlg(QString title,QWidget *parent = 0);
  ~ProfDlg();
signals:
  void closing();

private slots:
  void requestAction( const QEActionRequests&){}
  void myClose();
private:
};

#endif // _profiles_h
