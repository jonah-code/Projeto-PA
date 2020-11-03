#include <iostream>
#include "sculptor.h"
using namespace std;

int main()
{
    Sculptor v1(10,10,10);
    //v1.setColor(1,2,3,4);
   // v1.putVoxel(0,0,0);
    //v1.putVoxel(0,0,0);
   // v1.putVoxel(0,0,1);
  // v1.putBox(0,3,0,3,0,3);
   //v1.putSphere(0,0,0,10);
   //v1.cutBox(1,2,1,2,1,2);
  // v1.putSphere(5,5,5,2);
    v1.putEllipsoid(5,5,5,2,4,2);
    //v1.putBox(0,3,0,3,0,3);
    v1.writeOFF("NOME.txt");


}
