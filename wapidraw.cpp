#include "wapidraw.h"
#include "ui_wapidraw.h"

WapiDraw::WapiDraw(QWidget *parent) :
    QWidget(parent)
{
  mainCanvas = new Canvas(this);
  mainCanvas->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));


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
  windowLayout->addWidget(mainCanvas);
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
