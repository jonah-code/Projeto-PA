#ifndef LEITOR_H
#define LEITOR_H
#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include <vector>
#include <fstream>
#include <sstream>
#include "putvoxel.h"
#include <sculptor.h>
#include <putbox.h>
#include "putesfera.h"

class leitor
{
    int nx,ny,nz;
public:
    leitor();
    vector<FiguraGeometrica*> armazena(/*string nome*/);
    int getx();
    int gety();
    int getz();
};

#endif // LEITOR_H
