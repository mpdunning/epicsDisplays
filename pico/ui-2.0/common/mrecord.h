#ifndef _mrecord_h
#define _mrecord_h

#include <QDialog>
#include "ui_mrecord.h"

class MRecord: public QDialog, public Ui::MRecord{
  Q_OBJECT
public:
  MRecord( QWidget* parent=0);
  void setup( QString title);
  QAction* winAction() const {return(_action);}
  QString title(){ return(_title);}

private slots:
  void _exit();
  void _actTriggered();

private:
  QString	_title;
  QAction*	_action;
};

#endif
