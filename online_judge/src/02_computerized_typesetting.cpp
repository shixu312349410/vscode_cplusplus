#include<bits/stdc++.h>
using namespace std;

/**********************************************************************************************************************************
// example:
// 5
//     *    
//    ***   
//   *****  
//  ******* 
// *********
*************************************************************************************************************************************/
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1;i<=n;i++){//输出每一行
//         for(int j = 1;j<=n-i;j++){//控制每一行的空格输出
//             cout<<' ';
//         }
//         for(int j = 1;j<=2*i-1;j++){//控制每一行的*输出
//             cout<<'*';
//         }
//         cout<<endl;//输出完了一行后换行输出

//     }
//     return 0;
// }






/********************************************************************************************************************************
// example:
// 5
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//
**********************************************************************************************************************************/    
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1;i<=n;i++){//输出每一行，i表示第i行
//         for(int j = 1;j<=n-i;j++){//控制每一行的空格输出
//             cout<<' ';
//         }
//         for(int j = 1;j<=2*i-1;j++){//控制每一行的*输出
//             cout<<'*';
//         }
//         cout<<endl;//输出完了一行后换行输出
//     }

//     //下三角只需要把上三角反过来输出，调整i的初值和i的变化方向，其余代码不变
//     for(int i = n-1;i>=1;i--){//只需要调整该行代码即可输出下三角对称的部分
//         for(int j = 1;j<=n-i;j++){//控制每一行的空格输出
//             cout<<' ';
//         }
//         for(int j = 1;j<=2*i-1;j++){//控制每一行的*输出
//             cout<<'*';
//         }
//         cout<<endl;//输出完了一行后换行输出
//     }
//     return 0;
// }





/**********************************************************************************************************************************
matrix roration (clockwise 90 degree)
example:
3 4
1 2 3 4
5 6 7 8
9 8 7 6

9 5 1
8 6 2
7 7 3
6 8 4
*************************************************************************************************************************************/
// int main(){

//     int a[105][105];
//     int b[105][105];
//     int m,n;
//     scanf("%d%d",&m,&n);//输入矩阵的行数和列数 m*n的矩阵
//     for (int i = 1;i<=m;i++){ //输入矩阵数据到矩阵a中
//         for(int j = 1;j<=n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for (int i = 1;i<=m;i++){ //顺时针把矩阵a旋转矩阵90度后放到矩阵b中
//         for(int j = 1;j<=n;j++){
//             b[j][m-i+1] = a[i][j];
//         }
//     }

//     for (int i = 1;i<=n;i++){ //输出旋转后的矩阵
//         for(int j = 1;j<=m;j++){
//             printf("%d ",b[i][j]);
//         }
//         cout<<endl;
//     }
//     return 0;
// }





/**********************************************************************************************************************************
旋转方阵
example:
输入：5 

输出：
1   16  15  14  13
2   17  24  23  12
3   18  25  22  11
4   19  20  21  10
5   6   7   8   9
*************************************************************************************************************************************/
// int main(){

//     int a[25][25];
//     int n;
//     scanf("%d",&n);
//     int w = 1;
//     for(int i = 1;i<=(n+1)/2;i++){

//         //向下
//         for(int j = i;j<=n-i+1;j++){
//             a[j][i] = w++;
//         }

//         //向右
//         for(int j = i+1;j<=n-i+1;j++){
//             a[n-i+1][j] = w++;
//         }

//         //向上
//         for(int j =n-i;j>=i;j--){
//             a[j][n-i+1] = w++;
//         }

//         //向左
//        for(int j =n-i;j>=i+1;j--){
//             a[i][j] = w++;
//         }


//     }

//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n;j++){
//             printf("%-4d",a[i][j]);//默认是右对齐的，只有加了-4d,才是左对齐
//         }
//         cout<<endl;
//     }

//     return 0;
// }



