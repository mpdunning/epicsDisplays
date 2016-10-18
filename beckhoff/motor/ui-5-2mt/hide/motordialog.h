#ifndef motordialog_h
#define motordialog_h

#include <QDialog>
#include "ui_motordialog.h"

//class MotorDetails;
//namespace Ui{ class MotorDialog;}

class MotorDialog : public QDialog, public Ui::MotorDialog{
  Q_OBJECT

public:
  explicit MotorDialog(QString title,QWidget *parent = 0);
  ~MotorDialog();
//  void setDetails( MotorDetails* pdlg){ _pdlg=pdlg;}

private slots:
//  void _showDetails();
private:
//  Ui::MotorDialog *ui;
//  MotorDetails* _pdlg;
};

#endif // motordialog_h
