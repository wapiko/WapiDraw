#include "wapidraw.h"
#include "ui_wapidraw.h"

WapiDraw::WapiDraw(QWidget *parent) :
    QWidget(parent)
{
  clicked = false;

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
  windowLayout->addStretch();

  QGridLayout *mainLayout = new QGridLayout;
  mainLayout->addLayout(windowLayout, 0, 0);
  setLayout(mainLayout);
  setWindowTitle(tr("WapiDraw"));
}


void WapiDraw::paintEvent(QPaintEvent* event)
{
  if(clicked){
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.drawText(clickedX, clickedY, "Hello, world.");
    painter.drawEllipse(clickedX, clickedY, 400, 240);
  }

}

void WapiDraw::mousePressEvent(QMouseEvent* event){
  clicked = true;
  clickedX = event->x();
  clickedY = event->y();
  repaint();
}
 
void WapiDraw::pushedCircleB(){
}

void WapiDraw::pushedRectB(){
}
