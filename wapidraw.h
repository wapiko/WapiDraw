#ifndef WAPIDRAW_H
#define WAPIDRAW_H

#include <QWidget>
#include <QMouseEvent>
#include <QGridLayout>
#include <QPushButton>
#include <QSizePolicy>
#include <QTabWidget>
#include <QString>
#include <QDockWidget>

#include <DrawMode.h>

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
  Canvas *nowCanvas;
 
  int mode;

  QPushButton *circleButton;
  QPushButton *rectButton;

  void addTabs(Canvas*, QString);
  void changeTabs();
  void setMode(int);

};

#endif // WAPIDRAW_H
