//10_1.cpp
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	const int N = 5;
	vector<int> s(N);	//����һ����СΪN����������
	vector<int> v(N);
	//�ӱ�׼���������������������
	for (int i = 0; i < N; i++)
		cin >> s[i];
	//�������������ÿ��Ԫ�ص��෴��
	transform(s.begin(), s.end(), ostream_iterator<int>(cout, " "), negate<int>());
	//transform(s.begin(), s.end(), v.begin(), negate<int>());
	cout <<v.size()<< endl;
	return 0;
}
