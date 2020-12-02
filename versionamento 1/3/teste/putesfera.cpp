#include "putesfera.h"
#include <cmath>
#include <iostream>
using namespace std;

PutEsfera::PutEsfera(int x, int y, int z,int r)
{
    this->x=x; this->y=y; this->z=z;this->r=r;
}

void PutEsfera::draw(Sculptor &t)
{
    for(int i=0;i<20;i++){
            for(int j=0;j<20;j++){
                for (int k=0;k<20;k++){
                    if((pow(i-x,2)+pow(j-y,2)+pow(k-z,2))<pow(r,2)){
                    //cout << "aqui sao os valores"<<endl;
                    //cout<<x <<" "<< y <<" "<<z<<endl;
                      t.putVoxel(i,j,k);

                    }
                }
            }
        }

}
