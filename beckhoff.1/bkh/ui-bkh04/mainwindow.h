#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"

namespace Ui{ class MainWindow;}
class QPushButton;
class AdcChCtrl;
class BkhDebug;

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private:
  void _showAdcCtrl( int ch);
private slots:
  void requestAction( const QEActionRequests&){}
  void adcQEFReady(bool);
  void bk9QEFReady(bool);

  void showADC1C(){ _showAdcCtrl(1);}
  void showADC2C(){ _showAdcCtrl(2);}
  void showADC3C(){ _showAdcCtrl(3);}
  void showADC4C(){ _showAdcCtrl(4);}
  void showADC5C(){ _showAdcCtrl(5);}
  void showADC6C(){ _showAdcCtrl(6);}
  void showADC7C(){ _showAdcCtrl(7);}
  void showADC8C(){ _showAdcCtrl(8);}
  void showBkhDebug();
  void adcCtrlClose();
  void myQuit();
private:
  Ui::MainWindow *ui;
  AdcChCtrl*    _adcchc;
  BkhDebug*     _bkhdbg;
  QPushButton*  _adc1PB;
  QPushButton*  _adc2PB;
  QPushButton*  _adc3PB;
  QPushButton*  _adc4PB;
  QPushButton*  _adc5PB;
  QPushButton*  _adc6PB;
  QPushButton*  _adc7PB;
  QPushButton*  _adc8PB;
  QPushButton*  _bkhdbgPB;
  int           _haveM;
  QString       _pmac,_nmac;
};

#endif // mainwindow_h
