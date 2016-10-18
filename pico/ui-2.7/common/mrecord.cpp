#include <QtGui>
#include "mrecord.h"

MRecord::MRecord( QWidget* parent): QDialog( parent){
  setupUi(this);
  _action=new QAction(this);
  _action->setCheckable(true);
  connect( _action,SIGNAL(triggered()),this,SLOT(_actTriggered()));
  connect( _action,SIGNAL(triggered()),this,SLOT(show()));
  connect( _action,SIGNAL(triggered()),this,SLOT(setFocus()));
  connect( this,SIGNAL(destroyed(QObject*)),this,SLOT(_exit()));
}

void MRecord::setup( QString title){
  _title=title;
  setWindowTitle(title);
  _action->setText(title);
  Qt::WindowFlags flags;
  flags=	Qt::CustomizeWindowHint;
//		Qt::WindowTitleHint|
//		Qt::WindowMinimizeButtonHint|
//		Qt::WindowMaximizeButtonHint;
  setWindowFlags(flags);
}
void MRecord::_exit(){
  qDebug()<<"MRecord::_exit"<<_title;
}
void MRecord::_actTriggered(){
//--- action triggered, make sure is maximized --------------------
  if(windowState()==Qt::WindowMinimized) setWindowState( Qt::WindowActive);
}
