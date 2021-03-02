#include<bits/stdc++.h>
#include"mergesort.h"
#include"kdtree_construction.h"
#include"partition.h"
using namespace std;

int main(){


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
    int dir = 0;
    int start = 0;
    int end = 14;
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
            partition(dir,st.top().start,st.top().end,indices_x,indices_y,indices_z);

            if(dir == 0){
                tree[indices_x[root]].parent = parent;
                parent = indices_x[root]; 
            }
            else if(dir == 1){
                tree[indices_y[root]].parent = parent;
                parent = indices_y[root];
            }
            else {
                tree[indices_z[root]].parent = parent;
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
        }

        while(!st.empty()){   //返回处理
            fm = st.top();
            st.pop();
            if(fm.rd == 0)    //从根节点返回
                return true;

            if(fm.rd == 1){   //从左子树返回
                // temp = st.top(); 
                start = temp.start = fm.end + 2;
                end = temp.end = st.top().end;
                temp.parent = fm.parent;
                temp.rd = 2;
                if(fm.dir == 0){
                    tree[fm.parent].left = indices_x[fm.start+(fm.end-fm.start)/2];
                }
                else if(fm.dir == 1){
                    tree[fm.parent].left = indices_y[fm.start+(fm.end-fm.start)/2];
                }
                else{
                     tree[fm.parent].left = indices_z[fm.start+(fm.end-fm.start)/2];
                }
                
                st.push(temp);
                break;
            }

            if(fm.rd == 2){  //从右子树返回
                
                if(fm.dir == 0){
                    tree[fm.parent].right = indices_x[fm.start+(fm.end-fm.start)/2];
                }
                else if(fm.dir == 1){
                    tree[fm.parent].right = indices_y[fm.start+(fm.end-fm.start)/2];
                }
                else{
                     tree[fm.parent].right = indices_z[fm.start+(fm.end-fm.start)/2];
                }
           
            }

        }

    }
    
    return 0;
}