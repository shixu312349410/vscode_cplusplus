#include<bits/stdc++.h>
#include"mergesort.h"
using namespace std;

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

struct node {
    double point[3];
    int parent = -2;
    int left = -2;
    int right = -2;

}tree[15];

struct frame
{
   int start;
   int end;
   int parent;
   int rd;
};


int main(){

    int indices_x[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int indices_y[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int indices_z[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    Merge_sort(data_x, indices_x,15);
    Merge_sort(data_y, indices_y,15);
    Merge_sort(data_z, indices_z,15);

    for(int i =0;i<15;i++){
        cout<<indices_x[i]<<' ';
    }
    cout<<endl;

    for(int i =0;i<15;i++){
        cout<<indices_y[i]<<' ';
    }
    cout<<endl;

    for(int i =0;i<15;i++){
        cout<<indices_z[i]<<' ';
    }
    cout<<endl;
    

    //迭代构造kd-tree
    int start = 0;
    int end = 14;
    int parent = -1;
    int rd = 0;
    frame temp;
    frame fm = {start,end,parent,rd}; //区段[start,end]的父节点parent,rd代表从哪个递归规则处返回
    stack<frame> st;
    st.push(fm);
    int root = -1;

    while(!st.empty()){

        while(start<=end){   //处理栈顶元素，判断是否满足递归出口条件

            root = (st.top().start+st.top().end)/2;
            tree[root].parent = st.top().parent;
            // if((st.top().parent != -1) && st.top().rd == 1){
            //     tree[st.top().parent].left = root;
            // }
            start = st.top().start;
            end = root - 1;
            //if(start<=end){
            parent = root;
            rd = 1;
            fm = {start,end,parent,rd};
            st.push(fm);
            //}
            
            // else {
            //     fm = st.top();
            //     st.pop();

            // }
        }

        while(!st.empty()){    //返回处理
            fm = st.top();
            st.pop();
            if(fm.rd == 0)    //从根节点返回
                return true;

            if(fm.rd == 1){   //从左子树返回
                // temp = st.top(); 
                start = temp.start = fm.parent + 1;
                end = temp.end = st.top().end;
                temp.parent = fm.parent;
                temp.rd = 2;
                tree[fm.parent].left = fm.start+(fm.end-fm.start)/2;
                st.push(temp);
                break;
            }

            if(fm.rd == 2){  //从右子树返回
                
                tree[fm.parent].right = fm.start+(fm.end-fm.start)/2;
           
            }

        }

    }
    
    return 0;
}