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

  QFile file1(":/qss/myStyle.qss");
  file1.open(QFile::ReadOnly);
  a.setStyleSheet(file1.readAll());
  QFile file2(":/qss/tds3x.qss");
  file2.open(QFile::ReadOnly);
  a.setStyleSheet(file2.readAll());
  MainWindow w(pm);
  w.show();

  return a.exec();
}
