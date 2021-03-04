#include<bits/stdc++.h>
//#include"partition.h"
#include"kdtree_construction.h"
#include"mergesort.h"
using namespace std;

/***************************************
 * 
 * 
****************************************/
void partition(int dir,int start,int end,int tempA[],int tempB[]){ //dir:0 for X, 1 for Y,2 for Z

    int num  = end-start+1;
    int root = start+(end-start)/2;
    // int ind1 = 0;
    // int ind2 = root;
    if(dir == 0){ //X direction

        for(int i = start,ind1 = start,ind2 = root+1; i<=end;i++){
            if(indices_y[i] == indices_x[root]){
                continue;
            }

            if(data[indices_y[i]][0] < data[indices_x[root]][0]){
                tempA[ind1++] = indices_y[i];
            }
            else{
                tempA[ind2++] = indices_y[i];
            }
        }

        for(int i = start,ind1 = start,ind2 = root+1; i<=end;i++){
            if(indices_z[i] == indices_x[root])
                continue;
            
            if(data[indices_z[i]][0] < data[indices_x[root]][0]){
                tempB[ind1++] = indices_z[i];
            }
            else{
                tempB[ind2++] = indices_z[i];
            }
        }
    }

    if(dir == 1){ //Y direction

        for(int i = 0,ind1 = 0,ind2 = root+1; i<num;i++){
            if(indices_x[i] == indices_y[root]){
                continue;
            }

            if(data[indices_x[i]][0] < data[tempA[root]][0]){
                tempA[ind1++] = indices_x[i];
            }
            else{
                tempA[ind2++] = indices_x[i];
            }
        }

        for(int i = 0,ind1 = 0,ind2 = root+1; i<num;i++){
            if(indices_y[i] == indices_x[root])
                continue;
            
            if(data[indices_z[i]][0] < data[indices_x[root]][0]){
                tempB[ind1++] = indices_z[i];
            }
            else{
                tempB[ind2++] = indices_z[i];
            }
        }

    }

}

int main(){
    // int tempA[15];
    // int tempB[15];

    Merge_sort(data_x, indices_x,15);
    Merge_sort(data_y, indices_y,15);
    Merge_sort(data_z, indices_z,15);

    partition(0,0,14,tempA,tempB);

    cout<<"hello"<<endl;

    for(int i = 0;i<15;i++){
        cout<<indices_y[i]<<" ";
    }
    cout<<endl;

    for(int i = 0;i<15;i++){
        cout<<tempA[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    for(int i = 0;i<15;i++){
        cout<<indices_z[i]<<" ";
    }
    cout<<endl;

    for(int i = 0;i<15;i++){
        cout<<tempB[i]<<" ";
    }
    cout<<endl;

    return 0;
}
