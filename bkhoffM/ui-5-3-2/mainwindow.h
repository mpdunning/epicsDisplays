#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}
class MotorCtrl;
class BkhDetail;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();

private slots:
  void goM1ValChange( const QString&);
  void foM1ValChange( const QString&);
  void rvM1ValChange( const QString&);
  void goM2ValChange( const QString&);
  void foM2ValChange( const QString&);
  void rvM2ValChange( const QString&);
  void showMXControl();
  void showMYControl();
  void closeMXControl();
  void closeMYControl();
  void showBkhDetail();
  void closeBkhDetail();
  void requestAction( const QEActionRequests&){}

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  MotorCtrl*		_mcx;
  MotorCtrl*		_mcy;
  BkhDetail*		_bkh;
  QString		_pmac,_nmac,_rmac,_tmac;
  QString		_q1mac,_q2mac;
  QString		_macro1,_macro2,_macro3;
  int 			_haveM;
};

#endif // mainwindow_h
