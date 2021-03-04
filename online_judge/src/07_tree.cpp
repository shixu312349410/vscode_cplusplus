#include<bits/stdc++.h>
using namespace std;
/**********************************************************************************
PAT (Advanced Level) 1020
给定后序和中序序列求二叉树的层序遍历序列(单点测设)
Sample Input:
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7

Sample Output:
4 1 6 3 5 7 2
***********************************************************************************/
// struct BTNode
// {
//     /* data */
//     int data;
//     BTNode * lchild = nullptr;
//     BTNode * rchild = nullptr;
// };

// int postorder[50];
// int inorder[50];

// BTNode* create(int postL,int postR,int inL,int inR){
//     if(postL>postR)
//         return nullptr;
//     else{

//         BTNode* root = new BTNode;
//         root->data = postorder[postR];
//         int i;
//         for(i = inL;i<=inR;i++){
//             if(inorder[i] == postorder[postR])
//                 break;
//         }
//         int numLeft = i-inL; //左子树中节点个数
//         root->lchild = create(postL,postL+numLeft-1,inL,i-1);//返回左子树的根节点
//         root->rchild = create(postL+numLeft,postR-1,i+1,inR);//返回右子树的根节点
//         return root;//把当前这一层的根节点返回上去，挂在上一层的合适的位置

//     }

// }

// int num = 0;//已输出节点的个数
// void bfs(BTNode* root,int N){ //输出要求每个数字之间有空格，最后一个输出后面没有空格，
//                               //所以增加一个节点总数N作为参数
//     queue<BTNode*> q;
//     q.push(root);
//     while(!q.empty()){
//         BTNode* temp = q.front();
//         q.pop();
//         num++;
//         if(num == N)
//             cout<<temp->data;
//         else    
//             cout<<temp->data<<' ';
//         if(temp->lchild!=nullptr)
//             q.push(temp->lchild);
//         if(temp->rchild!=nullptr)
//             q.push(temp->rchild);
//     }

// }

// int main(){
    
//     int N;
//     cin>>N;
//     for(int i=0;i<N;i++){
//         int n;
//         cin>>n;
//         postorder[i] = n;
//     }
//     for(int i=0;i<N;i++){
//         int n;
//         cin>>n;
//         inorder[i] = n;
//     }
//     BTNode* BinTree = create(0,N-1,0,N-1);
//     bfs(BinTree,N);
//     return 0;
// }