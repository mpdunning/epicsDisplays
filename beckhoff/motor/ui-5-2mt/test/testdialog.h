#ifndef _testdialog_h
#define _testdialog_h

#include <QDialog>
#include "ui_testdialog.h"

class TestDialog: public QDialog, public Ui::TestDialog{
  Q_OBJECT

public:
  explicit TestDialog(QString title,QWidget *parent = 0);
  ~TestDialog();

private slots:
private:
};

#endif // _testdialog_h
