#ifndef CUTELIPSE_H
#define CUTELIPSE_H
#include "sculptor.h"
#include "figurageometrica.h"

class CutElipse : public FiguraGeometrica
{
    int xcenter; int ycenter; int zcenter; int rx; int ry; int rz;
public:
    /**
     * @brief CutElipse remove em formato de esfera numa posicao especifica
     * @param xcenter recebe o centro da elipse a ser removida na posicao x
     * @param ycenter recebe o centro da elipse a ser removida na posicao y
     * @param zcenter recebe o centro da elipse a ser removida na posicao z
     * @param rx recebe o raio da elipe a ser removida em relacao ao eixo x
     * @param ry recebe o raio da elipe a ser removida em relacao ao eixo y
     * @param rz recebe o raio da elipe a ser removida em relacao ao eixo z
     */
    CutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz);
    void draw(Sculptor &t);
};

#endif // CUTELIPSE_H
