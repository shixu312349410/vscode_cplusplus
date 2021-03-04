#include<bits/stdc++.h>
//#include"partition.h"
#include"kdtree_construction.h"
#include"mergesort.h"
using namespace std;

/***************************************
 * 
 * 
****************************************/
void partition(int dir,int start,int end,
               double pts[][3],
               int indices_x[],int indices_y[],int indices_z[],
               int temp_indices_x[],int temp_indices_y[],int temp_indices_z[]){ //dir:0 for X, 1 for Y,2 for Z

    if (start >= end)
        return;
    int num  = end-start+1;
    int root = start+(end-start)/2;
    // int ind1 = 0;
    // int ind2 = root;
    if(dir == 0){ //select X as main direction, resort Y and Z direction
        
        //resort Y direction
        for(int i = start,ind1 = start,ind2 = root+1; i<=end;i++){
            if(indices_y[i] == indices_x[root]){
                continue;
            }

            if(pts[indices_y[i]][0] < pts[indices_x[root]][0]){
                temp_indices_y[ind1++] = indices_y[i];
            }
            else{
                temp_indices_y[ind2++] = indices_y[i];
            }
        }
        
        for(int i = start;i<=end;i++){  //move the temp data to the original array
            indices_y[i] = temp_indices_y[i];
        }

        //resort Z direction
        for(int i = start,ind1 = start,ind2 = root+1; i<=end;i++){
            if(indices_z[i] == indices_x[root])
                continue;
            
            if(pts[indices_z[i]][0] < pts[indices_x[root]][0]){
                temp_indices_z[ind1++] = indices_z[i];
            }
            else{
                temp_indices_z[ind2++] = indices_z[i];
            }
        }

        for(int i = start;i<=end;i++){ //move the temp data to the original array
            indices_z[i] = temp_indices_z[i];
        }
    }

    if(dir == 1){  //select Y direction as main direction, resort X and Z direction
        
        //resort X dierection
        for(int i = start,ind1 = start,ind2 = root+1; i<=end;i++){
            if(indices_x[i] == indices_y[root]){
                continue;
            }

            if(pts[indices_x[i]][0] < pts[indices_y[root]][0]){
                temp_indices_x[ind1++] = indices_x[i];
            }
            else{
                temp_indices_x[ind2++] = indices_x[i];
            }
        }

        for(int i = start;i<=end;i++){ //move the temp data to the original array
            indices_x[i] = temp_indices_x[i];
        }
        
        //resort Z direction
        for(int i = 0,ind1 = 0,ind2 = root+1; i<num;i++){
            if(indices_z[i] == indices_y[root])
                continue;
            
            if(pts[indices_z[i]][0] < pts[indices_y[root]][0]){
                temp_indices_z[ind1++] = indices_z[i];
            }
            else{
                temp_indices_z[ind2++] = indices_z[i];
            }
        }

        for(int i = start;i<=end;i++){ //move the temp data to the original array
            indices_z[i] = temp_indices_z[i];
        }

    }

    if(dir == 2){ //select Z direction as main direction, resort X and Y direction
        
        //resort X dierection
        for(int i = start,ind1 = start,ind2 = root+1; i<=end;i++){
            if(indices_x[i] == indices_z[root]){
                continue;
            }

            if(pts[indices_x[i]][0] < pts[indices_z[root]][0]){
                temp_indices_x[ind1++] = indices_x[i];
            }
            else{
                temp_indices_x[ind2++] = indices_x[i];
            }
        }

        for(int i = start;i<=end;i++){  //move the temp data to the original array
            indices_x[i] = temp_indices_x[i];
        }
        
        //resort Y direction
        for(int i = 0,ind1 = 0,ind2 = root+1; i<num;i++){
            if(indices_y[i] == indices_z[root])
                continue;
            
            if(pts[indices_y[i]][0] < pts[indices_z[root]][0]){
                temp_indices_y[ind1++] = indices_y[i];
            }
            else{
                temp_indices_y[ind2++] = indices_y[i];
            }
        }

        for(int i = start;i<=end;i++){ //move the temp data to the original array
            indices_y[i] = temp_indices_y[i];
        }

    }

}

// int main(){
//     // int tempA[15];
//     // int tempB[15];

//     Merge_sort(data_x, indices_x,15);
//     Merge_sort(data_y, indices_y,15);
//     Merge_sort(data_z, indices_z,15);

//     partition(0,0,14,temp_indices_x,temp_indices_y,temp_indices_z);
   
//     cout<<"hello"<<endl;

//     for(int i = 0;i<15;i++){
//         cout<<indices_y[i]<<" ";
//     }
//     cout<<endl;

//     // for(int i = 0;i<15;i++){
//     //     cout<<indices_y[i]<<" ";
//     // }
//     // cout<<endl;
//     // cout<<endl;

//     for(int i = 0;i<15;i++){
//         cout<<indices_z[i]<<" ";
//     }
//     cout<<endl;

//     // for(int i = 0;i<15;i++){
//     //     cout<<tempB[i]<<" ";
//     // }
//     // cout<<endl;

//     partition(1,0,6,temp_indices_x,temp_indices_y,temp_indices_z);
//     for(int i = 0;i<7;i++){
//         cout<<indices_y[i]<<" ";
//     }
//     cout<<endl;

//     partition(1,8,14,temp_indices_x,temp_indices_y,temp_indices_z);
//     for(int i = 8;i<=14;i++){
//         cout<<indices_y[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }
