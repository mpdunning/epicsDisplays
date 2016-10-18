#ifndef hmadcs_h
#define hmadcs_h

#include <QDialog>
#include <ContainerProfile.h>

namespace Ui{ class HMAdcsDialog;}

class HMAdcsDialog : public QDialog{
  Q_OBJECT

public:
  explicit HMAdcsDialog(QWidget *parent = 0);
  ~HMAdcsDialog();

private:
  Ui::HMAdcsDialog *ui;
  ContainerProfile* _prof;
private slots:
  void enterPressed();
};

#endif // hmadcs_h
