// file: mainwindow.cpp
// Implementation of the main window class for Pico motors controls GUI.
// The QMdiArea is used as a central widget.  It serves as a container for the
// dialogs.
//------------------------------------------------------------------------------
#include <QtGui>

#include "motordialog.h"
#include "motordetails.h"
#include "picomotor.h"
#include "mainwindow.h"
#include "helpbrowser.h"

MainWindow::MainWindow( char* pm,QWidget* parent): QMainWindow(parent){
//------------------------------------------------------------------------------
  _haveM=0;
  if(pm){
    _macros.append(pm);
    _parseStr(pm);
    _haveM=1;
  }
  _picoMotor=new PicoMotor();
  setCentralWidget(_picoMotor);
  _picoMotor->setup( _title,_macro1,_macro2,_macro3);
  _createActions();
  _createMenus();
  _createStatusBar();

  setWindowIcon(QPixmap(":/qss/motor.png"));
  setWindowTitle(_title);
}
MainWindow::~MainWindow(){
}
void MainWindow::_parseStr( char* pm){
//------------------------------------------------------------------------------
// Input string pm consists of a number of macro definitions separated with ','
// characters.  Each macro is of the form <name>=<value>.
// Here we seperate them and construct three macro strings needed to initialize
// dialogs for the three pico motors in a group.
// The text in the string pm is of the form:
//  <title>,<area>,<mh>,<md>,<mv>
// where
//  <title> is text identifying the function of this group, it is displayed
//             in the main window title area.
//  <area> is the preemble of the PV names
//  <mh>   is horizontal motor identification name (either m1 or m3)
//  <md>   is diagonal motor identification name (m2)
//  <mv>   is virtical motor identification name (either m1 or m3)
//  An example of such string might be:
//  "Laser mirror,ESB:PICO,m1,m2,m3"
//------------------------------------------------------------------------------
  QByteArray line(pm); QList<QByteArray> list;
  QByteArray b1,b2;

  list=line.split(',');
  if(list.count()!=5) return;
  _title=list[0].trimmed();
  _macros="P="+list[1].trimmed()+",M1="+list[2].trimmed();
  _macros+=",M3="+list[4].trimmed();
  _macro1="P="+list[1].trimmed()+",M="+list[2].trimmed();
  _macro2="P="+list[1].trimmed()+",M="+list[3].trimmed();
  _macro3="P="+list[1].trimmed()+",M="+list[4].trimmed();
}
void MainWindow::_help(){
//------------------------------------------------------------------------------
  HelpBrowser::showPage("index.html");
}
void MainWindow::_about(){
//------------------------------------------------------------------------------
  QMessageBox::about(this, tr("About Pico motors"),
		tr("<h2>Pico Motors 1.1</h2>"
		"<p>THis application allows monitoring and"
		"<p>controlling NewFocus Pico motors."));
}
void MainWindow::_createActions(){
//------------------------------------------------------------------------------
  _exitAction = new QAction(tr("E&xit"), this);
  _exitAction->setShortcut(tr("Ctrl+Q"));
  _exitAction->setStatusTip(tr("Exit the application"));
  connect(_exitAction, SIGNAL(triggered()), this,SLOT(close()));

  _separatorAction = new QAction(this);
  _separatorAction->setSeparator(true);

  _helpAction = new QAction(tr("&Help"), this);
  _helpAction->setStatusTip(tr("Help Doc for this application"));
  connect(_helpAction, SIGNAL(triggered()), this, SLOT(_help()));

  _aboutAction = new QAction(tr("&About"), this);
  _aboutAction->setStatusTip(tr("Show the application's About box"));
  connect(_aboutAction, SIGNAL(triggered()), this, SLOT(_about()));

  _aboutQtAction = new QAction(tr("About &Qt"), this);
  _aboutQtAction->setStatusTip(tr("Show the Qt library's About box"));
  connect(_aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}
void MainWindow::_createMenus(){
//------------------------------------------------------------------------------
  _fileMenu = menuBar()->addMenu(tr("&File"));
  _fileMenu->addSeparator();
  _fileMenu->addAction(_exitAction);

  menuBar()->addSeparator();

  _helpMenu = menuBar()->addMenu(tr("&Help"));
  _helpMenu->addAction(_helpAction);
  _helpMenu->addSeparator();
  _helpMenu->addAction(_aboutAction);
  _helpMenu->addAction(_aboutQtAction);
}
void MainWindow::_createStatusBar(){
//------------------------------------------------------------------------------
  _readyLabel = new QLabel(tr(" Ready"));
  statusBar()->addWidget(_readyLabel, 1);
}
