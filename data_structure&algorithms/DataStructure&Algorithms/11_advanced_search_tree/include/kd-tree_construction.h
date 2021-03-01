#pragma once

struct node {
    double point[3];
    int parent = -2;
    int left = -2;
    int right = -2;

};

node tree[15];

struct frame
{
   int start;
   int end;
   int parent;
   int rd;
};

double data[15][3] = { {2,3,3},
                       {5,4,2},
                       {9,6,7},
                       {4,7,9},
                       {8,1,5},
                       {7,2,6},
                       {9,4,1},
                       {8,4,2},
                       {9,7,8},
                       {6,3,1},
                       {3,4,5},
                       {1,6,8},
                       {9,5,3},
                       {2,1,3},
                       {8,7,6}       
                     };

double data_x[15] = {2,5,9,4,8,7,9,8,9,6,3,1,9,2,8};
double data_y[15] = {3,4,6,7,1,2,4,4,7,3,4,6,5,1,7};
double data_z[15] = {3,2,7,9,5,6,1,2,8,1,5,8,3,3,6};

int indices_x[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int indices_y[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int indices_z[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};