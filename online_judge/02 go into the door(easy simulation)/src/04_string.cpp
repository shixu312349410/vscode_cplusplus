#include<bits/stdc++.h>
using namespace std;
/*******************************************************************************************************************
 * 对一个字符串中的所有单词，如果单词的首字母不是大写字母，则把单词的首字母变成大写字母。 
 * 在字符串中，单词之间通过空白符分隔，空白符包括：空格(' ')、制表符('\t')、回车符('\r')、换行符('\n')
 * input example:
 * if so, you already have a google account. you can sign in on the right.
 * output:
 * If So, You Already Have A Google Account. You Can Sign In On The Right.
 * ****************************************************************************************************************/
// int main(){
    
//     string s;
//     while(getline(cin,s)){

//         if((s[0]!=' ')&&(s[0]>='a'&&s[0]<='z')){
//             s[0]-=32;
//         }
//         for(int i=1;i<s.length();i++){

//             if((s[i-1]==' '||s[i-1]=='\t')&&(s[i]>='a'&&s[i]<='z')){
//                 s[i]-=32;
//             }
//         }
//         cout<<s<<endl;
//     }
//     return 0;

// }





/*******************************************************************************************************************
统计子串s在目标字符串t中出现次数
example
s = bc
t = abcdefgabcd
输出：2
 * ****************************************************************************************************************/
// int main(){

//     string s,t;
//     cin>>s;
//     cin>>t;
//     bool match = false;
//     int num = 0;
//     int ls = s.length();
//     int lt = t.length();
//     for(int i =0;i<lt;i++){
//         int j=0;
//         for(;j<ls;j++){
//             if(s[j] != t[i+j])
//                 break;
//         }
//         if(j == ls)
//             num++;     
//     }
//     cout<<num<<endl;
//     return 0;
// }





/***********************************************************************************
编写加密程序，加密规则为：将所有字母转化为该字母后的第三个字母，
即A->D、B->E、C->F、......、Y->B、Z->C。小写字母同上，其他字符不做转化。
输入任意字符串，输出加密后的结果。
例如：输入"I love 007"，输出"L oryh 007"
 * *********************************************************************************/
// int main(){

//     string s;
//     getline(cin,s);
//     for(int i =0;i<s.length();i++){
//         if(s[i]>='a' && s[i]<='z'){
//             s[i]+=3;
//             if(s[i]>'z') s[i]-=26;
//         }
//         else if(s[i]>='A' && s[i]<='Z'){
//             s[i]+=3;
//             if(s[i]>'Z')  s[i]-=26;       
//         }
//         else
//             continue;
//     }
//     cout<<s<<endl;
//     return 0;
// }






/***************************************************************************************************
给你一个字符串S，要求你将字符串中出现的所有"gzu"（不区分大小写）子串删除，输出删除之后的S。
就是说出现“Gzu”、“GZU”、“GZu”、"gzU"都可以删除。
input example:GzzGzukkgzUuu
output example:Gzzkkuu
 * ************************************************************************************************/
// int main() {
// 	string str,str1;
// 	cin >> str;
// 	str1 = str;
// 	int pos = 0;
//     cout<<&str<<endl;
//     cout<<&str1<<endl;
// 	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
// 	//cout << str1 << endl;
// 	while ((pos = str1.find("gzu")) != -1)
// 	{
// 		str.erase(pos, 3);
// 		str1.erase(pos, 3);//这里为什么str1也要删除，因为erase返回的是删除后的字符串，不删除pos位置对不上
// 	}
// 	cout << str << endl;
// 	return 0;
// }