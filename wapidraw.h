#ifndef WAPIDRAW_H
#define WAPIDRAW_H

#include <QWidget>
#include <QMouseEvent>
#include <QGridLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <QTabWidget>
#include <QString>

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
  QTabWidget *canvasTabs;
  Canvas *mainCanvas;

  QPushButton *circleButton;
  QPushButton *rectButton;

  void addTabs(Canvas*, QString);
};

#endif // WAPIDRAW_H
