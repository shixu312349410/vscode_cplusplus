#include<bits/stdc++.h>
using namespace std;
//归并排序的递归实现
// void merge(int arr[],int low,int mid,int high){


// }

// void mergesort(){


// }

// int main(){


// }

//归并排序的非递归（循环迭代实现）
void merge(double A[],double TempA[],int L,int R,int RightEnd){

    int LeftEnd = R-1;
    int Temp = L;
}

void merge_pass(double A[],double TempA[],int N,int length){

    for (int i = 0;i<=N-2*length;i+=2*length){
        merge(A,TempA,i,i+length,i+2*length-1);
    if(i+length<N)/*归并最后两个子列*/
        merge()
    }

}