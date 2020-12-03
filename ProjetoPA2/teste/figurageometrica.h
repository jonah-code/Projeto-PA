#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include "sculptor.h"
using namespace std;

class FiguraGeometrica
{
protected:
    float r,g,b,a;
public:
    FiguraGeometrica();
    virtual void draw(Sculptor &t)=0;
    virtual ~FiguraGeometrica(){}
};

#endif // FIGURAGEOMETRICA_H
