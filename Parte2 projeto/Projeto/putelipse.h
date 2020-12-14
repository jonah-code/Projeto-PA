#ifndef PUTELIPSE_H
#define PUTELIPSE_H
#include "sculptor.h"
#include <figurageometrica.h>

class PutElipse : public FiguraGeometrica
{
    int xcenter; int ycenter; int zcenter; int rx; int ry; int rz;
public:
    PutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz,float r, float g, float b, float a);
    void draw(Sculptor &t);
};

#endif // PUTELIPSE_H
