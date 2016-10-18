// file: imageframe.cpp
// Implementation of a QFrame subclass which accepts a pixmap for its
// background.
//------------------------------------------------------------------------------
#include <QtGui>

#include "imageframe.h"

ImageFrame::ImageFrame( QWidget* parent): QWidget(parent){
//  setAttribute(Qt::WA_StaticContents);
  setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

  setBackgroundRole( QPalette::Base);
  setAutoFillBackground( true);
}
//QSize ImageFrame::sizeHint() const{ return(QSize(300,200));}

void ImageFrame::setPixmap( const QPixmap &pixm){
  QRect rect=geometry();
  QSize size( rect.width(),rect.height());
//  QPixmap _pixm( pixm.scaled(size));
  _pixm=pixm;
qDebug()<<"ImageFrame::setPixmap:size="<<_pixm.size()<<"rect="<<rect;
  update();
//  updateGeometry();
}
void ImageFrame::paintEvent( QPaintEvent* /* event */){
//  QBrush brush(_pixm);
  QPainter painter(this);
//  painter.setBackgroundMode( Qt::OpaqueMode);
//  painter.setBackground( brush);
  painter.drawPixmap(0,0,_pixm);

  painter.setPen(palette().dark().color());
  painter.setBrush( Qt::NoBrush);
  painter.drawRect( QRect(0,0,width()-1,height()-1));

qDebug()<<"ImageFrame::paintEvent:size="<<_pixm.size();
//  QFrame::paintEvent(event);
}
