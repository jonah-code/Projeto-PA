#ifndef LEITOR_H
#define LEITOR_H
#include <iostream>
#include "figurageometrica.h"


class leitor
{
    int nx,ny,nz;
public:
    leitor();
    int getdimx();
    int getdimy();
    int getdimz();
};

#endif // LEITOR_H
