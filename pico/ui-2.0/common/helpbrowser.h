#ifndef _helpbrowser_h
#define _helpbrowser_h
#include <QWidget>

class QPushButton;
class QTextBrowser;

class HelpBrowser: public QWidget{
  Q_OBJECT

public:
  HelpBrowser(const QString &path, const QString &page,QWidget* parent=0);
  static void showPage(const QString &page);

private slots:
  void updateWinTitle();

private:
  QTextBrowser*	textBrowser;
  QPushButton*	homeButton;
  QPushButton*	backButton;
  QPushButton*	closeButton;
};

#endif // _helpbrowser_h
