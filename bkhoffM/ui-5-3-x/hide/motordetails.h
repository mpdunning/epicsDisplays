#ifndef motordetails_h
#define motordetails_h

#include <QDialog>

namespace Ui{ class MotorDetails;}

class MotorDetails : public QDialog{
  Q_OBJECT

public:
  explicit MotorDetails(QWidget *parent = 0);
  ~MotorDetails();
  QAction* winmAction() const {return(_action);}
  void newAction( QString name);

private slots:
  void _actTriggered();
private:
  Ui::MotorDetails *ui;
  QAction* _action;
};

#endif // motordetails_h
