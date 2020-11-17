#include <iostream>
#include "sculptor.h"
using namespace std;

int main()
{
    Sculptor v1(31,31,40);
    v1.setColor(0.5,0.5,0.5,0.5);
   // v1.putVoxel(1,1,1);
   //v1.putSphere(0,0,0,8);
    //v1.putBox(0,9,0,9,0,9);
    //v1.cutBox(1,8,1,9,1,9);
   // v1.cutBox(0,3,0,3,0,3);
    v1.putEllipsoid(10,10,10,5,5,5);
  //  v1.cutEllipsoid(10,10,10,4,4,4);
   // v1.putEllipsoid(15,15,15,9,9,14);
    //v1.cutEllipsoid(15,15,15,8,8,13);
    //v1.cutBox(0,30,0,30,0,5);
    v1.writeOFF("teste.off");


}
