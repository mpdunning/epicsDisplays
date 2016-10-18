#include <QtGui>
#include "mainwindow.h"

int main(int argc, char *argv[]){
  char* pm=0; int i;
  for( i=1; i<argc; i++){
    if(!strcmp(argv[i],"-m")) break;
  }
  if(i<(argc-1)) pm=argv[i+1];
  //if(pm) qDebug()<<"pm="<<pm;
  QApplication a(argc, argv);
  QApplication::setStyle(new QPlastiqueStyle);

  QFile file(":/qss/myStyle.qss");
  file.open(QFile::ReadOnly);
  a.setStyleSheet(file.readAll());
  MainWindow w(pm);
  w.show();

  return a.exec();
}
