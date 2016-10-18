#include <QtGui>
#include "mainwindow.h"

int main(int argc, char *argv[]){
  QApplication a(argc, argv);
  QApplication::setStyle(new QPlastiqueStyle);

  QFile file(":/qss/myStyle.qss");
  file.open(QFile::ReadOnly);
  a.setStyleSheet(file.readAll());
  MainWindow w;
  w.show();

  return a.exec();
}
