#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include "ui_mainwindow.h"

class Control;
class CSR;
class Feature;
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
  void _csrCloseX();
  void _csrCloseY();
  void _ctrlCloseX();
  void _ctrlCloseY();
  void _featureCloseX();
  void _featureCloseY();
  void _motorCloseX();
  void _motorCloseY();
  void _readRCloseX();
  void _readRCloseY();
  void _weCloseX();
  void _weCloseY();
  void _wrCloseX();
  void _wrCloseY();
  void _adClose();
  void _hidClose();
  void _bkClose();

  void _showCsrX();
  void _showCsrY();
  void _showControlX();
  void _showControlY();
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
  Motor* _motorx;
  Motor* _motory;
  Control* _controlx;
  Control* _controly;
  CSR* _csrx;
  CSR* _csry;
  Feature* _featurex;
  Feature* _featurey;
  ReadReg* _readregx;
  ReadReg* _readregy;
  WriteEEP* _writeeepx;
  WriteEEP* _writeeepy;
  WriteRam* _writeramx;
  WriteRam* _writeramy;
  AdcDac* _adcdac;
  Hidden* _hidden;
  BK9000* _bk9000;
  ContainerProfile* _prof;
  QString _pmac,_nmac,_rmac,_tmac;
  QString _q1mac,_q2mac;
  QString _macro1,_macro2,_macro3;
  int  _haveM;
};

#endif // mainwindow_h
