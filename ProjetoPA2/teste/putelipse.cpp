#include "putelipse.h"
#include <cmath>
PutElipse::PutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz,float r, float g, float b, float a)
{
    this->xcenter=xcenter; this->ycenter=ycenter;this->zcenter=zcenter;this->rx=rx;this->ry=ry;this->rz=rz;
    this->r;this->g;this->b;this->a;
}
void PutElipse::draw(Sculptor &t){
    for(int x=0;x<xcenter+rx;x++){
           for(int y=0;y<ycenter+ry;y++){
               for (int z=0;z<zcenter+rz;z++){
                   if(((pow(x-xcenter,2)/pow(rx,2))+(pow(y-ycenter,2)/pow(ry,2))+(pow(z-zcenter,2)/pow(rz,2)))<1){
                        t.putVoxel(x,y,z);
                        t.setColor(r,g,b,a);
                   }
               }
           }
       }
}
