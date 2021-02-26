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