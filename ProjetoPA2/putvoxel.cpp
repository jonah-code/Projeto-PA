#include "putvoxel.h"
#include "iostream"
using namespace std;

PutVoxel::PutVoxel(int x,int y,int z,float r, float g,float b,float a)
{
    this->x=x; this->y=y; this->z=z;
    this->r=r; this->g=g; this->b=b; this->a=a;
}
void PutVoxel::draw(Sculptor &t){
    t.putVoxel(x,y,z);
    t.setColor(r,g,b,a);

}
