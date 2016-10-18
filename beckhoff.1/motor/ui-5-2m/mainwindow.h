#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}
class MotorCtrl;
class BkhDetail;
class CAButton;

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

  void showM1Control();
  void showM2Control();
  void showBkhDetail();

  void qeformM1Ready( bool);
  void qeformM2Ready( bool);

  void requestAction( const QEActionRequests&){}

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  MotorCtrl*		_m1c;
  MotorCtrl*		_m2c;
  BkhDetail*		_bkh;
  QString		_macm1,_macm2,_macbk;
  int 			_haveM;
  QELabel*		_goDnyM1;
  QELabel*		_foDnyM1;
  QELabel*		_rvDnyM1;
  QELabel*		_goDnyM2;
  QELabel*		_foDnyM2;
  QELabel*		_rvDnyM2;
  QPushButton*		_ctrlM1;
  QPushButton*		_ctrlM2;
  CAButton*		_goM1;
  CAButton*		_foM1;
  CAButton*		_rvM1;
  CAButton*		_goM2;
  CAButton*		_foM2;
  CAButton*		_rvM2;
};

#endif // mainwindow_h
