#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include <QLinkedList>
#include "knob.h"

#define NUMCH	4
#define NVSET	12
#define NTBAS	9

namespace Ui{ class MainWindow;}

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private slots:
  void onStatusMessage( QString);
  void onWarningMessage( QString);
  void onErrorMessage( QString);
  void ch1OnOff( bool);
  void ch2OnOff( bool);
  void ch3OnOff( bool);
  void ch4OnOff( bool);
  void ch1Up(bool);
  void ch2Up(bool);
  void ch3Up(bool);
  void ch4Up(bool);
  void ch1Down(bool);
  void ch2Down(bool);
  void ch3Down(bool);
  void ch4Down(bool);
  void ch1Scale(const QString&);
  void ch2Scale(const QString&);
  void ch3Scale(const QString&);
  void ch4Scale(const QString&);
  void tBaseUp(bool);
  void tBaseDown(bool);
//  void tlKnobUserChange( double);
  void tlShowMarker( int,int);
  void tlQELineUserChange( const QVariant,const QVariant,const QVariant);
protected slots:
  void timerEvent( QTimerEvent* e);
  void myQuit();
private:
  void			_scaleInit( int chix,const QString& val);
  void			_scaleSet( int cix,bool up,Knob* pk);
  void			_tBaseSet( bool up);
  Ui::MainWindow*	ui;
  ContainerProfile*	_prof;
  QString		_macros;
  int			_haveM;
  int			_chix[NUMCH];
  double		_vset[NVSET];
  int			_tbix;
  int			_tbase[NTBAS];
  int			_tId;
};

#endif // mainwindow_h
