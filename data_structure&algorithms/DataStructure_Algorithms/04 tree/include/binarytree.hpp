/*****************************
从先序遍历的完全二叉树的序列中建立一棵二叉树，
外部空节点用特殊字符'#'输入
*******************************/

#pragma once
#include <string>
#include <cassert>
#include <iostream>
using namespace std;

template <typename T>
struct BinTreeNode
{
    T data;
    BinTreeNode<T> *leftChild;
    BinTreeNode<T> *rightChild;

    BinTreeNode() : leftChild(NULL), rightChild(NULL) {}
    BinTreeNode(T x, BinTreeNode<T> *l = NULL, BinTreeNode<T> *r = NULL)
        : leftChild(l), rightChild(r)
    {
        data = x;
    }
};

template <typename T>
class BinaryTree
{
public:
    BinaryTree() : root(NULL) {}
    ~BinaryTree()
    {
        destroy(root);
    }
    void CreateBinTree(istream &in){
        CreateBinTree(in,this->root);
    }
    void destroy();
    void PreOrder(){PreOrder(this->root);}
	void InOrder(){InOrder(this->root);}
	void PostOrder(){PostOrder(this->root);}
       
private:
    BinTreeNode<T> *root;
    void CreateBinTree(istream &in,BinTreeNode<T> *& subTree); 
    void destroy(BinTreeNode<T> *&subTree);
    void PreOrder(BinTreeNode<T> *subTree);
	void InOrder(BinTreeNode<T> * subTree);
	void PostOrder(BinTreeNode<T> * subTree);
};

template <typename T>
void BinaryTree<T>::CreateBinTree(istream &in,BinTreeNode<T> *&subTree)
{ //ËœÓÐº¯Êý: ÒÔµÝ¹é·œÊœœšÁ¢¶þ²æÊ÷¡£
    T item;
    if (in >> item)
    {
        if (item != '#')
        {
            subTree = new BinTreeNode<T>(item); //Create Root
            //assert(subTree);
            CreateBinTree(in,subTree->leftChild);  // Create left child tree
            CreateBinTree(in,subTree->rightChild); // Create reght child tree
        }
        else
        {
            subTree = NULL;
        }
    }
}

template <typename T>
void BinaryTree<T>::destroy(BinTreeNode<T> *&subTree)
{
    if (subTree != NULL)
    {
        destroy(subTree->leftChild);
        destroy(subTree->rightChild);
        delete subTree;
    }
}

template <typename T>
void BinaryTree<T>::PreOrder(BinTreeNode<T>* subTree){
	if (subTree != NULL){
		cout<<subTree->data<<"  ";
		PreOrder(subTree->leftChild);
		PreOrder(subTree->rightChild);
	}
}

template <typename T>
void BinaryTree<T>::InOrder(BinTreeNode<T> * subTree){
    if(subTree != nullptr){

        
        InOrder(subTree->leftChild);
        cout<<subTree->data<<"  ";
        InOrder(subTree->rightChild);
    }
}

template <typename T>
void BinaryTree<T>::PostOrder(BinTreeNode<T> * subTree){
    if(subTree != nullptr){
        PostOrder(subTree->leftChild);
        cout<<subTree->data<<"  ";
        PostOrder(subTree->rightChild);
    }
}


