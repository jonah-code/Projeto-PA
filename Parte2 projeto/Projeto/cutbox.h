#ifndef CUTBOX_H
#define CUTBOX_H
#include "sculptor.h"
#include <figurageometrica.h>

class CutBox : public FiguraGeometrica
{
    int x0;
    int x1;
    int y0;
    int y1;
    int z0;
    int z1;
public:
    /**
     * @brief CutBox remove uma caixa em um intervalo especifico
     * @param x0 posicao inicial de x para remocao
     * @param x1 posicao final de x para remocao
     * @param y0 posicao inicial de y para remocao
     * @param y1 posicao final de y para remocao
     * @param z0 posicao inicial de z para remocao
     * @param z1 posicao inicial de z para remocao
     */
    CutBox(int x0,int x1,int y0,int y1, int z0,int z1);
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
