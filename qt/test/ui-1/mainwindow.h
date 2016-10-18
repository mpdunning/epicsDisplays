#ifndef mainwindow_h
#define mainwindow_h

#include <QPixmap>
#include <QMainWindow>
#include <ASguiForm.h>
#include <ContainerProfile.h>
#include "imageframe.h"
//#include "renderarea.h"

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private slots:
  void onStatusMessage( QString);
  void onWarningMessage( QString);
  void onErrorMessage( QString);
protected slots:
  void myQuit();
private:
  ContainerProfile* _prof;
  QString	_macros;
  int		_haveM;
  ImageFrame*	_image;
//  RenderArea*	_image;
  QPixmap	_pixm;
};

#endif // mainwindow_h
