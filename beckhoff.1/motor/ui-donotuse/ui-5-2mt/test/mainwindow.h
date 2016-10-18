#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include "ui_mainwindow.h"

class MotorCtrl;
class TestDialog;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();

private slots:
  void _showM1Dialog();
  void _showM2Dialog();
  void _showTDialog();

protected slots:
  void myQuit();

private:
  MotorCtrl* _m1dialog;
  MotorCtrl* _m2dialog;
  TestDialog* _tdialog;
  ContainerProfile* _prof;
  QString _macro1, _macro2;
  int  _haveM;
};

#endif // mainwindow_h
