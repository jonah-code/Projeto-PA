#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "sculptor.h"
#include <figurageometrica.h>

class PutVoxel : public FiguraGeometrica
{
    int x, y ,z;
    float r,g,b,a;
public:
    /**
     * @brief PutVoxel desenha um voxel em uma posicao especifica
     * @param x posicao x a ser desenhada
     * @param y posicao y a ser desenhada
     * @param z posicao z a ser desenhada
     * @param r recebe a intesidade da cor vermelha
     * @param g recebe a intesidade da cor verde
     * @param b recebe a intesidade da cor azul
     * @param a recebe a da transparencia
     */
    PutVoxel(int x,int y,int z,float r, float g,float b,float a);
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
