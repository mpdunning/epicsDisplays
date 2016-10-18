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

  void showMControl();
  void showBkhDetail();

  void qeformMReady( bool);

  void requestAction( const QEActionRequests&){}

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  MotorCtrl*		_mcx;
  BkhDetail*		_bkh;
  QString		_macmc,_macbk;
  int 			_haveM;
  QELabel*		_goDnyM1;
  QELabel*		_foDnyM1;
  QELabel*		_rvDnyM1;
  QPushButton*		_ctrlM1;
  CAButton*		_goM1;
  CAButton*		_foM1;
  CAButton*		_rvM1;
};

#endif // mainwindow_h
