#include<bits/stdc++.h>
using namespace std;
/**********************************************************************************************************************************
今天是2012年4月12日星期四，编写程序，输入今天开始到12月31日之间的任意日期，输出那一天是星期几。例如输入“5（回车）20（回车）”（5月20日），输出应为“Sunday”
example:
input:
5
20
output:
Sunday
*************************************************************************************************************************************/

// int days[] = {0, 30, 31, 30, 31, 31, 30, 31, 30, 31};//4月以及之后每月的天数，第一个元素为0便于计数 
// string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// int cal_days(int month, int date)
// {
// 	//计算该日期与4月12相隔的天数 
// 	int num = 0;
// 	for (int i = 0; i <= month-4; i++)
// 		num += days[i];
// 	num += (date-12);
// 	return num;
// }

// int main()
// {
// 	int ans = 4;//星期天为0，星期四为4
// 	int month, date;
// 	cin >> month >> date;
// 	ans += cal_days(month, date);
// 	ans %= 7;//计算星期 
// 	cout << week[ans] << endl;
// 	return 0;
// }