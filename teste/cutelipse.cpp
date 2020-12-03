#include "cutelipse.h"
#include <cmath>
CutElipse::CutElipse(int xcenter, int ycenter, int zcenter,  int rx, int ry, int rz)
{

}

void CutElipse::draw(Sculptor &t)
{
    for(int x=0;x<xcenter+rx;x++){
           for(int y=0;y<ycenter+ry;y++){
               for (int z=0;z<zcenter+rz;z++){
                   if(((pow(x-xcenter,2)/pow(rx,2))+(pow(y-ycenter,2)/pow(ry,2))+(pow(z-zcenter,2)/pow(rz,2)))<1){
                        t.cutVoxel(x,y,z);
                   }
               }
           }
       }
}
