#include "wapidraw.h"
#include "ui_wapidraw.h"

WapiDraw::WapiDraw(QWidget *parent) :
    QWidget(parent)
{
  mainCanvas = new WCanvas(this);
  nowCanvas = mainCanvas;
  mode = NORMALMODE;

  canvasTabs = new QTabWidget(this);
  canvasTabs->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
  addTabs(mainCanvas, "canvas");

  circleButton = new QPushButton(tr("&Circle"));
  circleButton->show();
  rectButton = new QPushButton(tr("&Rect"));
  rectButton->show();

  connect(circleButton, SIGNAL(clicked()), this, SLOT(pushedCircleB()));
  connect(rectButton, SIGNAL(clicked()), this, SLOT(pushedRectB()));

  QDockWidget *qdock = new QDockWidget;
  qdock->setMaximumWidth(200);

  QVBoxLayout *buttonLayout = new QVBoxLayout;
  buttonLayout->addWidget(circleButton, Qt::AlignTop);
  buttonLayout->addWidget(rectButton);
  buttonLayout->addStretch();

  QHBoxLayout *windowLayout = new QHBoxLayout;
  windowLayout->addLayout(buttonLayout);
 
  QGridLayout *mainLayout = new QGridLayout;
  mainLayout->addLayout(windowLayout, 0, 0);
  mainLayout->addWidget(canvasTabs, 0, 1);
  mainLayout->addWidget(qdock, 0, 2);
 
  setLayout(mainLayout);
  setWindowTitle(tr("WapiDraw"));
}



 
void WapiDraw::pushedCircleB(){
  setMode(CIRCLEMODE);
}

void WapiDraw::pushedRectB(){
  setMode(RECTMODE);
}

void WapiDraw::setMode(int nmode){
  this->mode=nmode;
  this->nowCanvas->setMode(nmode);
}

void WapiDraw::addTabs(WCanvas* canvas, QString filename){
  canvas->setMode(mode);
  canvasTabs->addTab(canvas, filename);
}


void WapiDraw::changeTabs(){
  setMode(mode);
}
