#ifndef phasedialog_h
#define phasedialog_h

#include <QDialog>

namespace Ui{ class PhaseDialog;}

class PhaseDialog : public QDialog{
  Q_OBJECT

public:
  explicit PhaseDialog(QWidget *parent = 0);
  ~PhaseDialog();

private:
  Ui::PhaseDialog *ui;
};

#endif // phasedialog_h
