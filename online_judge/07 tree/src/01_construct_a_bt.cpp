#include<bits/stdc++.h>
using namespace std;
/**********************************************************************************
PAT(Level A) 1020
给定后序和中序序列求二叉树的层序遍历序列(单点测设)
Sample Input:
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7

Sample Output:
4 1 6 3 5 7 2
***********************************************************************************/
struct BTNode
{
    /* data */
    int data;
    BTNode * lchild = nullptr;
    BTNode * rchild = nullptr;
};

int postorder[50];
int inorder[50];

BTNode* create(int postL,int postR,int inL,int inR){
    if(postL>postR)
        return nullptr;
    else{

        BTNode* root = new BTNode();
        root->data = postorder[postR];
        int i;
        for(i = inL;i<=inR;i++){
            if(inorder[i] == postorder[postR])
                break;
        }
        int numLeft = i-inL; //左子树中节点个数
        root->lchild = create(postL,postL+numLeft-1,inL,i-1);
        root->rchild = create(postL+numLeft,postR-1,i+1,inR);

    }

}

int main(){
    

    return 0;
}