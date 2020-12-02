#ifndef PUTELIPSE_H
#define PUTELIPSE_H

#include <figurageometrica.h>

class PutElipse : public FiguraGeometrica
{
    int xcenter; int ycenter; int zcenter; int rx; int ry; int rz;
public:
    PutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz);
    void draw(Sculptor &t);
};

#endif // PUTELIPSE_H
