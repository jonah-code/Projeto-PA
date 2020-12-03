#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

class Reta : public FiguraGeometrica
{
private:
    int x,y,z;
public:
    Reta(int x, int y ,int z);
    void draw();
};

#endif // RETA_H
