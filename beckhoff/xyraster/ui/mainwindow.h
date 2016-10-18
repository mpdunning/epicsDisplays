#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QProcess>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}
class MotorCtrl;
class BkhDetail;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();

private slots:
  void startXYRaster();
  void requestAction( const QEActionRequests&){}
  void procFinished( int exitc,QProcess::ExitStatus exits);

protected slots:
  void myQuit();

private:
  Ui::MainWindow*	ui;
  QProcess*		_proc;
  QString		_macro;
  QString		_mmacro;
  int 			_haveM;
  bool			_prunning;
};

#endif // mainwindow_h
