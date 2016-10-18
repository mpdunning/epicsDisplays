#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

class Control;
class CSR;
class Feature;
class Home;
class Motor;
class ReadReg;
class WriteEEP;
class WriteRam;
class AdcDac;
class Hidden;
class BK9000;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();

private slots:
  void requestAction( const QEActionRequests&){}
  void _showCsrX();
  void _showCsrY();
  void _showControlX();
  void _showControlY();
  void _showHomeX();
  void _showHomeY();
  void _showFeatureX();
  void _showFeatureY();
  void _showMotorX();
  void _showMotorY();
  void _showReadRegX();
  void _showReadRegY();
  void _showWriteEEPX();
  void _showWriteEEPY();
  void _showWriteRamX();
  void _showWriteRamY();
  void _showAdcDac();
  void _showHidden();
  void _showBK9000();

protected slots:
  void myQuit();

private:
  Motor*	_motx;
  Motor*	_moty;
  Control*	_ctrlx;
  Control*	_ctrly;
  CSR*		_csrx;
  CSR*		_csry;
  Feature*	_featurex;
  Feature*	_featurey;
  Home*		_homex;
  Home*		_homey;
  ReadReg*	_readregx;
  ReadReg*	_readregy;
  WriteEEP*	_writeeepx;
  WriteEEP*	_writeeepy;
  WriteRam*	_writeramx;
  WriteRam*	_writeramy;
  AdcDac*	_adcdac;
  Hidden*	_hidden;
  BK9000*	_bk9000;
  QString	_macmx,_macmy,_macadc,_machid;
  int		_haveM;
};

#endif // mainwindow_h
