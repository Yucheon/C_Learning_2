#include <iostream>
using namespace std;

class A
{
public:
	void print()
	{
		cout << "A" << endl;
	}
	virtual A* getThis() { return this; }
};

class B :public A
{
public:
	void print()
	{
		cout << "B" << endl;
	}
	virtual B* getThis() { return this; }
};

class C : public B
{
public:
	void print()
	{
		cout << "C" << endl;
	}
};

int main()
{
	A a;
	B b;
	//C c;

	A& ref = b;				//A클래스의 레퍼런스에 b를 넣음
	b.getThis()->print();	//리턴으로 B의 포인터	,B ,클래스 B가 실행됨
	ref.getThis()->print();	//virtual함수 포인터 사용 ,A, 클래스 A가 실행됨

	cout << typeid(b.getThis()).name() << endl;		//class B *
	cout << typeid(ref.getThis()).name() << endl;	//class A *
	
	return 0;
}