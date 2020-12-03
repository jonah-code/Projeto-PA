#ifndef CUTELIPSE_H
#define CUTELIPSE_H
#include "sculptor.h"
#include "figurageometrica.h"

class CutElipse : public FiguraGeometrica
{
    int xcenter; int ycenter; int zcenter; int rx; int ry; int rz;
public:
    CutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz);
    void draw(Sculptor &t);
};

#endif // CUTELIPSE_H
