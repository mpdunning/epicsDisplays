#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>

namespace Ui{ class MainWindow;}

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private slots:
//  void launchGui( QString name, QEForm::creationOptions opt);
protected slots:
  void myQuit();
private:
  Ui::MainWindow *ui;
  ContainerProfile* _prof;
  QString _macros;
  int  _haveM;
};

#endif // mainwindow_h
