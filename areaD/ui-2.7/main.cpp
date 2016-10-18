#include <QtGui>
#include "mainwindow.h"

int main(int argc, char *argv[]){
  char* pm=0; int i;
  for( i=1; i<argc; i++){
    if(!strcmp(argv[i],"-m")) break;
  }
  if(i<(argc-1)) pm=argv[i+1];
  if(pm) qDebug()<<"pm="<<pm;
  QApplication a(argc, argv);
  QApplication::setStyle(new QPlastiqueStyle);

  QDir qssDir( ":/qss");
  QFileInfoList entries=qssDir.entryInfoList();
  QString aStylesheet="";
  foreach( QFileInfo fileInfo,entries){
    QFile file( ":/qss/"+fileInfo.fileName());
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)) continue;
    QTextStream in(&file);
    aStylesheet+=in.readAll();
  }
//qDebug()<<"aStylesheet:"<<aStylesheet;
  a.setStyleSheet(aStylesheet);

  MainWindow w(pm);
  w.show();

  return a.exec();
}
