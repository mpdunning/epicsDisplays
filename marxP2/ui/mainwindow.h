#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include <QLinkedList>
#include "hmadcs.h"

namespace Ui{ class MainWindow;}

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
private slots:
protected slots:
  void myQuit();
  void showHMRegs();
  void showStatus();
  void showHMAdcs();
  void showTrig();
  void showPwm();
  void showWfm();
  void showGDRegs();
  void showGDWfm();
private:
  Ui::MainWindow *ui;
  HMAdcsDialog* _hmadialog;
  ContainerProfile* _prof;
};

#endif // mainwindow_h
