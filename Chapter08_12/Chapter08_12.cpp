#include <iostream>

using namespace std;

class B
{
private:
	int m_value = 1;

public:
	void doSomething(const A& a);
};

class A								//A가 B를 모르기 떄문에 뒤에 선언
{
private:
	int m_value = 1;

	//friend class B;
	friend void B::doSomething(const A& a);
};

void B::doSomething(const A& a)
{
	cout << a.m_value << endl;
}

int main()
{
	A a;
	B b;

	b.doSomething(a);

	return 0;
}