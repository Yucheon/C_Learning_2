#include <iostream>

using namespace std;

class A
{
private:
	int m_x;
public:
	A(int x)
		: m_x(x)
	{
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	B(int x)try :A(x)	//initialize list까지 포함하여 try를 하고
	{
		//do initialization
	}
	catch (...)			//발생한 예외를 여기에서 catch
	{
		cout << "Catch in B constructor" << endl;
		//throw;
	}

};
void doSomething()
{
	try
	{
		throw - 1;
	}
	catch (...)
	{
		cout << "Catch in doSomething()" << endl;
	}
}

int main()
{
	try
	{
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}

	return 0;
}