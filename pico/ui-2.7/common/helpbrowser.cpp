#include <QtGui>

#include "helpbrowser.h"

HelpBrowser::HelpBrowser( const QString &path,const QString &page,
		QWidget* parent): QWidget(parent){
//------------------------------------------------------------------------------
  setAttribute(Qt::WA_DeleteOnClose);
  setAttribute(Qt::WA_GroupLeader);
  setWindowIcon(QPixmap(":/qss/motor.png"));
  textBrowser=new QTextBrowser;
  homeButton=new QPushButton(tr("&Home"));
  backButton = new QPushButton(tr("&Back"));
  closeButton = new QPushButton(tr("Close"));
  closeButton->setShortcut(tr("Esc"));
  QHBoxLayout *buttonLayout = new QHBoxLayout;
  buttonLayout->addWidget(homeButton);
  buttonLayout->addWidget(backButton);
  buttonLayout->addStretch();
  buttonLayout->addWidget(closeButton);
  QVBoxLayout *mainLayout = new QVBoxLayout;
  mainLayout->addWidget(textBrowser);
  mainLayout->addLayout(buttonLayout);
  setLayout(mainLayout);
  connect(homeButton, SIGNAL(clicked()), textBrowser, SLOT(home()));
  connect(backButton, SIGNAL(clicked()), textBrowser, SLOT(backward()));
  connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
  connect(textBrowser, SIGNAL(sourceChanged(const QUrl &)),
		this, SLOT(updateWinTitle()));
  textBrowser->setSearchPaths(QStringList() << path << ":/doc");
qDebug()<<"HelpBrowser: searchPaths="<<textBrowser->searchPaths();
  textBrowser->setSource(page);
}
void HelpBrowser::updateWinTitle(){
  setWindowTitle(tr("Help: %1").arg(textBrowser->documentTitle()));
}
void HelpBrowser::showPage(const QString &page){
  QStringList list;
  QString path = QApplication::applicationDirPath()+"/doc";
//  list=path.split('/');
//qDebug()<<"path="<<path;
//  list.removeLast();
//  list.removeLast();
//  path=list.join("/");
//qDebug()<<"list="<<list;
//  path.append("/doc");
qDebug()<<"path="<<path;
  HelpBrowser *browser = new HelpBrowser(path, page);
  browser->resize(500, 400);
  browser->show();
}
