#include <iostream>

using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'am base" << endl;
	}
};

class Derived :public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value)
	{}

	using Base::m_i;

private:
	void print() = delete;	//혹은 delete해버림
};

int main()
{
	Derived derived(7);

	derived.m_i = 1024;	
	derived.print();

	return 0;			

}						