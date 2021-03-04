#ifndef KDTREE_CONSTRUCTION_H
#define KDTREE_CONSTRUCTION_H

// extern double data_x[3] = {5,7,9};
// extern double data_y[3] = {4,2,5};
// extern double data_z[3] = {2,6,3};

int pr_kdtree_construction();
int kdtree_construction();

struct Point{
    double x;
    double y;
    double z;
};

struct Tree_Index {
    //double point[3];
    int parent = -2;
    int left = -2;
    int right = -2;

};

//Node tree[3];

struct frame
{
   int dir;
   int start;
   int end;
   int parent;
   int rd;
};






#endif