#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private slots:
protected slots:
  void myQuit();
private:
  Ui::MainWindow *ui;
};

#endif // mainwindow_h
