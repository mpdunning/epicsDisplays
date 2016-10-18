#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>

namespace Ui{ class MainWindow;}

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
private slots:
//  void onStatusMessage( QString){};
//  void onWarningMessage( QString){};
//  void onErrorMessage( QString){};
//  void launchGui( QString name,QEForm::creationOptions opt){};
protected slots:
  void myQuit();
private:
  Ui::MainWindow *ui;
  ContainerProfile* _prof;
};

#endif // mainwindow_h
