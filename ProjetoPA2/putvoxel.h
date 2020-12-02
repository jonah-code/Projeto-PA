#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "sculptor.h"
#include "figurageometrica.h"

class PutVoxel  : public FiguraGeometrica
{
    int x, y ,z;
    float r,g,b,a;
public:
    PutVoxel(int x,int y,int z,float r, float g,float b,float a);
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
