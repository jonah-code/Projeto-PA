#include "putelipse.h"
#include <cmath>
PutElipse::PutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz)
{
    this->xcenter=xcenter; this->ycenter=ycenter;this->zcenter=zcenter;this->rx=rx;this->ry=ry;this->rz=rz;
}
void PutElipse::draw(Sculptor &t){
    for(int x=0;x<20;x++){
           for(int y=0;y<20;y++){
               for (int z=0;z<20;z++){
                   if(((pow(x-xcenter,2)/pow(rx,2))+(pow(y-ycenter,2)/pow(ry,2))+(pow(z-zcenter,2)/pow(rz,2)))<1){
                        t.putVoxel(x,y,z);
                   }
               }
           }
       }
}
