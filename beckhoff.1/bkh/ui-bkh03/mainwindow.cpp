#include <QDebug>
#include <QPushButton>
#include "mainwindow.h"
#include "adcchctrl.h"
#include "alarmLevels.h"
#include "bkhdebug.h"

MainWindow::MainWindow( char* pm,QWidget *parent): QMainWindow(parent){
/*-----------------------------------------------------------------------------
 * First argument is a "list" of macro replacements.  It is of the form:
 * "P=<val>,N=<val>"
 * If macro replacements are supplied as a command line argument, then both
 * components must be supplied.  If macro replacements are not supplied,
 * then default values, see below, are used.
 * Note, that the program is launched as follows:
 * <program name> [-m "<macro string>"]
 *---------------------------------------------------------------------------*/
  QStringList mlist; QString macro; QString str; int i;
  _haveM=0;
  if(pm){
    macro.append(pm);
    _haveM=1;
    mlist=macro.split(QChar(','));
    for( i=0; i<mlist.size(); i++){
      str=mlist.at(i);
      if(str.contains("P")) _pmac.append(str);
      if(str.contains("N")) _nmac.append(str);
    }
    qDebug()<<"MainWIndow: macro="<<macro;
  }
  else{
    _pmac.append("P=CHA");
    _nmac.append("N=3");
  }
   _adcchc=NULL; _alarml=NULL; _bkhdbg=NULL;
  ui=new Ui::MainWindow;
  ui->setupUi(this);
  connect(ui->actionQuit,SIGNAL(triggered(bool)),this,SLOT(myQuit()));
  connect(ui->adcQEForm,SIGNAL(formLoaded(bool)),SLOT(adcQEFReady(bool)));
  connect(ui->t3222QEForm,SIGNAL(formLoaded(bool)),SLOT(t32QEFReady(bool)));
  connect(ui->t3314QEForm,SIGNAL(formLoaded(bool)),SLOT(t33QEFReady(bool)));
  connect(ui->bk9QEForm,SIGNAL(formLoaded(bool)),SLOT(bk9QEFReady(bool)));
}
MainWindow::~MainWindow(){
  delete ui;
}
void MainWindow::myQuit(){ qApp->quit();}
void MainWindow::t32QEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::t32QEFReady: failed to load";
    return;
  }
  _t32C1CPB=(QPushButton*)ui->t3222QEForm->getChild("alrmCh1CPB");
  if(!_t32C1CPB) qDebug()<<"t32QEFReady: alrmCh1CPB not found";
  else connect( _t32C1CPB,SIGNAL(clicked(bool)),SLOT(showT32Ch1C()));

  _t32C2CPB=(QPushButton*)ui->t3222QEForm->getChild("alrmCh2CPB");
  if(!_t32C2CPB) qDebug()<<"t32QEFReady: alrmCh2CPB not found";
  else connect( _t32C2CPB,SIGNAL(clicked(bool)),SLOT(showT32Ch2C()));

  _t32C1FPB=(QPushButton*)ui->t3222QEForm->getChild("alrmCh1FPB");
  if(!_t32C1FPB) qDebug()<<"t32QEFReady: alrmCh1FPB not found";
  else connect( _t32C1FPB,SIGNAL(clicked(bool)),SLOT(showT32Ch1F()));

  _t32C2FPB=(QPushButton*)ui->t3222QEForm->getChild("alrmCh2FPB");
  if(!_t32C2FPB) qDebug()<<"t32QEFReady: alrmCh2FPB not found";
  else connect( _t32C2FPB,SIGNAL(clicked(bool)),SLOT(showT32Ch2F()));
}
void MainWindow::t33QEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::t33QEFReady: failed to load";
    return;
  }
  _t33C1CPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh1CPB");
  if(!_t33C1CPB) qDebug()<<"t33QEFReady: alrmCh1CPB not found";
  else connect( _t33C1CPB,SIGNAL(clicked(bool)),SLOT(showT33Ch1C()));

  _t33C2CPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh2CPB");
  if(!_t33C2CPB) qDebug()<<"t33QEFReady: alrmCh2CPB not found";
  else connect( _t33C2CPB,SIGNAL(clicked(bool)),SLOT(showT33Ch2C()));

  _t33C3CPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh3CPB");
  if(!_t33C3CPB) qDebug()<<"t33QEFReady: alrmCh3CPB not found";
  else connect( _t33C3CPB,SIGNAL(clicked(bool)),SLOT(showT33Ch3C()));

  _t33C4CPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh4CPB");
  if(!_t33C4CPB) qDebug()<<"t33QEFReady: alrmCh4CPB not found";
  else connect( _t33C4CPB,SIGNAL(clicked(bool)),SLOT(showT33Ch4C()));

  _t33C1FPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh1FPB");
  if(!_t33C1FPB) qDebug()<<"t33QEFReady: alrmCh1FPB not found";
  else connect( _t33C1FPB,SIGNAL(clicked(bool)),SLOT(showT33Ch1F()));

  _t33C2FPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh2FPB");
  if(!_t33C2FPB) qDebug()<<"t33QEFReady: alrmCh2FPB not found";
  else connect( _t33C2FPB,SIGNAL(clicked(bool)),SLOT(showT33Ch2F()));

  _t33C3FPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh3FPB");
  if(!_t33C3FPB) qDebug()<<"t33QEFReady: alrmCh3FPB not found";
  else connect( _t33C3FPB,SIGNAL(clicked(bool)),SLOT(showT33Ch3F()));

  _t33C4FPB=(QPushButton*)ui->t3314QEForm->getChild("alrmCh4FPB");
  if(!_t33C4FPB) qDebug()<<"t33QEFReady: alrmCh4FPB not found";
  else connect( _t33C4FPB,SIGNAL(clicked(bool)),SLOT(showT33Ch4F()));
}
void MainWindow::bk9QEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::bk9QEFReady: failed to load";
    return;
  }
  _bkhdbgPB=(QPushButton*)ui->bk9QEForm->getChild("dbgPB");
  if(!_bkhdbgPB) qDebug()<<"t33QEFReady: dbgPB not found";
  else connect( _bkhdbgPB,SIGNAL(clicked(bool)),SLOT(showBkhDebug()));
}
void MainWindow::adcQEFReady( bool loaded){
/*-----------------------------------------------------------------------------
 * This slot is called when QEForm is done setting up.
 *---------------------------------------------------------------------------*/
  if(!loaded){
    qDebug()<<"MainWindow::adcQEFReady: failed to load";
    return;
  }
  _adc1PB=(QPushButton*)ui->adcQEForm->getChild("adcCh1PB");
  if(!_adc1PB) qDebug()<<"adcQEFReady: adcCh1PB not found";
  else connect( _adc1PB,SIGNAL(clicked(bool)),this,SLOT(showADC1C()));
  _adc2PB=(QPushButton*)ui->adcQEForm->getChild("adcCh2PB");
  if(!_adc2PB) qDebug()<<"adcQEFReady: adcCh2PB not found";
  else connect( _adc2PB,SIGNAL(clicked(bool)),this,SLOT(showADC2C()));
  _adc3PB=(QPushButton*)ui->adcQEForm->getChild("adcCh3PB");
  if(!_adc3PB) qDebug()<<"adcQEFReady: adcCh3PB not found";
  else connect( _adc3PB,SIGNAL(clicked(bool)),this,SLOT(showADC3C()));
  _adc4PB=(QPushButton*)ui->adcQEForm->getChild("adcCh4PB");
  if(!_adc4PB) qDebug()<<"adcQEFReady: adcCh4PB not found";
  else connect( _adc4PB,SIGNAL(clicked(bool)),this,SLOT(showADC4C()));
  _adc5PB=(QPushButton*)ui->adcQEForm->getChild("adcCh5PB");
  if(!_adc5PB) qDebug()<<"adcQEFReady: adcCh5PB not found";
  else connect( _adc5PB,SIGNAL(clicked(bool)),this,SLOT(showADC5C()));
  _adc6PB=(QPushButton*)ui->adcQEForm->getChild("adcCh6PB");
  if(!_adc6PB) qDebug()<<"adcQEFReady: adcCh6PB not found";
  else connect( _adc6PB,SIGNAL(clicked(bool)),this,SLOT(showADC6C()));
  _adc7PB=(QPushButton*)ui->adcQEForm->getChild("adcCh7PB");
  if(!_adc7PB) qDebug()<<"adcQEFReady: adcCh7PB not found";
  else connect( _adc7PB,SIGNAL(clicked(bool)),this,SLOT(showADC7C()));
  _adc8PB=(QPushButton*)ui->adcQEForm->getChild("adcCh8PB");
  if(!_adc8PB) qDebug()<<"adcQEFReady: adcCh8PB not found";
  else connect( _adc8PB,SIGNAL(clicked(bool)),this,SLOT(showADC8C()));
}
void MainWindow::_showAdcCtrl( int i){
/*-----------------------------------------------------------------------------
 * A push button got pressed in the ADC Form for channel i.  A macro string
 * is constructed, which is passed to the ADC control form via QE mechanism.
 *---------------------------------------------------------------------------*/
  QString macro; QString chan;
  macro.append(_pmac).append( ",M=3408,").append(_nmac);
  macro.append(",C=").append(chan.setNum(i));
  if(!_adcchc){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",macro);
    QString title="ADC Channel ";
    title.append(chan);
    _adcchc=new AdcChCtrl( title,this);
    prof.releaseProfile();
  }
  if(_adcchc){
    connect( _adcchc,SIGNAL(closing()),SLOT(adcCtrlClose()));
    _adcchc->show();
  }
}
void MainWindow::adcCtrlClose(){
/*-----------------------------------------------------------------------------
 * AdcChCtrl object was deleted, clean up here.
 *---------------------------------------------------------------------------*/
  if(_adcchc) _adcchc=NULL;
}
void MainWindow::_showAlarmLevl( int ch,QString mod){
/*-----------------------------------------------------------------------------
 * A push button got pressed in the temperature Form for channel ch.  A macro
 * string is constructed, which is passed to the alarm levels form via
 * QE mechanism.
 *---------------------------------------------------------------------------*/
  QString macro; QString chan;
  macro.append(_pmac).append(",M=").append(mod).append(",").append(_nmac);
  macro.append(",C=").append(chan.setNum(ch));
  if(!_alarml){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",macro);
    QString title="Channel ";
    title.append(chan);
    _alarml=new AlarmLevls( title,this);
    prof.releaseProfile();
  }
  if(_alarml){
    connect( _alarml,SIGNAL(closing()),SLOT(alarmlClose()));
    _alarml->show();
  }
}
void MainWindow::alarmlClose(){
/*-----------------------------------------------------------------------------
 * AlarmLevls object was deleted, clean up here.
 *---------------------------------------------------------------------------*/
  if(_alarml) _alarml=NULL;
}
void MainWindow::showBkhDebug(){
/*-----------------------------------------------------------------------------
 * A push button got pressed in the bk9000 Form.  A macro string is
 * constructed, which is passed to the bkh debug form via QE mechanism.
 *---------------------------------------------------------------------------*/
  QString macro;
  macro.append(_pmac).append(",").append(_nmac);
  if(!_bkhdbg){
    ContainerProfile prof;
    prof.setupProfile( this,QStringList(),"",macro);
    _bkhdbg=new BkhDebug( "Beckhoff Debug Functions",this);
    prof.releaseProfile();
  }
  if(_bkhdbg){
    _bkhdbg->show();
  }
}
