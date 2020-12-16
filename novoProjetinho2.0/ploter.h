#ifndef PLOTER_H
#define PLOTER_H
#include "sculptor.h"
#include <QWidget>

class Ploter : public QWidget
{
    Q_OBJECT
private:
    int x, y,z;
    int px,py,vz;
    bool putvoxel;
    bool putEsfera;
    bool putElipse;
    bool putCaixa;
    int r;
    int rx,ry,rz;
    int dimxq,dimyq,dimzq;
    Sculptor *matriz;


public:
    explicit Ploter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:
    void mudaDimx(int dimx);
    void mudaDimy(int dimy);
    void mudaDimz(int dimz);
    void mudaRaio(int raio);
    void mudarx(int raiox);
    void mudary(int raioy);
    void mudarz(int raioz);
    void mudaDimxq(int _dimxq);
    void mudaDimyq(int _dimyq);
    void mudaDimzq(int _dimzq);
};

#endif // PLOTER_H
