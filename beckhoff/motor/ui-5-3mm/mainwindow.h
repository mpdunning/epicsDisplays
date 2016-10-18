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
  void goXValChange( const QString&);
  void foXValChange( const QString&);
  void rvXValChange( const QString&);

  void goYValChange( const QString&);
  void foYValChange( const QString&);
  void rvYValChange( const QString&);

  void goZValChange( const QString&);
  void foZValChange( const QString&);
  void rvZValChange( const QString&);

  void showXControl();
  void showYControl();
  void showZControl();
  void showBkhDetail();

  void qeformXReady( bool);
  void qeformYReady( bool);
  void qeformZReady( bool);

  void requestAction( const QEActionRequests&){}

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  MotorCtrl*		_mcx;
  MotorCtrl*		_mcy;
  MotorCtrl*		_mcz;
  BkhDetail*		_bkh;
  QELabel*		_goDnyX;
  QELabel*		_goDnyY;
  QELabel*		_goDnyZ;
  QELabel*		_foDnyX;
  QELabel*		_foDnyY;
  QELabel*		_foDnyZ;
  QELabel*		_rvDnyX;
  QELabel*		_rvDnyY;
  QELabel*		_rvDnyZ;
  QPushButton*		_ctrlX;
  QPushButton*		_ctrlY;
  QPushButton*		_ctrlZ;
  CAButton*		_goX;
  CAButton*		_goY;
  CAButton*		_goZ;
  CAButton*		_foX;
  CAButton*		_foY;
  CAButton*		_foZ;
  CAButton*		_rvX;
  CAButton*		_rvY;
  CAButton*		_rvZ;
  QString		_mac123,_macXc,_macYc,_macZc;
  int 			_haveM;
};

#endif // mainwindow_h
