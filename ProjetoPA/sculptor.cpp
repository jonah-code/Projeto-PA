#include "sculptor.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
Voxel ***v;
Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    cout <<"funcionou"<<endl;

    nx = _nx;
    ny = _ny;
    nz = _nz;
    int i,j,k;

    v =(Voxel***) malloc (sizeof (Voxel**)*_nx);
    for ( i = 0; i<ny; i++){
        v[i] =(Voxel **) malloc (sizeof (Voxel*) *ny);
    }

    for ( i = 0; i<ny; i++){
        for (j = 0 ; j<_nz; j++){
            v[i][j] =(Voxel*) malloc (sizeof (Voxel) * _nz );
        }
    }

    for(int x=0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for(int z=0;z<nz;z++){
                v[x][y][z].isOn =false;
            }
        }
    }


}
Sculptor::~Sculptor(){
    cout<<"automatico"<<endl;
}
void Sculptor:: setColor(float r, float g, float b, float alpha){
    r=r;
    g=g;
    b=b;
    alpha=alpha;
}

void Sculptor:: putVoxel(int x, int y, int z){
    v[x][y][z].isOn=true;
    v[x][y][z].r=r;
    v[x][y][z].g=g;
    v[x][y][z].b=b;
    v[x][y][z].a=a;

}
void Sculptor::cutVoxel(int x, int y, int z){
    v[x][y][z].isOn=false;

}

void Sculptor ::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    for (int x = x0;x<x1;x++){
        for (int y = y0;y<y1;y++){
            for (int z = z0;z<z1;z++){
                v[x][y][z].isOn = true;
                v[x][y][z].r=r;
                v[x][y][z].g=g;
                v[x][y][z].b=b;
                v[x][y][z].a=a;
                //cout <<x << y <<z;
            }
        }
    }
}

void Sculptor ::putSphere(int xcenter, int ycenter, int zcenter, int radius){
    for(int x=0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for (int z=0;z<nz;z++){
                if((pow(x-xcenter,2)+pow(y-ycenter,2)+pow(z-zcenter,2))==pow(radius,2)){
                   // cout << x << y<<z<<endl;
                     v[x][y][z].isOn=true;
                     v[x][y][z].r=r;
                     v[x][y][z].g=g;
                     v[x][y][z].b=b;
                     v[x][y][z].a=a;
                    // cout << x<< " "<<y<<" "<<z<<endl;
                }
            }
        }
    }
}
void Sculptor ::cutSphere(int xcenter, int ycenter, int zcenter, int radius){
    for(int x=0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for (int z=0;z<nz;z++){
                if((pow(x-xcenter,2)+pow(y-ycenter,2)+pow(z-zcenter,2))==pow(radius,2)){
                     v[x][y][z].isOn=false;
                }
            }
        }
    }
}
void Sculptor ::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    for(int x=0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for (int z=0;z<nz;z++){
                if(((pow(x-xcenter,2)/rx)+(pow(y-ycenter,2)/ry)+(pow(z-zcenter,2)/rz))==1){
                     v[x][y][z].isOn=true;
                     v[x][y][z].r=r;
                     v[x][y][z].g=g;
                     v[x][y][z].b=b;
                     v[x][y][z].a=a;
                   //  cout << x<<" " << y<< " "<< z <<endl;
                }
            }
        }
    }
}
void Sculptor:: cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    for(int x=0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for (int z=0;z<nz;z++){
                if(((pow(x-xcenter,2)/rx)+(pow(y-ycenter,2)/ry)+(pow(z-zcenter,2)/rz))==1){
                     v[x][y][z].isOn=false;
                }
            }
        }
    }
}
void Sculptor::writeOFF(char *filename){

    ofstream arquivo;
    int vertices=8,faces=6;
    //if(!arquivo.is_open())
     //  {
     //      exit(0);
      // }

    for (int i=0;i<nx;i++){
        vertices +=8;
        faces+=6;
    }
    for(int j=0;j<ny;j++){
        vertices +=8;
        faces+=6;
     }
     for(int k=0;k<nz;k++){
         vertices +=8;
         faces+=6;
    }
    arquivo <<"OFF"<<endl;
    arquivo <<vertices << faces<<endl;
    //arquivo <<-0.5,
    cout<<"OFF"<<endl;
    cout<<vertices << " "<< faces<<endl;
    cout<<"vamos la";
    int i=0;
    for(int x =0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for(int z=0;z<nz;z++){
                if(v[x][y][z].isOn){
                    cout <<"ponto "<<x<<" "<<y<<" " <<z<<endl;
                    cout <<x+0<<" "<<y+1<<" "<<z+0<<endl;
                    cout <<x+0<<" " <<y+0<<" " <<z+0<<endl;
                    cout <<x+1<<" " <<y+0<<" " <<z+0<<endl;
                    cout <<x+1<<" " <<y+1<<" " <<z+0<<endl;
                    cout <<x+0<<" " <<y+1<<" " <<z+1<<endl;
                    cout <<x+0<<" " <<y+0<<" " <<z+1<<endl;
                    cout <<x+1<<" " <<y+0<<" " <<z+1<<endl;
                    cout <<x+1<<" " <<y+1<<" " <<z+1<<endl;
                    cout << 4 <<" " <<i+0 << " " <<i+3<< " " <<i+2<< " " <<i+1<< " "<<v[x][y][z].a<< " "<<v[x][y][z].b<< " "<<v[x][y][z].g <<endl;
                    cout << 4 <<" " <<i+4 << " " <<i+5<< " " <<i+6<< " " <<i+7<< " " <<endl;
                    cout << 4 <<" " <<i+0 << " " <<i+1<< " " <<i+5<< " " <<i+4<< " " <<endl;
                    cout << 4 <<" " <<i+0 << " " <<i+4<< " " <<i+7<< " " <<i+3<< " " <<endl;
                    cout << 4 <<" " <<i+3 << " " <<i+7<< " " <<i+6<< " " <<i+2<< " " <<endl;
                    cout << 4 <<" " <<i+1 << " " <<i+2<< " " <<i+6<< " " <<i+5<< " " <<endl;
                    i+=8;
                }
            }
        }
    }
}

