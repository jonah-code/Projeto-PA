#include "ploter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include "mainwindow.h"
#include "qdebug.h"
#include "cmath"
#include "sculptor.h"
#include <QMouseEvent>
#define PI 3.14
Ploter::Ploter(QWidget *parent) : QWidget(parent)
{

     x=30;
     y=30;
     z=30;
     Sculptor caixa(x,y,z);
}

void Ploter::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor((QColor(0,0,0)));
    pen.setWidth(2);
    painter.setBrush((brush));
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());
    int larg = width() - width()%x;
    int alt = height() - height()%y;
    for(int i=0;i<x;i++){
           for(int j=0;j<y;j++){
                   painter.setBrush(brush);
                   painter.drawRect(i*(larg/x),j*(alt/y),larg/x,alt/y); // pinta o quadrado
               }
           }
/*
    pen.setColor(QColor(255,180,0));
    painter.setPen(pen);
    painter.drawLine(0,height()/2,width(),height()/2);
    x1 = 0;
    y1 = height()/2;
    for(int i=1; i<width();i++){
        x2 = i;
        y2 = height()/2*(1- amplitude*sin(2*PI*x2/width()));
        painter.drawLine(x1,y1,x2,y2);
        x1=x2;
        y1=y2;
    }*/
}

void Ploter::mousePressEvent(QMouseEvent *event)
{
    px=(event->x())/(width()/x);   //calcula em que quadrado na horizontal se encontra o mouse
    py=(event->y())/(height()/y); //calcula em que quadrado na vertica se encontra o mouse
    qDebug()<<px;
}

void Ploter::mudaDimx(int dimx)
{
    x=dimx;
    repaint();
}

void Ploter::mudaDimy(int dimy)
{
    y=dimy;
    repaint();
}

void Ploter::mudaDimz(int dimz)
{
    z=dimz;
}
