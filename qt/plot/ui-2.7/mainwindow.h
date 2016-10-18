#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>

namespace Ui{ class MainWindow;}

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private slots:

protected slots:
  void myQuit();
  void myCmnd();
private:
  Ui::MainWindow *ui;
};

#endif // mainwindow_h
