#ifndef CUTESFERA_H
#define CUTESFERA_H
#include "sculptor.h"
#include "figurageometrica.h"

class Cutesfera : public FiguraGeometrica
{
    int xcenter,ycenter,zcenter,raio;
public:
    /**
     * @brief Cutesfera
     * @param xcenter recebe o centro da esfera a ser removida na posicao x
     * @param ycenter recebe o centro da esfera a ser removida na posicao y
     * @param zcenter recebe o centro da esfera a ser removida na posicao z
     * @param raio radius  recebe o raio da esfera a ser removida
     */
    Cutesfera(int xcenter, int ycenter, int zcenter,int raio);
     void draw(Sculptor &t);
};

#endif // CUTESFERA_H
