// file: imageframe.h
// A container class which allow setting its background to a pixmap.
// It is derived from QFrame.
//------------------------------------------------------------------------------
#ifndef imageframe_H
#define imageframe_H

#include <QPixmap>
#include <QWidget>
#include <QBrush>
#include <QPen>

class ImageFrame: public QWidget{
  Q_OBJECT
  Q_PROPERTY(QPixmap pixmap READ getPixmap WRITE setPixmap)

public:
  ImageFrame( QWidget* parent=0);

  void setPixmap(const QPixmap &pixm);
  QPixmap getPixmap() const { return _pixm; }
//  QSize sizeHint() const;

protected:
  void paintEvent(QPaintEvent *event);

private:
  QPixmap _pixm;
};

#endif  // iconframe_h
