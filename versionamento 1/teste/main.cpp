#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include <vector>
#include <fstream>
#include <sstream>
#include "putvoxel.h"
#include <sculptor.h>
using namespace std;

int main()
{

    Sculptor *f;
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
            if(s.compare("putvoxel")==0){
                int x,y,z;
                float r,g,b,a;
                ss>>x>>y>>z>>r>>g>>b>>a;
                //p1.push_back(new Reta(x,y,z));
                p1.push_back(new PutVoxel(x,y,z,r,g,b,a));

            }
        }
    //p1.push_back(new Reta(1,2,3));
    p1[0] ->draw(*f);
}
