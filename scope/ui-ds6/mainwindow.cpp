#include <QDebug>
#include <ContainerProfile.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"

static void showObjects( QObject* obj){
  static int depth=0;
  QWidget* w;
  if(obj->isWidgetType()){
    w = (QWidget*)obj;
    qDebug()<<depth<<obj->metaObject()->className()<<w->pos()<<w->size();
  }
  QObjectList objList = obj->children();
  depth++;
  for( int i=0; i<objList.size(); i++) showObjects( objList[i]);
  depth--;
}
MainWindow::MainWindow( char* pm,QWidget *parent):
        QMainWindow(parent),ui(new Ui::MainWindow){
  QStringList nullList; QString macros;
  if(pm){
    macros.append(pm);
    qDebug()<<"inMainWIndow: macros="<<macros;
  }
  ContainerProfile prof;
  prof.setupProfile( NULL,nullList,"",macros);
  ui->setupUi(this);

//showObjects(ui->aeplot);
  _chix[0]=_chix[1]=_chix[2]=_chix[3]=0; _tbix=0;
  _vset[0]= 0.001; _vset[1]= 0.002; _vset[2]= 0.005; _vset[3]= 0.010;
  _vset[4]= 0.020; _vset[5]= 0.050; _vset[6]= 0.100; _vset[7]= 0.200;
  _vset[8]= 0.500; _vset[9]= 1.000; _vset[10]=2.000; _vset[11]=5.000;
  _tbase[0]=1;  _tbase[1]=2;   _tbase[2]=5;   _tbase[3]=10;  _tbase[4]=20;
  _tbase[5]=50; _tbase[6]=100; _tbase[7]=200; _tbase[8]=500;
qDebug( "MainWindow:ui->tbaseUnit=%p\n",ui->tbaseUnit);
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  connect(ui->ch1CAEn,SIGNAL(dbValChanged(bool)),this,SLOT(ch1OnOff(bool)));
  connect(ui->ch2CAEn,SIGNAL(dbValChanged(bool)),this,SLOT(ch2OnOff(bool)));
  connect(ui->ch3CAEn,SIGNAL(dbValChanged(bool)),this,SLOT(ch3OnOff(bool)));
  connect(ui->ch4CAEn,SIGNAL(dbValChanged(bool)),this,SLOT(ch4OnOff(bool)));
  connect(ui->ch1Up,SIGNAL(clicked(bool)),this,SLOT(ch1Up(bool)));
  connect(ui->ch2Up,SIGNAL(clicked(bool)),this,SLOT(ch2Up(bool)));
  connect(ui->ch3Up,SIGNAL(clicked(bool)),this,SLOT(ch3Up(bool)));
  connect(ui->ch4Up,SIGNAL(clicked(bool)),this,SLOT(ch4Up(bool)));
  connect(ui->ch1Down,SIGNAL(clicked(bool)),this,SLOT(ch1Down(bool)));
  connect(ui->ch2Down,SIGNAL(clicked(bool)),this,SLOT(ch2Down(bool)));
  connect(ui->ch3Down,SIGNAL(clicked(bool)),this,SLOT(ch3Down(bool)));
  connect(ui->ch4Down,SIGNAL(clicked(bool)),this,SLOT(ch4Down(bool)));
  connect(ui->ch1Scale,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(ch1Scale(const QString&)));
  connect(ui->ch2Scale,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(ch2Scale(const QString&)));
  connect(ui->ch3Scale,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(ch3Scale(const QString&)));
  connect(ui->ch4Scale,SIGNAL(dbValueChanged(const QString&)),
	this,SLOT(ch4Scale(const QString&)));
  connect(ui->tBaseUp,SIGNAL(clicked(bool)),this,SLOT(tBaseUp(bool)));
  connect(ui->tBaseDown,SIGNAL(clicked(bool)),this,SLOT(tBaseDown(bool)));
//  connect(ui->tLevKnob,SIGNAL(userChange(double)),
//	this,SLOT(tlKnobUserChange(double)));
  connect(ui->caplot,SIGNAL(markerChanged(int,int)),
	this,SLOT(tlShowMarker(int,int)));
  connect(ui->trigLevl,
	SIGNAL(userChange(const QVariant&,const QVariant&,const QVariant&)),
	this,
	SLOT(tlQELineUserChange(const QVariant,const QVariant,const QVariant)));
  statusBar()->addWidget( ui->idnLabel);
  ui->caplot->setMarkerOnOff(0,false);
  prof.releaseProfile();
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::_scaleInit( int chix,const QString& val){
  double d,v=val.toDouble(); int i;
  for( i=0; i<NVSET; i++){
    if(v<=_vset[i]) break;
  }
  if(i<=0) i=1;
  d=(_vset[i]-_vset[i-1])/2;
  if((_vset[i]-v)>d) i--;
  _chix[chix]=i;
}
void MainWindow::ch1Scale( const QString& val){ _scaleInit( 0,val);}
void MainWindow::ch2Scale( const QString& val){ _scaleInit( 1,val);}
void MainWindow::ch3Scale( const QString& val){ _scaleInit( 2,val);}
void MainWindow::ch4Scale( const QString& val){ _scaleInit( 3,val);}
void MainWindow::_scaleSet( int cix,bool up,Knob* pk){
  if((cix<0)||(cix>=NUMCH)) return;
  if(up){
    if((++_chix[cix])>=(NVSET-1)) _chix[cix]=NVSET-1;
  } else{
    if((--_chix[cix])<=0) _chix[cix]=0;
  }
  pk->setValue(_vset[_chix[cix]]);
}
void MainWindow::_tBaseSet( bool up){
/*---------------------------------------------------------------------------*/
  if(up){ if((++_tbix)>=(NTBAS-1)) _tbix=NTBAS-1;}
  else{ if((--_tbix)<=0) _tbix=0;}
  ui->tBaseKnob->setValue(_tbase[_tbix]);
}
void MainWindow::ch1Up(bool){
  _scaleSet( 0,true,ui->ch1KnobV);
}
void MainWindow::ch1Down(bool){
  _scaleSet( 0,false,ui->ch1KnobV);
}
void MainWindow::ch2Up(bool){
  _scaleSet( 1,true,ui->ch2KnobV);
}
void MainWindow::ch2Down(bool){
  _scaleSet( 1,false,ui->ch2KnobV);
}
void MainWindow::ch3Up(bool){
  _scaleSet( 2,true,ui->ch3KnobV);
}
void MainWindow::ch3Down(bool){
  _scaleSet( 2,false,ui->ch3KnobV);
}
void MainWindow::ch4Up(bool){
  _scaleSet( 3,true,ui->ch4KnobV);
}
void MainWindow::ch4Down(bool){
  _scaleSet( 3,false,ui->ch4KnobV);
}
void MainWindow::ch1OnOff( bool st){
  ui->ch1Label->setVisible(st);
  ui->ch1VDiv->setVisible(st);
  ui->caplot->setTrace1On(st);
}
void MainWindow::ch2OnOff( bool st){
  ui->ch2Label->setVisible(st);
  ui->ch2VDiv->setVisible(st);
  ui->caplot->setTrace2On(st);
}
void MainWindow::ch3OnOff( bool st){
  ui->ch3Label->setVisible(st);
  ui->ch3VDiv->setVisible(st);
  ui->caplot->setTrace3On(st);
}
void MainWindow::ch4OnOff( bool st){
  ui->ch4Label->setVisible(st);
  ui->ch4VDiv->setVisible(st);
  ui->caplot->setTrace4On(st);
}
void MainWindow::tBaseUp(bool){
  _tBaseSet(true);
}
void MainWindow::tBaseDown(bool){
  _tBaseSet(false);
}
void MainWindow::tlShowMarker( int,int){
  ui->caplot->setMarkerOnOff(0,true);
  _tId=startTimer(3000);
}
void MainWindow::timerEvent( QTimerEvent*){
  killTimer(_tId);
  ui->caplot->setMarkerOnOff(0,false);
}
void MainWindow::tlQELineUserChange( const QVariant qv,
		const QVariant,const QVariant){
qDebug()<<"MainWindow::tlQELineUserChange: qv="<<qv;
}
void MainWindow::onStatusMessage( QString){}
void MainWindow::onWarningMessage( QString){}
void MainWindow::onErrorMessage( QString){}
void MainWindow::myQuit(){ qApp->quit();}
