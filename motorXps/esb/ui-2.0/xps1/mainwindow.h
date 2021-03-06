#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include <QLinkedList>
#include "../common/motordialog.h"
#include "../common/setupdialog.h"
#include "../common/phasedialog.h"

namespace Ui{ class MainWindow;}

typedef struct{
  QString*	psubst;
  QDialog*	pdlg;
} listItem_t;

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget *parent = 0);
  ~MainWindow();
private slots:
//  void onStatusMessage( QString);
//  void onWarningMessage( QString);
//  void onErrorMessage( QString);
  void launchGui( QString name,QEForm::creationOptions opt);
protected slots:
  void myQuit();
private:
  Ui::MainWindow *ui;
  MotorDialog* _mdialog;
  SetupDialog* _sdialog;
  PhaseDialog* _pdialog;
  ContainerProfile* _prof;
  QLinkedList<void*> _mdlist;
  QLinkedList<void*> _sdlist;
  MotorDialog* _findMotorDialog( QString subst);
  SetupDialog* _findSetupDialog( QString subst);
  QString _macros;
  int  _haveM;
};

#endif // mainwindow_h
