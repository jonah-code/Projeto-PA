#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "sculptor.h"
#include <figurageometrica.h>

class Cutvoxel : public FiguraGeometrica
{
    int x, y ,z;
public:
    Cutvoxel(int x,int y,int z);
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
