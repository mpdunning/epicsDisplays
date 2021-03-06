#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>

class RenderArea : public QWidget{
  Q_OBJECT
public:
  RenderArea(QWidget *parent = 0);
  QSize minimumSizeHint() const;
  QSize sizeHint() const;

protected:
  void paintEvent(QPaintEvent*);

private:
  QPixmap pixmap1;
  QImage image1;
};
#endif
