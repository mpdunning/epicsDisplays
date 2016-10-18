#ifndef setupdialog_h
#define setupdialog_h

#include <QDialog>

namespace Ui{ class SetupDialog;}

class SetupDialog : public QDialog{
  Q_OBJECT

public:
  explicit SetupDialog(QWidget *parent = 0);
  ~SetupDialog();

private:
  Ui::SetupDialog *ui;
};

#endif // setupdialog_h
