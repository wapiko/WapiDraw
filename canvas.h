#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

#include <DrawMode.h>


class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);

    void setMode(int);

signals:

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);

private:
    bool clicked;
    int clickedX;
    int clickedY;
    int mode;
    
 
};

#endif // MAINWINDOW_H
