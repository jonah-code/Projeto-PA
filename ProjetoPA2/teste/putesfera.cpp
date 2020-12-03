#include "putesfera.h"
#include <cmath>
#include <iostream>
using namespace std;

PutEsfera::PutEsfera(int xcenter, int ycenter, int zcenter,int raio,float r, float g, float b, float a)
{
    this->xcenter=xcenter; this->ycenter=ycenter; this->zcenter=zcenter;this->raio=raio;
    this->r=r;this->g=g;this->b=b;this->a=a;
}

void PutEsfera::draw(Sculptor &t)
{
    for(int x=0;x<xcenter+raio;x++){
            for(int y=0;y<ycenter+raio;y++){
                for (int z=0;z<zcenter+raio;z++){
                    if((pow(x-xcenter,2)+pow(y-ycenter,2)+pow(z-zcenter,2))<pow(raio,2)){
                        t.setColor(r,g,b,a);
                        t.putVoxel(x,y,z);

                    }
                }
            }
        }

}
