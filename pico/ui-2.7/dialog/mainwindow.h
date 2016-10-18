// file mainwindow.h
// define class Mainwindow for Pico motors controls GUI.  Here we use MDI area
// (Multi Document Interface) central widget, which acts as a container for
// motor dialogs...
//------------------------------------------------------------------------------
#ifndef mainwindow_h
#define mainwindow_h

#include <QMainWindow>

#define MACLEN	64

class MotorDialog;
class MotorDetails;
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
class QToolBar;
class PicoMotor;

class MainWindow : public QMainWindow{
  Q_OBJECT

public:
  explicit MainWindow( char* pm,QWidget* parent=0);
  ~MainWindow();

public slots:

protected:

private slots:
  void _help();
  void _about();

private:
  void			_setup();
  void			_parseStr( char* p);
  void			_createActions();
  void			_createMenus();
  void			_createStatusBar();

  QLabel*		_readyLabel;
  PicoMotor*		_picoMotor;

  QMenu*		_fileMenu;
  QMenu*		_helpMenu;
  QAction*		_exitAction;
  QAction*		_separatorAction;
  QAction*		_helpAction;
  QAction*		_aboutAction;
  QAction*		_aboutQtAction;
  QString		_macros;
  QString		_macro1,_macro2,_macro3;
  QString		_title;
  int			_haveM;
};

#endif	// mainwindow_h
