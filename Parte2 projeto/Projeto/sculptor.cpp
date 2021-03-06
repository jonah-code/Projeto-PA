#include "sculptor.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
Voxel ***v;
Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;

    v = new Voxel**[nx];
        for(int i=0; i<nx; i++){
            v[i] = new Voxel*[ny];
            for(int j=0; j<ny; j++){
                v[i][j] = new Voxel[nz];
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
    for(int i=0; i<nx; i++)
        {
            for(int j=0; j<ny; j++)
            {
                delete [] v[i][j];
            }
            delete [] v[i];
        }
        delete [] v;
        nx=ny=nz=0;
        r=g=b=a=0;

}

void Sculptor:: setColor(float r, float g, float b, float alpha){
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=alpha;

}

void Sculptor:: putVoxel(int x, int y, int z){
    if(x>=0 && x<nx &&
        y >=0 && y <ny &&
        x >=0 && z <nz){
        v[x][y][z].isOn=true;
        v[x][y][z].r=r;
        v[x][y][z].g=g;
        v[x][y][z].b=b;
        v[x][y][z].a=a;

    }
}
void Sculptor::cutVoxel(int x, int y, int z){
    if(x>=0 && x<nx &&
        y >=0 && y <ny &&
        x >=0 && z <nz){
        v[x][y][z].isOn=false;
    }
}


void Sculptor::writeOFF(char *filename){
    ofstream arquivo;
    int vertices=0,faces=0;
    arquivo.open(filename);
    if(!arquivo.is_open())
       {
           exit(0);
       }

    for(int x =0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for(int z=0;z<nz;z++){
                if(v[x][y][z].isOn==true){
                    vertices+=8;
                    faces+=6;
                }
            }
        }
    }
    arquivo<<"OFF"<<endl;
    arquivo<<vertices << " "<< faces<<" "<<"0"<<endl;
    int i=0;
    for(int x =0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for(int z=0;z<nz;z++){
                if(v[x][y][z].isOn){
                    arquivo <<x+0<<" "<<y+1<<" "<<z+0<<endl;
                    arquivo <<x+0<<" " <<y+0<<" " <<z+0<<endl;
                    arquivo <<x+1<<" " <<y+0<<" " <<z+0<<endl;
                    arquivo <<x+1<<" " <<y+1<<" " <<z+0<<endl;
                    arquivo <<x+0<<" " <<y+1<<" " <<z+1<<endl;
                    arquivo <<x+0<<" " <<y+0<<" " <<z+1<<endl;
                    arquivo <<x+1<<" " <<y+0<<" " <<z+1<<endl;
                    arquivo <<x+1<<" " <<y+1<<" " <<z+1<<endl;

                }
            }
        }
    }

    for(int x =0;x<nx;x++){
        for(int y=0;y<ny;y++){
            for(int z=0;z<nz;z++){
                if(v[x][y][z].isOn){
                    arquivo << 4 <<" " <<i+0 << " " <<i+3<< " " <<i+2<< " " <<i+1<< " "<<fixed<<setprecision(2) <<v[x][y][z].r<< " "<<fixed<<setprecision(2) <<v[x][y][z].g<< " " <<fixed<<setprecision(2)<<v[x][y][z].b<< " " <<fixed<<setprecision(2)<<v[x][y][z].a<<endl;
                    arquivo << 4 <<" " <<i+4 << " " <<i+5<< " " <<i+6<< " " <<i+7<< " "<<fixed<<setprecision(2) <<v[x][y][z].r<< " "<<fixed<<setprecision(2) <<v[x][y][z].g<< " " <<fixed<<setprecision(2)<<v[x][y][z].b<< " " <<fixed<<setprecision(2)<<v[x][y][z].a<<endl;
                    arquivo << 4 <<" " <<i+0 << " " <<i+1<< " " <<i+5<< " " <<i+4<< " "<<fixed<<setprecision(2) <<v[x][y][z].r<< " "<<fixed<<setprecision(2) <<v[x][y][z].g<< " " <<fixed<<setprecision(2)<<v[x][y][z].b<< " " <<fixed<<setprecision(2)<<v[x][y][z].a<<endl;
                    arquivo << 4 <<" " <<i+0 << " " <<i+4<< " " <<i+7<< " " <<i+3<< " "<<fixed<<setprecision(2) <<v[x][y][z].r<< " "<<fixed<<setprecision(2) <<v[x][y][z].g<< " " <<fixed<<setprecision(2)<<v[x][y][z].b<< " " <<fixed<<setprecision(2)<<v[x][y][z].a<<endl;
                    arquivo << 4 <<" " <<i+3 << " " <<i+7<< " " <<i+6<< " " <<i+2<< " "<<fixed<<setprecision(2) <<v[x][y][z].r<< " "<<fixed<<setprecision(2) <<v[x][y][z].g<< " " <<fixed<<setprecision(2)<<v[x][y][z].b<< " " <<fixed<<setprecision(2)<<v[x][y][z].a<<endl;
                    arquivo << 4 <<" " <<i+1 << " " <<i+2<< " " <<i+6<< " " <<i+5<< " "<<fixed<<setprecision(2) <<v[x][y][z].r<< " "<<fixed<<setprecision(2) <<v[x][y][z].g<< " " <<fixed<<setprecision(2)<<v[x][y][z].b<< " " <<fixed<<setprecision(2)<<v[x][y][z].a<<endl;
                i+=8;
                }
            }
        }
    }
    arquivo.close();
}
