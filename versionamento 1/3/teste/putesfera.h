#ifndef PUTESFERA_H
#define PUTESFERA_H

#include <figurageometrica.h>

class PutEsfera : public FiguraGeometrica
{
    int x,y,z,r;
public:
    PutEsfera(int x, int y, int z,int r);
    void draw(Sculptor &t);
};

#endif // PUTESFERA_H
