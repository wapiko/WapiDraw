#include "wapidraw.h"
#include "ui_wapidraw.h"

WapiDraw::WapiDraw(QWidget *parent) :
    QWidget(parent)
{
  mainCanvas = new Canvas(this);

  canvasTabs = new QTabWidget(this);
  canvasTabs->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
  addTabs(mainCanvas, "canvas");

  circleButton = new QPushButton(tr("&Circle"));
  circleButton->show();
  rectButton = new QPushButton(tr("&Rect"));
  rectButton->show();

  connect(circleButton, SIGNAL(clicked()), this, SLOT(pushedCircleB()));
  connect(rectButton, SIGNAL(clicked()), this, SLOT(pushedRectB()));

  QVBoxLayout *buttonLayout = new QVBoxLayout;
  buttonLayout->addWidget(circleButton, Qt::AlignTop);
  buttonLayout->addWidget(rectButton);
  buttonLayout->addStretch();

  QHBoxLayout *windowLayout = new QHBoxLayout;
  windowLayout->addLayout(buttonLayout);
  windowLayout->addWidget(canvasTabs);
  // windowLayout->addStretch();

  QGridLayout *mainLayout = new QGridLayout;
  mainLayout->addLayout(windowLayout, 0, 0);
  setLayout(mainLayout);
  setWindowTitle(tr("WapiDraw"));
}



 
void WapiDraw::pushedCircleB(){
}

void WapiDraw::pushedRectB(){
}

void WapiDraw::addTabs(Canvas* canvas, QString filename){
  canvasTabs->addTab(canvas, filename);
}
