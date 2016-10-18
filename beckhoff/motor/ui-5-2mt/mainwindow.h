#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
//#include <QEForm.h>
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}

class Motor;
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
  void _closeCoefADC();
  void _closeDebug();
  void _showMotorX();
  void _showMotorY();
  void _showCoefADC();
  void _showDebug();
  void requestAction( const QEActionRequests&){}
  void adcQEFReady(bool);
  void cplQEFReady(bool);

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  Motor*		_mx;
  Motor*		_my;
  ADCCoef*		_adcc;
  BkhDebug*		_bkhd;
  QPushButton*		_adcPB;
  QPushButton*		_dbgPB;
  QString		_macrox,_macroy,_macrob;
  int 			_haveM;
};

#endif // mainwindow_h
