#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include "QEActionRequests.h"
#include "ui_mainwindow.h"

namespace Ui{ class MainWindow;}

class HistoDlg;
class ProfDlg;

class MainWindow : public QMainWindow, public Ui::MainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private slots:
  void	_showHisto();
  void	_showProfs();

protected slots:
  void requestAction( const QEActionRequests&){}

private:
  Ui::MainWindow *ui;
  HistoDlg*	_histd;
  ProfDlg*	_profd;
  QString	_pmac,_tmac,_title;
};

#endif // mainwindow_h
