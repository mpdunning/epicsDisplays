#ifndef _alarmLevels_h
#define _alarmLevels_h

#include <QDialog>
#include "ui_alarmLevels.h"

class AlarmLevls: public QDialog, public Ui::AlarmLevels{
  Q_OBJECT

public:
  explicit AlarmLevls(QString title,QWidget *parent = 0);
  ~AlarmLevls();

signals:
  void closing();

private slots:
  void myClose();
private:
};

#endif // _alarmLevels_h
