#ifndef PUTESFERA_H
#define PUTESFERA_H
#include "sculptor.h"
#include <figurageometrica.h>

class PutEsfera : public FiguraGeometrica
{
    int xcenter,ycenter,zcenter,raio;
public:
    /**
     * @brief PutEsfera desenha uma esfera em uma posicao especificada
     * @param xcenter recebe o centro da esfera na posicao x
     * @param ycenter recebe o centro da esfera na posicao y
     * @param zcenter recebe o centro da esfera na posicao z
     * @param raio recebe o raio da esfera a ser desenhada
     * @param r recebe a intesidade da cor vermelha
     * @param g recebe a intesidade da cor verde
     * @param b recebe a intesidade da cor azul
     * @param a a recebe a da transparencia
     */
    PutEsfera(int xcenter, int ycenter, int zcenter,int raio,float r, float g, float b, float a);
    void draw(Sculptor &t);
};

#endif // PUTESFERA_H
