#include <iostream>
#include "sculptor.h"
using namespace std;

int main()
{
    Sculptor v1(31,31,31);
    v1.setColor(1,2,3,4);
    v1.putVoxel(0,0,0);
    v1.putVoxel(2,2,2);
    //v1.putBox(0,2,0,2,0,1);
   // v1.putSphere(0,0,0,10);
    //v1.putEllipsoid(15,15,15,8,8,13);
    v1.writeOFF("NOME.txt");


}
