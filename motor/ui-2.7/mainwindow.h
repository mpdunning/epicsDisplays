#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

class MotorDialog;
class MotorDetails;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();

private slots:
  void _showM1Dialog();
  void _showM2Dialog();

protected slots:
  void myQuit();

private:
  MotorDialog* _m1dialog;
  MotorDialog* _m2dialog;
  MotorDetails* _d1dialog;
  MotorDetails* _d2dialog;
  QString _macro1, _macro2;
  int  _haveM;
};

#endif // mainwindow_h
