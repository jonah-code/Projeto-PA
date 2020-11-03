#include <iostream>
#include "sculptor.h"
using namespace std;

int main()
{
    Sculptor v1(31,31,31);
    //v1.putBox(0,6,0,6,0,6);
    v1.putSphere(0,0,0,5);
    //v1.cutBox(0,3,0,3,0,3);
    v1.writeOFF("teste.off");


}
