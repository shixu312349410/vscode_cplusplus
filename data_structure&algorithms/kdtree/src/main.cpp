#include<iostream>
#include<string>
#include<sstream>
#include"rectangle.h"
using namespace std;

int main(){
    
    // rectangle rec;
    // rec.initialRec(1.0,2.0,3.0,4.0);
    // rec.moverec(1.2,3.4);
    // cout<< rec.getx()<<endl;
    // cout<< rec.gety()<<endl;
    // //cout<< rec.getz()<<endl;
    // cout<< rec.geth()<<endl;
    // cout<< rec.getw()<<endl;

    int a = 10;
    ostringstream oss;
    oss<<a;
    cout<<oss.str()<<endl;

    string line;
    getline(cin,line);
    cout<<line<<endl;

}