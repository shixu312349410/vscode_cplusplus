#include<bits/stdc++.h>
using namespace std;

/*****************************************************************************************************************
 * 输入任意（用户名，成绩）的序列，可以获得成绩从高到低或从低到高的排列，相同成绩都按先录入排列在前的规则处理 (DreamJudge 1151)
 *
 * example:
 * jack      70
 * peter     96
 * tom       70
 * smith      67
 * 
 * 从高到低   成绩
 * peter     96
 * jack      70
 * tom       70
 * smith     67
 * 
 * 从低到高   成绩
 * smith     67
 * jack      70
 * tom       70
 * peter     96
 * 
 * input:
 * 3(要排序人的个数)
 * 0（0降序，1升序）
 * fang 90 (名字 成绩)
 * yang 50
 * ning 70
 * 
 * output:
 * fang 90
 * ning 70
 * yang 50
 ***************************************************************************************************************/
// struct Student{
//     string name;
//     int grade;
// }stu[1005];

// //从大到小排序
// bool cmp_desc(Student a,Student b){
//     return a.grade>b.grade;
// }
// //从小到大排序
// bool cmp_asc(Student a,Student b){
//     return a.grade<b.grade;
// }

// int main(){


//     int n,order;
//     while(cin>>n){
//         cin>>order;
//         for(int i = 0;i<n;i++){
//             cin>>stu[i].name>>stu[i].grade;
//         }
//         if(order == 0) //降序
//             stable_sort(stu,stu+n,cmp_desc);
//         else    
//             stable_sort(stu,stu+n,cmp_asc);
//         for(int i = 0;i<n;i++){
//             cout<<stu[i].name<<' '<<stu[i].grade<<endl;
//         }

//     }
//     return 0;
// }

//解法2（二级排序）
// struct Student{
//     string name;
//     int grade;
//     int id;
// }stu[1005];

// //从大到小排序
// bool cmp_desc(Student a,Student b){
//     if(a.grade == b.grade) 
//         return a.id<b.id;
//     return a.grade>b.grade;
// }
// //从小到大排序
// bool cmp_asc(Student a,Student b){
//     if(a.grade == b.grade)
//         return a.id<b.id;
//     return a.grade<b.grade;
// }

// int main(){

//     int n,order;
//     while(cin>>n){
//         cin>>order;
//         for(int i = 0;i<n;i++){
//             cin>>stu[i].name>>stu[i].grade;
//             stu[i].id = i;
//         }
//         if(order == 0) //降序
//             sort(stu,stu+n,cmp_desc);
//         else    
//             sort(stu,stu+n,cmp_asc);
//         for(int i = 0;i<n;i++){
//             cout<<stu[i].name<<stu[i].grade<<endl;
//         }

//     }
//     return 0;
// }






/****************************************************************************************************
输入n个数进行排序，要求先按奇偶后按从小到大的顺序排序。（DreamJudge 1010）
输入描述:
第一行输入一个整数n，表示总共有多少个数，n<=1000。
第二行输入n个整数，用空格隔开。
8
1 2 3 4 5 6 7 8

输出描述:
输出排序之后的结果。
1 3 5 7 2 4 6 8
*****************************************************************************************************/
bool cmp(int a,int b){
    if(a%2 == b%2)
        return a<b;
    else
        return (a%2)>(b%2);
}

int main(){
    
    int n;
    int a[1005]={0};
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i = 0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}
