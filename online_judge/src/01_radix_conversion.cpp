#include<bits/stdc++.h>
using namespace std;

/****************************************************************************************************************************
//convert a string in radix X to decimal integer number
******************************************************************************************************************************/
// int main(){  
//     char s[105];
//     int x; //把X进制转为10进制
//     scanf("%s%d",s,&x);
//     int len = strlen(s);
//     int ans =0;
//     for(int i =0;i<len;i++){
//        ans = ans*x + ((s[i]>='0'&&s[i]<='9')? s[i]-'0':s[i]-'A'+10);
//     }
//     printf("%d\n",ans);
//     return 0;
// }






/****************************************************************************************************************************
//convert a integer in decimal to a string in radix Y
******************************************************************************************************************************/
// int main(){

//     char s[105];
//     int n,y;//input decimal integer n , and radix y which need to be converted into
//     while(scanf("%d%d",&n,&y)!=EOF){

//         int idx=0,w = 0;
//         while(n!=0){
//             s[idx++] = (w = n%y)<10? w+'0':w -10 +'A';
//             n/=y;
//         }

//         for (int i = idx-1;i>=0;i--){ //反序输出
//             printf("%c",s[i]);
//         }
//         printf("\n");
//     }   
//     return 0;
// }
