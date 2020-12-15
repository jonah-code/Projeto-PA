#ifndef PLOTER_H
#define PLOTER_H

#include <QWidget>

class Ploter : public QWidget
{
    Q_OBJECT
private:
    int x, y,z;
    int px,py,vz;

public:
    explicit Ploter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:
    void mudaDimx(int dimx);
    void mudaDimy(int dimy);
    void mudaDimz(int dimz);
};

#endif // PLOTER_H
