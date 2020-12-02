#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "sculptor.h"
#include <vector>
#include "figurageometrica.h"
#include "leitor.h"
using namespace std;

int main()
{
  Sculptor *objeto, *s1;
  FiguraGeometrica *p[10];
  Leitor ler;
  vector<FiguraGeometrica*> fig;
  p[0]=new PutVoxel(1,1,1,1,1,1,1);
  fig = ler.armazena();
  objeto->writeOFF("dnv.txt");
}
