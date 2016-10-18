#ifndef diagwindow_h
#define diagwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include "ui_diagwindow.h"

class MotorCtrl;
//class MotorDetails;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();

private slots:
//  void _showM1Ctrl();
//  void _showM2Ctrl();

protected slots:
  void myQuit();

private:
//  MotorCtrl* _m1Ctrl;
//  MotorCtrl* _m2Ctrl;
//  MotorDetails* _d1dialog;
//  MotorDetails* _d2dialog;
  ContainerProfile* _prof;
  QString _macro1, _macro2;
  int  _haveM;
};

#endif // diagwindow_h
