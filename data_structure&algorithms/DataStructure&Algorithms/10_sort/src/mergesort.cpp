#include<bits/stdc++.h>
using namespace std;

//归并排序的递归实现
void merge(double A[],double TempA[],int L,int R,int RightEnd){

    int LeftEnd = R-1;
    int Temp = L;//存放结果的数组的初始位置
    int NumElements = RightEnd - L + 1;
    while(L<=LeftEnd && R<=RightEnd){
        if(A[L]<=A[R]) TempA[Temp++] = A[L++];
        else TempA[Temp++] = A[R++];
    }
    while(L<=LeftEnd){
        TempA[Temp++] = A[L++];
    }

    while(R<=RightEnd){
        TempA[Temp++] = A[R++];
    }
    for(int i = 0;i<NumElements;i++,RightEnd--){//
        A[RightEnd] = TempA[RightEnd];
    }

}

// void mergesort(){


// }

// int main(){


// }

//归并排序的非递归（循环迭代实现）
void merge(double A[],double TempA[],int L,int R,int RightEnd){

    int LeftEnd = R-1;
    int Temp = L;//存放结果的数组的初始位置
    int NumElements = RightEnd - L + 1;
    while(L<=LeftEnd&&R<=RightEnd){
        if(A[L]<=A[R]) TempA[Temp++] = A[L++];
        else TempA[Temp++] = A[R++];
    }
    while(L<=LeftEnd){
        TempA[Temp++] = A[L++];

    }
    while(R<=RightEnd){
        TempA[Temp++] = A[R++];
    }
}

void merge_pass(double A[],double TempA[],int N,int length){

    for (int i = 0;i<=N-2*length;i+=2*length){
        merge(A,TempA,i,i+length,i+2*length-1);
    if(i+length<N)/*归并最后两个子列*/
        merge()
    }

}