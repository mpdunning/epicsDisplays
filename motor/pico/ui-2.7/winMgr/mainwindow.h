// file mainwindow.h
// define class Mainwindow for Pico motors controls GUI.  Here we use MDI area
// (Multi Document Interface) central widget, which acts as a container for
// motor dialogs...
//------------------------------------------------------------------------------
#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>
#include <QEForm.h>
#include <ContainerProfile.h>
#include <QLinkedList>

#define MACSTRLEN	32

class MotorDialog;
class MotorDetails;
class QAction;
class QActionGroup;
class QLabel;
class QMdiArea;
class QMenu;
class QToolBar;
class PicoMotor;

typedef struct{
  int		gno;	// group number (starts at 1)
  int		act;	// active on create when 1
  QString	title;
  QString	name1;
  QString	name2;
  QString	namem;	// middle (B) motor
  QString	macro1;
  QString	macro2;
  QString	macrom;	// middle (B) motor
  QString	macro;
  PicoMotor*	dlg;
  QAction*	action;
} pmItem_t;		// PicoMotor dialog data item

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( QWidget* parent=0);
  ~MainWindow();
  QSize sizeHint() const;

public slots:

protected:
  void closeEvent( QCloseEvent* event);

private slots:
  void _exit(QObject*);
  void _help();
  void _about();
  void _updateActions();
  void _triggered();
//  void onStatusMessage( QString){};
//  void onWarningMessage( QString){};
//  void onErrorMessage( QString){};
  void launchGui( QString,QEForm::creationOptions){};

private:
  void			_setup();
  pmItem_t*		_find( QString);
  void			_newDialog( pmItem_t* pmi);
  void			_createActions();
  void			_createMenus();
  void			_createStatusBar();
  QDialog*		_activeDialog();
  void			_addDialog( PicoMotor* dlg,int actv);

  QMdiArea*		_mdiArea;
  QLabel*		_readyLabel;
  QWidgetList		_windows;
  ContainerProfile*	_prof;
  QLinkedList<void*>	_dlist;		// list of pico motor groups

  QMenu*		_fileMenu;
  QMenu*		_windowMenu;
  QMenu*		_helpMenu;
  QActionGroup*		_wActGroup;
  QAction*		_exitAction;
  QAction*		_cascadeAction;
  QAction*		_nextAction;
  QAction*		_previousAction;
  QAction*		_separatorAction;
  QAction*		_helpAction;
  QAction*		_aboutAction;
  QAction*		_aboutQtAction;
};

#endif	// mainwindow_h
