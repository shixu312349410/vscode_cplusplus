//8_6.cpp
#include <iostream>
using namespace std;

class Base1 { //����Base1����
public:
	virtual void display() const = 0;	//���麯��
};

class Base2: public Base1 { //����������Base2����
public:
	void display() const;	//���ǻ�����麯��
};
void Base2::display() const {
	cout << "Base2::display()" << endl;
}

class Derived: public Base2 { //����������Derived����
public:
	void display() const;	//���ǻ�����麯��
};
void Derived::display() const {
	cout << "Derived::display()" << endl;
}

void fun(Base1 *ptr) { //����Ϊָ���������ָ��
	ptr->display();	//"����ָ��->��Ա��"
}

int main() {	//������
	Base2 base2;	//����Base2�����
	Derived derived;	//����Derived�����
	fun(&base2);	//��Base2�����ָ�����fun����
	fun(&derived);	//��Derived�����ָ�����fun����
	return 0;
}