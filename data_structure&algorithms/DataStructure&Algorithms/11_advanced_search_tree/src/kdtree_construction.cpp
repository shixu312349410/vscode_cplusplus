#include<bits/stdc++.h>
#include"mergesort.h"
#include"kdtree_construction.h"
#include"partition.h"
using namespace std;

//Point pts[3];
double pts[][3] =  {    
                       {2,3,3},
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

const int num_of_pts = sizeof(pts)/sizeof(pts[0]);
Tree_Index tree_links[num_of_pts];




// // double data_x[15] = {2,5,9,4,8,7,9,8,9,6,3,1,9,2,8};
// // double data_y[15] = {3,4,6,7,1,2,4,4,7,3,4,6,5,1,7};
// // double data_z[15] = {3,2,7,9,5,6,1,2,8,1,5,8,3,3,6};

// // int indices_x[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
// // int indices_y[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
// // int indices_z[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};


double data_x[num_of_pts] = {2,5,9,4,8,7,9,8,9,6,3,1,9,2,8};
double data_y[num_of_pts] = {3,4,6,7,1,2,4,4,7,3,4,6,5,1,7};
double data_z[num_of_pts] = {3,2,7,9,5,6,1,2,8,1,5,8,3,3,6};

int indices_x[num_of_pts];
int indices_y[num_of_pts];
int indices_z[num_of_pts];
int temp_indices_x[num_of_pts];
int temp_indices_y[num_of_pts];
int temp_indices_z[num_of_pts];

void generate_indices(int dir){

    if(dir == 0){ //0 for X direction
        for(int i = 0;i<num_of_pts;i++){
            indices_x[i] = i;
        }
    }

    if(dir == 1){ //1 for Y direction
        for(int i = 0;i<num_of_pts;i++){
            indices_y[i] = i;
        }
    }

    if(dir == 2){ //1 for Y direction
        for(int i = 0;i<num_of_pts;i++){
            indices_z[i] = i;
        }
    }
    
}
int kdtree_construction(){
    
    cout<<num_of_pts<<endl;
    generate_indices(0);
    generate_indices(1);
    generate_indices(2);

    Merge_sort(data_x, indices_x,num_of_pts);
    Merge_sort(data_y, indices_y,num_of_pts);
    Merge_sort(data_z, indices_z,num_of_pts);

    for(int i =0;i<num_of_pts;i++){
        cout<<indices_x[i]<<' ';
    }
    cout<<endl;

    for(int i =0;i<num_of_pts;i++){
        cout<<indices_y[i]<<' ';
    }
    cout<<endl;

    for(int i =0;i<num_of_pts;i++){
        cout<<indices_z[i]<<' ';
    }
    cout<<endl;
    
    //迭代构造kd-tree
    int dir = 0;
    int start = 0;
    int end = num_of_pts - 1;
    int parent = -1;
    int rd = 0;
    frame temp;
    frame fm = {dir,start,end,parent,rd}; //区段[start,end]的父节点parent(在静态树表中的序号),rd代表从哪个递归规则处返回
    stack<frame> st;
    st.push(fm);
    int root = -1;

    while(!st.empty()){

        while(start<=end){  //处理栈顶元素，判断是否满足递归出口条件

            root = st.top().start+(st.top().end-st.top().start)/2;

            dir = st.top().dir;

            cout<<"partition"<<endl;
            partition(dir,st.top().start,st.top().end,pts,indices_x,indices_y,indices_z,temp_indices_x,temp_indices_y,temp_indices_z);
            for(int i =0;i<num_of_pts;i++){
                cout<<indices_x[i]<<' ';
            }
            cout<<endl;;

            for(int i =0;i<num_of_pts;i++){
                cout<<indices_y[i]<<' ';
            }
            cout<<endl;

            for(int i =0;i<num_of_pts;i++){
                cout<<indices_z[i]<<' ';
            }
            cout<<endl;

            if(dir == 0){ //从x方向的索引数组中选取根节点序号
                cout<<'('<<pts[indices_x[root]][0]<<','<<pts[indices_x[root]][1]<<','<<pts[indices_x[root]][2]<<')'<<endl;
                tree_links[indices_x[root]].parent = st.top().parent;
                parent = indices_x[root]; 
            }
            else if(dir == 1){ //从Y方向的索引数组中选取根节点序号
                cout<<'('<<pts[indices_y[root]][0]<<','<<pts[indices_y[root]][1]<<','<<pts[indices_y[root]][2]<<')'<<endl;
                tree_links[indices_y[root]].parent = st.top().parent;
                parent = indices_y[root];
            }
            else if(dir == 2){ //从Z方向的索引数组中选取根节点序号
                cout<<'('<<pts[indices_z[root]][0]<<','<<pts[indices_z[root]][1]<<','<<pts[indices_z[root]][2]<<')'<<endl;
                tree_links[indices_z[root]].parent = st.top().parent;
                parent = indices_z[root];
            }

            // if((st.top().parent != -1) && st.top().rd == 1){
            //     tree[st.top().parent].left = root;
            // }
            
            start = st.top().start;
            end = root - 1;
            // if(start<=end){
            //     partition(dir,start,end,indices_x,indices_y,indices_z);
            // }
            //if(start<=end){
            dir = (dir+1)%3;
            //parent = root;
            rd = 1;
            fm = {dir,start,end,parent,rd};
            st.push(fm);
            //}
            // else {
            //     fm = st.top();
            //     st.pop();

            // }
            //cout<<tree_links[indices_x[root]].parent;
        }

        while(!st.empty()){   //返回处理
            fm = st.top();
            st.pop();
            // if(fm.start>fm.end)
            //     break;
            if(fm.rd == 0)    //从根节点返回
                return true;

            if(fm.rd == 1){   //从左子树返回
                // temp = st.top(); 
                start = temp.start = fm.end + 2;  //右子树进栈
                end = temp.end = st.top().end;
                temp.parent = fm.parent;
                temp.dir = fm.dir;
                temp.rd = 2;
                
                if(fm.dir == 0){  //说明上一层是从X方向下来的，把父节点连上左右子树
                    if(fm.start>fm.end){  //从叶节点下面的假想的外部节点返回
                        tree_links[fm.parent].left = -2;
                    }
                    else {
                        tree_links[fm.parent].left = indices_x[fm.start+(fm.end-fm.start)/2];
                    }
                }

                if(fm.dir == 1){ //说明上一层是从Y方向下来的，把父节点连上左右子树
                    if(fm.start>fm.end){  //从叶节点下面的假想的外部节点返回
                        tree_links[fm.parent].left = -2;
                    }
                    else {
                        tree_links[fm.parent].left = indices_y[fm.start+(fm.end-fm.start)/2];
                    }
                }

                if(fm.dir == 2){
                    if(fm.start>fm.end){   //从叶节点下面的假想的外部节点返回
                        tree_links[fm.parent].left = -2;
                    }
                    else {
                        tree_links[fm.parent].left = indices_z[fm.start+(fm.end-fm.start)/2];
                    }   
                }

                st.push(temp);
                break;
            }

            if(fm.rd == 2){  //从右子树返回
                
                if(fm.dir == 0){  //说明上一层是从X方向下来的，把父节点连上左右子树
                    if(fm.start>fm.end){  //从叶节点下面的假想的外部节点返回
                        tree_links[fm.parent].right = -2;
                    }
                    else {
                        tree_links[fm.parent].right = indices_x[fm.start+(fm.end-fm.start)/2];
                    }
                }
                if(fm.dir == 1){  //说明上一层是从Y方向下来的，把父节点连上左右子树
                    if(fm.start>fm.end){  //从叶节点下面的假想的外部节点返回
                        tree_links[fm.parent].right = -2;
                    }
                    else {
                        tree_links[fm.parent].right = indices_y[fm.start+(fm.end-fm.start)/2];
                    }
                }
                if(fm.dir == 2){  //说明上一层是从Z方向下来的，把父节点连上左右子树
                    if(fm.start>fm.end){  //从叶节点下面的假想的外部节点返回
                        tree_links[fm.parent].right = -2;
                    }
                    else {
                        tree_links[fm.parent].right = indices_z[fm.start+(fm.end-fm.start)/2];
                    }
                }
           
            }

        }

    }
    
    return 0;
}

int pr_kdtree_construction(){

    cout<<"kdtree_construction"<<endl;
    return 0;
}