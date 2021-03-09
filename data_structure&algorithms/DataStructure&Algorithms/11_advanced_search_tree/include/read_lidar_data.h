#pragma once
#include<bits/stdc++.h>
using namespace std;

struct vector3d
{
    /* data */
    float x,y,z;
    
    vector3d():x(0), y(0), z(0){}  
    vector3d(float x1, float y1, float z1):x(x1), y(y1), z(z1){}  
    vector3d(const vector3d &v);  
    ~vector3d();  
};
