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

MainWindow::MainWindow( QWidget* parent): QMainWindow(parent){
//------------------------------------------------------------------------------
  QStringList nullList;
  _mdiArea = new QMdiArea;
  setCentralWidget(_mdiArea);
  connect( _mdiArea, SIGNAL(subWindowActivated(QMdiSubWindow*)),
            this, SLOT(_updateActions()));
  _prof=new ContainerProfile;
  _prof->setupProfile( this,nullList,"","");
  _createActions();
  _createMenus();
  _createStatusBar();
  _setup();

  setWindowIcon(QPixmap(":/qss/motor.png"));
  setWindowTitle(tr("Pico Motors"));
}
MainWindow::~MainWindow(){
  delete _prof;
}
QSize MainWindow::sizeHint() const{
//---- set initial size --------------------------------------
  QSize size(600,500);
  return(size);
}
void MainWindow::_setup(){
//------------------------------------------------------------------------------
// read setup data from a disk file.
//-----------------------------------------------------------------------------
  QFile file("/afs/slac/g/testfac/tools/display/pico/ui/winMgr/picosetup.txt");
  if(!file.open(QIODevice::ReadOnly)){
    QMessageBox::warning( this,tr("MainWindow::_setup:file.open"),
	tr("Cannot open file %1:\n%2.")
	.arg(file.fileName()) .arg(file.errorString()));
    return;
  }
  QByteArray line; QList<QByteArray> list;
  int ax,dr,ul,gr; pmItem_t* pmi=0;
  while(!file.atEnd()){
    line=file.readLine();
    if(line.at(0)=='#') continue;
    list=line.split(',');
    ax=list[0].toInt();
    dr=list[3].toInt();
    ul=list[4].toInt();
    gr=list[6].toInt();
    if(dr==1){
      pmi=new pmItem_t;
      pmi->gno=gr;
      pmi->title=list[8].trimmed();
      pmi->macro1="P="+list[1].trimmed()+",M="+list[2].trimmed();
      pmi->macro="P="+list[1].trimmed()+",M1="+list[2].trimmed();
      pmi->name1=list[5].trimmed();
      pmi->act=list[7].toInt();
    }
    else if(dr==0){
      pmi->macrom="P="+list[1].trimmed()+",M="+list[2].trimmed();
      pmi->namem=list[5].trimmed();
}
    else if(dr==2){
      pmi->name2=list[5].trimmed();
      pmi->macro2="P="+list[1].trimmed()+",M="+list[2].trimmed();
      pmi->macro+=",M2="+list[2].trimmed();
      _newDialog(pmi);
      pmi->action=new QAction(this);
      pmi->action->setCheckable(true);
      pmi->action->setText(pmi->title);
      pmi->action->setData((const char*)pmi);
      _dlist.append(pmi);
      connect( pmi->action,SIGNAL(triggered()),this,SLOT(_triggered()));
      _windowMenu->addAction(pmi->action);
      _wActGroup->addAction(pmi->action);
    }
  }
}
void MainWindow::_newDialog( pmItem_t* pmi){
//------------------------------------------------------------------------------
 _prof->addMacroSubstitutions( pmi->macro);
  pmi->dlg=new PicoMotor(this);
  _prof->removeMacroSubstitutions();
  _addDialog( pmi->dlg,pmi->act);
  pmi->dlg->setup( pmi->title,pmi->name1,pmi->name2,pmi->namem,
		pmi->macro1,pmi->macro2,pmi->macrom);
}
void MainWindow::_addDialog( PicoMotor* dlg,int active){
//------------------------------------------------------------------------------
// Add PICO motor dialog to the main window.
//------------------------------------------------------------------------------
  QMdiSubWindow* subWindow=_mdiArea->addSubWindow(dlg);
  if(!active) dlg->setWindowState( Qt::WindowMinimized);
  connect( dlg,SIGNAL(destroyed(QObject*)),this,SLOT(_exit(QObject*)));
  subWindow->show();
 }
void MainWindow::_exit(QObject* p){
//------------------------------------------------------------------------------
// PicoMotor object just got deleted.  Set its address in the list to 0.
//------------------------------------------------------------------------------
  PicoMotor* pdlg=(PicoMotor*)p;
  pmItem_t* pmi=_find( pdlg->title());
  if(!pmi){
    qDebug()<<"MainWindow::_exit:_find: not found"<<pdlg->title(); return;}
  pmi->dlg=0;
}
pmItem_t* MainWindow::_find( QString name){
//------------------------------------------------------------------------------
  pmItem_t* pmi=0; QLinkedList<void*>::iterator i=_dlist.begin();
  pmItem_t* pfound=0;
  for( ; i!=_dlist.end(); ++i){
    pmi=(pmItem_t*)*i;
    if(!pmi->title.compare(name)){ pfound=pmi; break;}
  }
  return(pfound);
}
void MainWindow::_triggered(){
//------------------------------------------------------------------------------
  QAction* action=qobject_cast<QAction*>(sender());
  if(!action) return;
  pmItem_t* pmi=(pmItem_t*)action->data().toInt();
  if(!pmi) return;
  if(!pmi->dlg){ _newDialog(pmi);}
//  qDebug()<<"MainWindow::_triggered"<<pmi->title;
}
void MainWindow::closeEvent(QCloseEvent* event){
//------------------------------------------------------------------------------
  _mdiArea->closeAllSubWindows();
  if(!_mdiArea->subWindowList().isEmpty()) event->ignore();
  else event->accept();
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
void MainWindow::_updateActions(){
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
  bool hasDialog=(_activeDialog()!=0);

  _cascadeAction->setEnabled(hasDialog);
  _nextAction->setEnabled(hasDialog);
  _previousAction->setEnabled(hasDialog);
  _separatorAction->setVisible(hasDialog);
  if(_activeDialog()){
    QDialog* dlg=_activeDialog();
    ((PicoMotor*)dlg)->winAction()->setChecked(true);
  }
}
void MainWindow::_createActions(){
//------------------------------------------------------------------------------
  _exitAction = new QAction(tr("E&xit"), this);
  _exitAction->setShortcut(tr("Ctrl+Q"));
  _exitAction->setStatusTip(tr("Exit the application"));
  connect(_exitAction, SIGNAL(triggered()), this,SLOT(close()));

  _cascadeAction = new QAction(tr("&Cascade"), this);
  _cascadeAction->setStatusTip(tr("Cascade the windows"));
  connect(_cascadeAction, SIGNAL(triggered()),
		_mdiArea, SLOT(cascadeSubWindows()));

  _nextAction = new QAction(tr("Ne&xt"), this);
  _nextAction->setShortcut(QKeySequence::NextChild);
  _nextAction->setStatusTip(tr("Move the focus to the next window"));
  connect(_nextAction, SIGNAL(triggered()),
		_mdiArea, SLOT(activateNextSubWindow()));

  _previousAction = new QAction(tr("Pre&vious"), this);
  _previousAction->setShortcut(QKeySequence::PreviousChild);
  _previousAction->setStatusTip(tr("Move the focus to the previous "
                                    "window"));
  connect(_previousAction, SIGNAL(triggered()),
		_mdiArea, SLOT(activatePreviousSubWindow()));

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

  _wActGroup = new QActionGroup(this);
}
void MainWindow::_createMenus(){
//------------------------------------------------------------------------------
  _fileMenu = menuBar()->addMenu(tr("&File"));
  _fileMenu->addSeparator();
  _fileMenu->addAction(_exitAction);

  _windowMenu = menuBar()->addMenu(tr("&Window"));
  _windowMenu->addAction(_cascadeAction);
  _windowMenu->addSeparator();
  _windowMenu->addAction(_nextAction);
  _windowMenu->addAction(_previousAction);
  _windowMenu->addAction(_separatorAction);

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
QDialog* MainWindow::_activeDialog(){
  QMdiSubWindow* subWindow=_mdiArea->activeSubWindow();
  if(subWindow) return qobject_cast<QDialog*>(subWindow->widget());
  return 0;
}
