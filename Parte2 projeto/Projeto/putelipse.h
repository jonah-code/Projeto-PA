#ifndef PUTELIPSE_H
#define PUTELIPSE_H
#include "sculptor.h"
#include <figurageometrica.h>

class PutElipse : public FiguraGeometrica
{
    int xcenter; int ycenter; int zcenter; int rx; int ry; int rz;
public:
    /**
     * @brief PutElipse desenha uma elipse em uma posicao espeficada
     * @param xcenter recebe o centro da elipse na posicao x
     * @param ycenter recebe o centro da elipse na posicao y
     * @param zcenter recebe o centro da elipse na posicao z
     * @param rx recebe o raio da elipese em relacao ao eixo x
     * @param ry recebe o raio da elipese em relacao ao eixo y
     * @param rz recebe o raio da elipese em relacao ao eixo z
     * @param r recebe a intesidade da cor vermelha
     * @param g recebe a intesidade da cor verde
     * @param b recebe a intesidade da cor azul
     * @param a recebe a da transparencia
     */
    PutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz,float r, float g, float b, float a);
    void draw(Sculptor &t);
};

#endif // PUTELIPSE_H
