#include <iostream>
#include "figurageometrica.h"
#include <vector>
#include <fstream>
#include <sstream>
#include "putvoxel.h"
#include <sculptor.h>
#include <putbox.h>
#include "putesfera.h"
#include "putelipse.h"
#include "cutvoxel.h"
#include "cutesfera.h"
#include "cutelipse.h"
#include "cutbox.h"
using namespace std;

int main()
{

    Sculptor *f;
    int dimx,dimy,dimz;
    vector<FiguraGeometrica*> p1;
    ifstream fin;
    string s;
    stringstream ss;
    fin.open("C:/Users/jns44/Desktop/Novo projeto/Scultura.txt");
    if(!fin.is_open()){
        cout<<"Deu errado"<<endl;
        exit(0);
    }
        while (getline(fin,s)){
            ss.clear();
            ss.str(s);
            ss >> s;
            if(s.compare("dim")==0){
                ss>>dimx>>dimy>>dimz;
                f = new Sculptor(dimx,dimy,dimz);
            }
            else if(s.compare("putvoxel")==0){
                int x,y,z;
                float r,g,b,a;
                ss>>x>>y>>z>>r>>g>>b>>a;
                p1.push_back(new PutVoxel(x,y,z,r,g,b,a));

            }
            else if(s.compare("putbox")==0){
                int x0,x1,y0,y1,z0,z1;
                float r,g,b,a;
                ss>>x0>>x1>>y0>>y1>>z0>>z1>>r>>g>>b>>a;
                p1.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b,a));

            }
            else if(s.compare("putesfera")==0){
                int x,y,z,raio;
                float r,g,b,a;
                ss>>x>>y>>z>>raio>>r>>g>>b>>a;
                p1.push_back(new PutEsfera(x,y,z,raio,r,g,b,a));

            }
            else if(s.compare("putelipse")==0){
                int x,y,z,rx,ry,rz;
                float r,g,b,a;
                ss>>x>>y>>z>>rx>>ry>>rz>>r>>g>>b>>a;
                p1.push_back(new PutElipse(x,y,z,rx,ry,rz,r,g,b,a));
            }
            else if(s.compare("cutvoxel")==0){
                int x,y,z;
                ss>>x>>y>>z;
                p1.push_back(new Cutvoxel(x,y,z));

            }
            else if(s.compare("cutbox")==0){
                int x0,x1,y0,y1,z0,z1;
                ss>>x0>>x1>>y0>>y1>>z0>>z1;
                p1.push_back(new CutBox(x0,x1,y0,y1,z0,z1));
           }
            else if(s.compare("cutelipse")==0){
                int x,y,z,rx,ry,rz;
                ss>>x>>y>>z>>rx>>ry>>rz;
                p1.push_back(new CutElipse(x,y,z,rx,ry,rz));

            }
            else if(s.compare("cutesfera")==0){
                int x,y,z,raio;
                ss>>x>>y>>z>>raio;
                p1.push_back(new Cutesfera(x,y,z,raio));

            }
        }
    for(int i=0;i<p1.size();i++){
        p1[i] ->draw(*f);
    }


    f->writeOFF("C:/Users/jns44/Desktop/Novo projeto/teste8.off");
}

