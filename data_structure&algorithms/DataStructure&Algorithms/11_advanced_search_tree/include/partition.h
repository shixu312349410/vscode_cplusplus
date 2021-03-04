#ifndef PARTITION_H
#define PARTITION_H
void partition(int dir,int start,int end,
               double pts[][3],
               int indices_x[],int indices_y[],int indices_z[],
               int temp_indices_x[],int temp_indices_y[],int temp_indices_z[]);
// void partition(int dir,int start,int end,int temp_indices_x[],int temp_indices_y[],int temp_indices_z[]);

#endif