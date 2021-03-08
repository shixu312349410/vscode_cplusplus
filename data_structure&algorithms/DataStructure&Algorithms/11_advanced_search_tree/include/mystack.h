#include<bits/stdc++.h>
#include "kdtree_construction.h"
using namespace std;

const int MaxSize = 100;

template<typename T>
class MyStack{

public:
    T elements[MaxSize];
    int Top = -1;

public:
    void push(T& x);
    T& pop(); //如果IsEmpty(),则不执行退栈，返回false;否则退掉位于栈顶的元素，返回true,退出的元素值通过引用型参数x返回
    T& top();
    bool empty() const{return (Top == -1)? true:false;}

};


template<typename T>
void MyStack<T>::push(T& x){

    //cout<<"hello"<<endl;
    elements[++Top] = x;
}

template<typename T>
T& MyStack<T>::pop(){

    //if(empty() == true) return false;
    return elements[Top--];
    //return true;
}

template<typename T>
T& MyStack<T>::top(){

    //if(empty() == true) return false;
    return elements[Top];

}
