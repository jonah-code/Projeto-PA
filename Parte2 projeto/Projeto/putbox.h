#ifndef PUTBOX_H
#define PUTBOX_H

#include <figurageometrica.h>

class PutBox : public FiguraGeometrica
{
    int x0,x1,y0,y1,z0,z1;
    float r,g,b,a;
public:
    /**
     * @brief PutBox cria uma caixa em um intervalo especifico
     * @param x0 posicao inicial de x
     * @param x1 posicao final de x
     * @param y0 posicao inicial de y
     * @param y1 posicao final de y
     * @param z0 posicao inicial de z
     * @param z1 posicao final de z
     * @param r recebe a intesidade da cor vermelha
     * @param g recebe a intesidade da cor verde
     * @param b recebe a intesidade da cor azul
     * @param a recebe a da transparencia
     */
    PutBox(int x0,int x1,int y0,int y1, int z0,int z1,float r,float g,float b,float a);
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
