#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include <vector>
#include <fstream>
#include <sstream>
#include "putvoxel.h"
#include <sculptor.h>
#include <putbox.h>
#include "putesfera.h"
#include "leitor.h"
#include "putelipse.h"
using namespace std;

int main()
{

    Sculptor *f;
    leitor r;
    vector<FiguraGeometrica*> p1;
    ifstream fin;
    string s;
    stringstream ss;
    fin.open("C:/Users/jns44/Desktop/Novo projeto/jonas.txt");
    if(!fin.is_open()){
        cout<<"Deu errado"<<endl;
        exit(0);
    }
        while (getline(fin,s)){
            ss.clear();
            ss.str(s);
            ss >> s;
            if(s.compare("dim")==0){
                int x,y,z;
                ss>>x>>y>>z;
                f = new Sculptor(x,y,z);
            }
            else if(s.compare("putvoxel")==0){
                int x,y,z;
                float r,g,b,a;
                ss>>x>>y>>z>>r>>g>>b>>a;
                //p1.push_back(new Reta(x,y,z));
                p1.push_back(new PutVoxel(x,y,z,r,g,b,a));

            }
            else if(s.compare("putbox")==0){
                int x0,x1,y0,y1,z0,z1;
                //float r,g,b,a;
                ss>>x0>>x1>>y0>>y1>>z0>>z1;
                //p1.push_back(new Reta(x,y,z));
                p1.push_back(new PutBox(x0,x1,y0,y1,z0,z1));

            }
            else if(s.compare("putesfera")==0){
                int x,y,z,r;
                //float r,g,b,a;
                ss>>x>>y>>z>>r;
                p1.push_back(new PutEsfera(x,y,z,r));

            }
            else if(s.compare("putelipse")==0){
                int x,y,z,rx,ry,rz;
                //float r,g,b,a;
                ss>>x>>y>>z>>rx>>ry>>rz;
                p1.push_back(new PutElipse(x,y,z,rx,ry,rz));

            }
        }
    for(int i=0;i<p1.size();i++){
        p1[i] ->draw(*f);
    }


    f->writeOFF("C:/Users/jns44/Desktop/Novo projeto/teste1.off");
}

