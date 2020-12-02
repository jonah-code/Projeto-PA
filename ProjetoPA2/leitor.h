#ifndef LEITOR_H
#define LEITOR_H
#include <string>
#include <iostream>
#include "figurageometrica.h"
#include"vector"
#include "putvoxel.h"
using namespace std;
class Leitor
{
public:
    Leitor();
    vector<FiguraGeometrica*> armazena(/*string nome*/);
};


#endif // LEITOR_H
