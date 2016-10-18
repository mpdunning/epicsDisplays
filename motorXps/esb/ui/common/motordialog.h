#ifndef motordialog_h
#define motordialog_h

#include <QDialog>

namespace Ui{ class MotorDialog;}

class MotorDialog : public QDialog{
  Q_OBJECT

public:
  explicit MotorDialog(QWidget *parent = 0);
  ~MotorDialog();

private:
  Ui::MotorDialog *ui;
};

#endif // motordialog_h
