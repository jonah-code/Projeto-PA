#ifndef CUTESFERA_H
#define CUTESFERA_H
#include "sculptor.h"
#include "figurageometrica.h"

class Cutesfera : public FiguraGeometrica
{
    int xcenter,ycenter,zcenter,raio;
public:
    Cutesfera(int xcenter, int ycenter, int zcenter,int raio);
     void draw(Sculptor &t);
};

#endif // CUTESFERA_H
