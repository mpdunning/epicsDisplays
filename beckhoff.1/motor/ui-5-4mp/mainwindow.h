#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}
class CAButton;
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

  void goM3ValChange( const QString&);
  void foM3ValChange( const QString&);
  void rvM3ValChange( const QString&);

  void goM4ValChange( const QString&);
  void foM4ValChange( const QString&);
  void rvM4ValChange( const QString&);

  void showM1Control();
  void showM2Control();
  void showM3Control();
  void showM4Control();
  void showBkhDetail();

  void qeformM1Ready( bool);
  void qeformM2Ready( bool);
  void qeformM3Ready( bool);
  void qeformM4Ready( bool);

  void requestAction( const QEActionRequests&){}

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  MotorCtrl*		_m1c;
  MotorCtrl*		_m2c;
  MotorCtrl*		_m3c;
  MotorCtrl*		_m4c;
  BkhDetail*		_bkh;
  QELabel*		_goDnyM1;
  QELabel*		_goDnyM2;
  QELabel*		_goDnyM3;
  QELabel*		_goDnyM4;
  QELabel*		_foDnyM1;
  QELabel*		_foDnyM2;
  QELabel*		_foDnyM3;
  QELabel*		_foDnyM4;
  QELabel*		_rvDnyM1;
  QELabel*		_rvDnyM2;
  QELabel*		_rvDnyM3;
  QELabel*		_rvDnyM4;
  QPushButton*		_ctrlM1;
  QPushButton*		_ctrlM2;
  QPushButton*		_ctrlM3;
  QPushButton*		_ctrlM4;
  CAButton*		_goM1;
  CAButton*		_goM2;
  CAButton*		_goM3;
  CAButton*		_goM4;
  CAButton*		_foM1;
  CAButton*		_foM2;
  CAButton*		_foM3;
  CAButton*		_foM4;
  CAButton*		_rvM1;
  CAButton*		_rvM2;
  CAButton*		_rvM3;
  CAButton*		_rvM4;
  QString		_mac1234,_macM1c,_macM2c,_macM3c,_macM4c;
};

#endif // mainwindow_h
