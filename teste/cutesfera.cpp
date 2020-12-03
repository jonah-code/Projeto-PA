#include "cutesfera.h"
#include <cmath>
Cutesfera::Cutesfera(int xcenter, int ycenter, int zcenter,int raio)
{
    this->xcenter=xcenter; this->ycenter=ycenter; this->zcenter=zcenter;this->raio=raio;
}

void Cutesfera::draw(Sculptor &t)
{
    for(int x=0;x<xcenter+raio;x++){
            for(int y=0;y<ycenter+raio;y++){
                for (int z=0;z<zcenter+raio;z++){
                    if((pow(x-xcenter,2)+pow(y-ycenter,2)+pow(z-zcenter,2))<pow(raio,2)){
                      t.cutVoxel(x,y,z);
                    }
                }
            }
        }
}
