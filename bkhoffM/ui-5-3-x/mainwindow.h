#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
//#include <QEForm.h>
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}

class Motor;
class MotorCoef;
class ADCCoef;
class BkhDebug;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();

private slots:
  void _closeMotorX();
  void _closeMotorY();
  void _closeCoefMX();
  void _closeCoefMY();
  void _closeCoefADC();
  void _closeDebug();
  void _showMotorX();
  void _showMotorY();
  void _showCoefMX();
  void _showCoefMY();
  void _showCoefADC();
  void _showDebug();
  void requestAction( const QEActionRequests&){}

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  Motor*		_mx;
  Motor*		_my;
  MotorCoef*		_mcx;
  MotorCoef*		_mcy;
  ADCCoef*		_adcc;
  BkhDebug*		_bkhd;
  QString		_pmac,_nmac,_rmac,_tmac;
  QString		_q1mac,_q2mac;
  QString		_macro1,_macro2,_macro3;
  int 			_haveM;
};

#endif // mainwindow_h
