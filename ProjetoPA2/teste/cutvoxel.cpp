#include "cutvoxel.h"



Cutvoxel::Cutvoxel(int x, int y, int z)
{
    this->x=x; this->y=y; this->z=z;
}
void Cutvoxel::draw(Sculptor &t){
    t.cutVoxel(x,y,z);

}
