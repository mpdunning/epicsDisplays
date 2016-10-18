#include <QApplication>
#include <QDebug>
#include <QStyleFactory>
#include <QFile>
#include <QDir>
#include "mainwindow.h"

int main(int argc, char *argv[]){
  char* pm=0; int i;
  for( i=1; i<argc; i++){
    if(!strcmp(argv[i],"-m")) break;
  }
  if(i<(argc-1)) pm=argv[i+1];
  //if(pm) qDebug()<<"pm="<<pm;
  QApplication a(argc, argv);
#if(QT_VERSION<QT_VERSION_CHECK(5,0,0))
  QApplication::setStyle(new QPlastiqueStyle);
#else
  QApplication::setStyle(QStyleFactory::create("Fusion"));
#endif

  QDir qssDir( ":/qss");
  QFileInfoList entries=qssDir.entryInfoList();
  QString aStylesheet="";
  foreach( QFileInfo fileInfo,entries){
    QFile file( ":/qss/"+fileInfo.fileName());
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)) continue;
    QTextStream in(&file);
    aStylesheet+=in.readAll();
  }
  a.setStyleSheet(aStylesheet);

  MainWindow w(pm);
  w.show();

  return a.exec();
}
