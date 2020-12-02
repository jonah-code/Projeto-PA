#include "leitor.h"
#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>
#include "figurageometrica.h"
#include "putvoxel.h"
using namespace std;
Leitor::Leitor()
{

}
vector<FiguraGeometrica*> Leitor::armazena(){
    vector<FiguraGeometrica*> fig;
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
        if(s.compare("putvoxel")==0){
            int x,y,z;
            float r,g,b,a;
            ss>>x>>y>>z>>r>>g>>b>>a;
            cout <<"jonas";
            fig.push_back(new PutVoxel(x,y,z,r,g,b,a));

        }
        /*
        else if(s.compare("putbox")==0){
            int x0,x1,y0,y1,z0,z1;
            ss >>x0 >> x1 >> y0 >> y1 >> z0 >>z1;
        }
        else if(s.compare("putesfera")==0){
            int x, y, z, r ;
            ss >>x >> y >>z >> r;
        }
        else if(s.compare("")==0){
            int x, y, z, rx, ry ,rz ;
            ss >>x >> y >>z >> rx >> ry >> rz;
        }
        */

    }
    return fig;
}
