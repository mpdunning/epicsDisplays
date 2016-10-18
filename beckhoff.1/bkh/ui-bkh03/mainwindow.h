#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}
class QPushButton;
class AdcChCtrl;
class AlarmLevls;
class BkhDebug;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private:
  void		_showAdcCtrl( int i);
  void		_showAlarmLevl( int ch,QString mod);
private slots:
  void requestAction( const QEActionRequests&){}
  void adcQEFReady(bool);
  void t32QEFReady(bool);
  void t33QEFReady(bool);
  void bk9QEFReady(bool);

  void showADC1C(){ _showAdcCtrl(1);}
  void showADC2C(){ _showAdcCtrl(2);}
  void showADC3C(){ _showAdcCtrl(3);}
  void showADC4C(){ _showAdcCtrl(4);}
  void showADC5C(){ _showAdcCtrl(5);}
  void showADC6C(){ _showAdcCtrl(6);}
  void showADC7C(){ _showAdcCtrl(7);}
  void showADC8C(){ _showAdcCtrl(8);}
  void showT32Ch1C(){ _showAlarmLevl( 1,"3222C");}
  void showT32Ch2C(){ _showAlarmLevl( 2,"3222C");}
  void showT32Ch1F(){ _showAlarmLevl( 1,"3222F");}
  void showT32Ch2F(){ _showAlarmLevl( 2,"3222F");}
  void showT33Ch1C(){ _showAlarmLevl( 1,"3314C");}
  void showT33Ch2C(){ _showAlarmLevl( 2,"3314C");}
  void showT33Ch3C(){ _showAlarmLevl( 3,"3314C");}
  void showT33Ch4C(){ _showAlarmLevl( 4,"3314C");}
  void showT33Ch1F(){ _showAlarmLevl( 1,"3314F");}
  void showT33Ch2F(){ _showAlarmLevl( 2,"3314F");}
  void showT33Ch3F(){ _showAlarmLevl( 3,"3314F");}
  void showT33Ch4F(){ _showAlarmLevl( 4,"3314F");}
  void showBkhDebug();
  void adcCtrlClose();
  void alarmlClose();
  void myQuit();
private:
  Ui::MainWindow *ui;
  AdcChCtrl*	_adcchc;
  AlarmLevls*	_alarml;
  BkhDebug*	_bkhdbg;
  QPushButton*	_adc1PB;
  QPushButton*	_adc2PB;
  QPushButton*	_adc3PB;
  QPushButton*	_adc4PB;
  QPushButton*	_adc5PB;
  QPushButton*	_adc6PB;
  QPushButton*	_adc7PB;
  QPushButton*	_adc8PB;
  QPushButton*	_t32C1CPB;
  QPushButton*	_t32C2CPB;
  QPushButton*	_t32C1FPB;
  QPushButton*	_t32C2FPB;
  QPushButton*	_t33C1CPB;
  QPushButton*	_t33C2CPB;
  QPushButton*	_t33C3CPB;
  QPushButton*	_t33C4CPB;
  QPushButton*	_t33C1FPB;
  QPushButton*	_t33C2FPB;
  QPushButton*	_t33C3FPB;
  QPushButton*	_t33C4FPB;
  QPushButton*	_bkhdbgPB;
  int		_haveM;
  QString	_pmac,_nmac;
};

#endif // mainwindow_h
