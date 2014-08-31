#ifndef WAPIDRAW_H
#define WAPIDRAW_H

#include <QWidget>
#include <QMouseEvent>
#include <QGridLayout>
#include <QPushButton>
#include <QSizePolicy>

#include <canvas.h>


class WapiDraw : public QWidget
{
    Q_OBJECT

public:
    explicit WapiDraw(QWidget *parent = 0);

public slots:
  void pushedCircleB();
  void pushedRectB();
   
private:
    Canvas *mainCanvas;

    QPushButton *circleButton;
    QPushButton *rectButton;
};

#endif // WAPIDRAW_H
