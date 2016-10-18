#include <QtGui>

#include "renderarea.h"

RenderArea::RenderArea(QWidget *parent): QWidget(parent){
  QString file1=":/images/qt-logo.png";
  QString file2=":/images/nlctaSketch.png";
  QString file3="21.png";
  QString file4=":/images/qt-logo.jpg";
  QString file5=":/images/button.png";
  QString file6=":/images/21.jpg";
  QString file7=":/images/place.jpg";
  QString file8="images/butterfly.png";

  pixmap1.load(file3);
  image1.load(file3);
//  pixmap1.fromImage( image1);

  setBackgroundRole(QPalette::Base);
  setAutoFillBackground(true);
  QRect rect=this->geometry();
  qDebug()<< "RenderArea:: rect = "<<rect;
  qDebug()<<"RenderArea:: pixmap size="<<pixmap1.size();
}
QSize RenderArea::minimumSizeHint() const{ return QSize(100, 100);}
QSize RenderArea::sizeHint() const{ return QSize(400, 200);}
void RenderArea::paintEvent(QPaintEvent * /* event */){

  QPainter painter(this);
  painter.drawPixmap(0,0,pixmap1);

  painter.setPen(palette().dark().color());
  painter.setBrush(Qt::NoBrush);
  painter.drawRect(QRect(0, 0, width() - 1, height() - 1));
}
