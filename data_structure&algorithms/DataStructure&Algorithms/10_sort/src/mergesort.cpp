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
// void Merge(double A[],double TempA[],int L,int R,int RightEnd){

//     int LeftEnd = R-1;
//     int Temp = L;//存放结果的数组的初始位置
//     //int NumElements = RightEnd - L + 1;
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

//     //这里不做最后一步的搬移操作，最后把merge的结果放到TempA中
//     // for(int i = 0;i<NumElements;i++,RightEnd--){//move data in temp array to original array A
//     //     A[RightEnd] = TempA[RightEnd];
//     // }

// }

// void Merge_pass(double A[],double TempA[],int N,int length){
    
//     int i;
//     for (i = 0;i<=N-2*length;i+=2*length){//尾巴另外处理，也就是先处理前面都是成对出现的部分
//         Merge(A,TempA,i,i+length,i+2*length-1);
//     }
//     if(i+length<N)/*归并最后两个子列*/
//         Merge(A,TempA,i,i+length,N-1);
//     else//最后只剩一个子列,直接把A导入到TempA里面
//         for(int j = i;j<N;j++) TempA[j] = A[j];

// }

// // void Merge_sort(double A[], int N){

// //     int length = 1;//初始化子序列的长度，即步长
// //     double * TempA;
// //     TempA  = (double*)malloc(N*sizeof(double));
// //     if(TempA!=NULL){
// //         while(length<N){
// //             Merge_pass(A,TempA,N,length);
// //             length*=2;
// //             Merge_pass(TempA,A,N,length);
// //             length*=2;
// //         }
// //         free(TempA);

// //     }
// //     else    
// //         printf("memory insufficient");

// // }

// //没有动态分配内存的代码
// void Merge_sort(double A[], int N){

//     int length = 1;//初始化子序列的长度，即步长
//     // double * TempA;
//     // TempA  = (double*)malloc(N*sizeof(double));
//     double TempA[N];
//     if(TempA!=NULL){
//         while(length<N){
//             Merge_pass(A,TempA,N,length);
//             length*=2;
//             Merge_pass(TempA,A,N,length);
//             length*=2;
//         }
//         //free(TempA);

//     }
//     // else    
//     //     printf("memory insufficient");

// }

// int main(){

//     double a[10] = {10,20,30,12,5,6,13,8,31,22};
//     Merge_sort(a,10);
//     for (int i = 0;i<10;i++){
//         cout<<a[i]<<' ';
//     }

// }


//归并排序（非递归（循环迭代实现）+索引数组
void Merge(double A[],int Indices[],int TempInd[],int L,int R,int RightEnd){

    int LeftEnd = R-1;
    int Temp = L;//存放结果的数组的初始位置
    //int NumElements = RightEnd - L + 1;
    while(L<=LeftEnd && R<=RightEnd){
        if(A[Indices[L]]<=A[Indices[R]]) TempInd[Temp++] = Indices[L++];
        else TempInd[Temp++] = Indices[R++];
    }
    while(L<=LeftEnd){
        TempInd[Temp++] = Indices[L++];
    }

    while(R<=RightEnd){
        TempInd[Temp++] = Indices[R++];
    }

    //这里不做最后一步的搬移操作，最后把merge的结果放到TempA中
    // for(int i = 0;i<NumElements;i++,RightEnd--){//move data in temp array to original array A
    //     A[RightEnd] = TempA[RightEnd];
    // }

}

void Merge_pass(double A[],int Indices[],int TempInd[],int N,int length){
    
    int i;
    for (i = 0;i<=N-2*length;i+=2*length){//尾巴另外处理，也就是先处理前面都是成对出现的部分
        Merge(A,Indices,TempInd,i,i+length,i+2*length-1);
    }
    if(i+length<N)/*归并最后两个子列*/
        Merge(A,Indices,TempInd,i,i+length,N-1);
    else//最后只剩一个子列,直接把A导入到TempA里面
        for(int j = i;j<N;j++) TempInd[j] = Indices[j];

}

// void Merge_sort(double A[], int N){

//     int length = 1;//初始化子序列的长度，即步长
//     double * TempA;
//     TempA  = (double*)malloc(N*sizeof(double));
//     if(TempA!=NULL){
//         while(length<N){
//             Merge_pass(A,TempA,N,length);
//             length*=2;
//             Merge_pass(TempA,A,N,length);
//             length*=2;
//         }
//         free(TempA);

//     }
//     else    
//         printf("memory insufficient");

// }

//没有动态分配内存的代码
void Merge_sort(double A[], int Indices[],int N){

    int length = 1;//初始化子序列的长度，即步长
    // double * TempA;
    // TempA  = (double*)malloc(N*sizeof(double));
    int TempInd[N];
    if(TempInd!=NULL){
        while(length<N){
            Merge_pass(A,Indices,TempInd,N,length);
            length*=2;
            Merge_pass(A,TempInd,Indices,N,length);
            length*=2;
        }
        //free(TempA);

    }
    // else    
    //     printf("memory insufficient");

}

int main(){

    double a[10] = {10,20,30,12,5,6,13,8,31,22};
    int indices[10] = {0,1,2,3,4,5,6,7,8,9}; 
    Merge_sort(a,indices,10);
    for (int i = 0;i<10;i++){
        cout<<indices[i]<<' ';
    }

}