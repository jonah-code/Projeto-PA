#include "leitor.h"
#include <iostream>
using namespace std;
leitor::leitor()
{

}
vector<FiguraGeometrica*> leitor::armazena(){
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
    return (p1);
    nx=3, ny=2,nz=1;
}

int leitor::getx()
{
    cout<<nx;
    return (nx);
}

int leitor::gety()
{
    return (ny);
}

int leitor::getz()
{
    return (nz);
}


