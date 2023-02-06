#include <iostream>

using namespace std;

class Exception
{
public:
	void report()
	{
		cerr << "Excepton report" << endl;
	}
};

class ArrayException :public Exception
{
public:
	void report()
	{
		cerr << "Array exception" << endl;
	}
};

class MyArray
{
private:
	int m_data[5];	

public :
	int& operator [](const int& index)
	{
		//if (index < 0 || index >= 5) throw - 1;
		if (index < 0 || index >= 5) throw ArrayException();	//ArrayException으로 던진것을

		return m_data[index];
	}
};

void doSomething()
{
	MyArray my_array;

	try
	{
		my_array[100];
	}
	catch (const int& x)	
	{
		cerr << "Exception" << x << endl;
	}
	//catch (ArrayException& e)
	//{
	//	e.report();
	//	throw e;
	//}
	catch (Exception &e)
	{
		e.report();
		throw;				//throw e 가아닌 throw로 선언
	}
}

int main()
{

	try {
		doSomething();
	}
	catch (ArrayException& e)
	{
		cout << "main()" << endl;
		e.report();
	}
	catch (Exception& e)		//부모가 받지않고 자식이 받도록 만들기
	{
		e.report();
	}

	return 0;
}