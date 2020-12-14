#ifndef PUTESFERA_H
#define PUTESFERA_H
#include "sculptor.h"
#include <figurageometrica.h>

class PutEsfera : public FiguraGeometrica
{
    int xcenter,ycenter,zcenter,raio;
public:
    PutEsfera(int xcenter, int ycenter, int zcenter,int raio,float r, float g, float b, float a);
    void draw(Sculptor &t);
};

#endif // PUTESFERA_H
