#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "sculptor.h"
#include <figurageometrica.h>

class Cutvoxel : public FiguraGeometrica
{
    int x, y ,z;
public:
    /**
     * @brief Cutvoxel  remove um voxel em uma posicao especifica
     * @param x posicao x a ser removida
     * @param y posicao y a ser removida
     * @param z posicao z a ser removida
     */
    Cutvoxel(int x,int y,int z);
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
