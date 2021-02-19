#include<bits/stdc++.h>
using namespace std;

//归并排序的递归实现(陈越老师版本)
// void Merge(double A[],double TempA[],int L,int R,int RightEnd){

//     int LeftEnd = R-1;
//     int Temp = L;//存放结果的数组的初始位置
//     int NumElements = RightEnd - L + 1;
//     while(L<=LeftEnd && R<=RightEnd){
//         if(A[L]<=A[R]) TempA[Temp++] = A[L++];
//         else TempA[Temp++] = A[R++];
//     }
//     while(L<=LeftEnd){
//         TempA[Temp++] = A[L++];
//     }

//     while(R<=RightEnd){
//         TempA[Temp++] = A[R++];
//     }
//     for(int i = 0;i<NumElements;i++,RightEnd--){//move data in temp array to original array A
//         A[RightEnd] = TempA[RightEnd];
//     }

// }

// void Msort(double A[],double TempA[],int L,int RightEnd){

//     int Center = (L+RightEnd)/2;
//     if(L<RightEnd){
//         Msort(A,TempA,L,Center);
//         Msort(A,TempA,Center+1,RightEnd);
//         Merge(A,TempA,L,Center+1,RightEnd);
//     }
// }

// //接口封装，看上去更加友好的统一接口
// void Merge_sort(double A[],int N){
//     double *TempA;
//     TempA = (double*)malloc(N*sizeof(double));
//     if(TempA != NULL){
//         Msort(A,TempA,0,N-1);
//         free(TempA);
//     }
//     else
//     printf("memory insufficient");
// }

// int main(){

//     double a[10] = {10,20,30,12,5,6,13,8,31,22};
//     Merge_sort(a,10);
//     for (int i = 0;i<10;i++){
//         cout<<a[i]<<' ';
//     }

// }

//归并排序的非递归（循环迭代实现）
void Merge(double A[],double TempA[],int L,int R,int RightEnd){

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

    for(int i = 0;i<NumElements;i++,RightEnd--){//move data in temp array to original array A
        A[RightEnd] = TempA[RightEnd];
    }

}

// void merge_pass(double A[],double TempA[],int N,int length){

//     for (int i = 0;i<=N-2*length;i+=2*length){
//         merge(A,TempA,i,i+length,i+2*length-1);
//     if(i+length<N)/*归并最后两个子列*/
//         merge()
//     }

// }

int main(){

    double a[10] = {10,20,30,12,5,6,13,8,31,22};
    // Merge_sort(a,10);
    // for (int i = 0;i<10;i++){
    //     cout<<a[i]<<' ';
    // }

}