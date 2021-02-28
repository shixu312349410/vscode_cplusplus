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





/*******************************************************************************
字符串操作（DreamJudge 1387)
input:输入有多组数据,每组输入一个字符串（不大于100）然后输入n，再输入n条指令（指令一定有效）
bac   （原字符串）
2     (表示下面有两条命令，两种类型的命令)
003   （命令1，第一位0表示翻转，第二位代表待操作的字符串的起始下标int i；第三位表示需要操作的字符串长度int len。）
112as （命令2，第一位1代表替换；第二位代表待操作的字符串的起始下标int i；第三位表示需要操作的字符串长度int len，                                  
              命令的第四位开始到最后的字符串替换原读入的字符串下标 i 到 i+len-1的字符串）

output:(根据指令对字符串操作后输出结果。)
cab
cas

注：字符串操作函数复习
//reverse()  反转 
//reverse(s.begin(), s.end())//不属于对象的方法 不用对象名调用
//reverse(s.begin()+l,s.begin()+l+len); 不是对象方法所以参数是迭代器

//s.substr(p,n)  子串 
//返回从s的下标p开始的n个字符组成的字符串 
//对象方法

//s.replace(p0,len0,s2,pos,len)
//删除p0开始的len0个字符，
//然后在p0处插入串s2中从pos开始的len个字符

//s.erase(p0,len)删除s中从p0开始的len个字符 

//s.find(s2,pos)从前往后，查找成功时返回第一次出现的下标
//失败返回string::npos的值?(-1)
*******************************************************************************/
// int main(){
//     string s;
//     string cmd;
//     int n;
//     while(getline(cin,s)){
//         cin>>n;
//         for(int i = 0;i<n;i++){
//             cin>>cmd;
//             if(cmd[0] == '0'){

//                 int ind = cmd[1]-'0';
//                 int len = cmd[2] - '0';
//                 reverse(s.begin()+ind,s.begin()+ind+len);

//             }

//             if(cmd[0] == '1'){
//                 int ind = cmd[1]-'0';
//                 int len = cmd[2]-'0';
//                 string add = cmd.substr(3,len);
//                 s.replace(ind,len,add,0,len);
//             }
//             cout<<s<<endl;
//         }
//     }
//     return 0;
// }