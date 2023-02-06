#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
public :
	A(const T& input)
	{}
	void doSomething()
	{
		cout << typeid(T).name() << endl;
	}
	void test()
	{}
};

template<>
class A<char>		//charŸ�Կ� ���� Ư���� �ൿ�� �ϵ��� �����,<char>
{
public:
	A(const char& temp)
	{}
	void doSomething()
	{
		cout << "Char type specialization" << endl;
	}
};

int main()
{
	A<int> a_int(1);		//int�� instanciate
	A<double> a_double(3.14);	//double�� instanciate
	A<char> a_char('a');		//char�� instanciate


	a_int.doSomething();
	a_double.doSomething();
	a_char.doSomething();
}