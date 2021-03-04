#include<bits/stdc++.h>
using namespace std;
/******************************************************************************
输入N个学生的信息，然后进行查询。(DreamJudge 1476)
input:
4              (输入学生个数)
01 李江 男 21   （学生信息）                
02 刘唐 男 23
03 张军 男 19
04 王娜 女 19
5              （需要查询的次数）
02             （每行输入一个学号）
03
01
04
03 

output:(输出M行，每行包括一个对应于查询的学生的信息,
        如果没有对应的学生信息，则输出“No Answer!”)       
02 刘唐 男 23
03 张军 男 19
01 李江 男 21
04 王娜 女 19
03 张军 男 19
****************************************************************************/
// struct record{
//     string num; //学生编号,主键key
//     string name; 
//     string sex;
//     int age;

// };
// int main(){

//     int n,m;
//     map<string,record> M;
//     while(cin>>n){
//         record temp;
//         for(int i = 0;i<n;i++){
//             cin>>temp.num>>temp.name>>temp.sex>>temp.age;
//             M[temp.num] = temp;//将学号指向对应的结构体
//         }
//         cin>>m;//查询次数
//         for(int i = 0;i<m;i++){
//             string num;
//             cin>>num;
//             if(M.find(num)!=M.end()){
//                 cout<<M[num].num<<' '<<M[num].name<<' '<<M[num].sex<<' '<<M[num].age<<endl;
//             }
//             else    
//                 cout<<"No Answer!"<<endl;    
//         }


//     }
//     return 0;   

// }

/**********************************************************************
有n个整数的集合，想让你从中找出x是否存在。
input:
5         (第一行输入一个正整数n（n < 100000）)
1 2 3 4 5 (第二行输入n个正整数，用空格隔开。)
3         (第三行输入一个正整数q（q<100000），表示查询次数。)
6         (接下来输入q行，每行一个正整数x，查询x是否存在。)
6
3

output: 如果x存在，请输出find，如果不存在，请输出no，并将x加入到集合中。
no
find
find
 **********************************************************************/
// int main(){
//     int n,m;
//     map<int,int> M;
//     while(cin>>n){
//         int temp;
//         for(int i = 0;i<n;i++){
//             cin>>temp;
//             M[temp]++;
//         }
//         cin>>m;
//         for(int i = 0;i<m;i++){
//             cin>>temp;
//             if(M[temp] == 0){
//                 cout<<"no"<<endl;
//                 M[temp]++;
//             }
//             else
//                 cout<<"find"<<endl;
//         }       
//     }
//     return 0;
// }







/************************************************************************
“臭味相投-找潜在朋友“（DreamJudge 1177）
input:
4 5 (第一个数表示学生个数（1-4），第二个数表示书的编号范围（1-5）)
2   （每个学生输入一个喜欢的图书编号）
3
2
1

output:
1     （为每个读者输出潜在朋友的个数，没有则输出“BeiJu”）
BeiJu
1
BeiJu
*************************************************************************/
// int main(){
//     int m,n;
//     int stu[205];
   
//     while(cin>>m>>n){
//          map<int,int> M;
//         for(int i = 1;i<=m;i++){
//             cin>>stu[i];
//             M[stu[i]]++;
//         }

//         for(int i = 1;i<=m;i++){

//             if(M[stu[i]]>1){
//                 cout<<(M[stu[i]]-1)<<endl;
//             }
//             else
//                 cout<<"BeiJu"<<endl;
//         }
//     }
//     return 0;
// }
