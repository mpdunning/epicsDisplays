#ifndef _adcdac_h
#define _adcdac_h

#include <QDialog>
#include <ContainerProfile.h>
#include "ui_adcdac.h"

class SetupADC;

class AdcDac: public QDialog, public Ui::AdcDac{
  Q_OBJECT

public:
  explicit AdcDac(QString title,QWidget *parent = 0);
  ~AdcDac();
signals:
  void closing();

private slots:
  void myClose();
  void _newValue1( const QString& val);
  void _newValue2( const QString& val);
  void _newValue3( const QString& val);
  void _newValue4( const QString& val);
  void _showSetupAdc1();
  void _showSetupAdc2();
//  void _showSetupDac1();
//  void _showSetupDac2();
  void _closeSAdc1();
  void _closeSAdc2();
//  void _closeSDac1();
//  void _closeSDac2();
private:
  SetupADC* _setupadc1;
  SetupADC* _setupadc2;
  ContainerProfile* _prof;
  QString _macro1,_macro2;
};

#endif // _adcdac_h
