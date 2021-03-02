// #include<bits/stdc++.h>
// #include"mergesort.h"
// #include"kdtree_construction.h"
// using namespace std;

// int main(){


//     Merge_sort(data_x, indices_x,15);
//     Merge_sort(data_y, indices_y,15);
//     Merge_sort(data_z, indices_z,15);

//     for(int i =0;i<15;i++){
//         cout<<indices_x[i]<<' ';
//     }
//     cout<<endl;

//     for(int i =0;i<15;i++){
//         cout<<indices_y[i]<<' ';
//     }
//     cout<<endl;

//     for(int i =0;i<15;i++){
//         cout<<indices_z[i]<<' ';
//     }
//     cout<<endl;
    

//     //迭代构造kd-tree
//     int start = 0;
//     int end = 14;
//     int parent = -1;
//     int rd = 0;
//     frame temp;
//     frame fm = {start,end,parent,rd}; //区段[start,end]的父节点parent,rd代表从哪个递归规则处返回
//     stack<frame> st;
//     st.push(fm);
//     int root = -1;

//     while(!st.empty()){

//         while(start<=end){   //处理栈顶元素，判断是否满足递归出口条件

//             root = (st.top().start+st.top().end)/2;
//             tree[root].parent = st.top().parent;
//             // if((st.top().parent != -1) && st.top().rd == 1){
//             //     tree[st.top().parent].left = root;
//             // }
//             start = st.top().start;
//             end = root - 1;
//             //if(start<=end){
//             parent = root;
//             rd = 1;
//             fm = {start,end,parent,rd};
//             st.push(fm);
//             //}
            
//             // else {
//             //     fm = st.top();
//             //     st.pop();

//             // }
//         }

//         while(!st.empty()){    //返回处理
//             fm = st.top();
//             st.pop();
//             if(fm.rd == 0)    //从根节点返回
//                 return true;

//             if(fm.rd == 1){   //从左子树返回
//                 // temp = st.top(); 
//                 start = temp.start = fm.parent + 1;
//                 end = temp.end = st.top().end;
//                 temp.parent = fm.parent;
//                 temp.rd = 2;
//                 tree[fm.parent].left = fm.start+(fm.end-fm.start)/2;
//                 st.push(temp);
//                 break;
//             }

//             if(fm.rd == 2){  //从右子树返回
                
//                 tree[fm.parent].right = fm.start+(fm.end-fm.start)/2;
           
//             }

//         }

//     }
    
//     return 0;
// }