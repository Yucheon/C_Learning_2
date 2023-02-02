#include <iostream>

using namespace std;

class Base
{
public :
	virtual ~Base()					//가상 소멸자를 만들어 자식클래스의 소멸자가 호출되도록 함
	{
		cout << "~Base" << endl;
	}
};

class Derived :public Base
{
private:
	int* m_array;		//메모리 동적할당을 위한 선언

public :
	Derived(int length)
	{
		m_array = new int[length];	//메모리 동적할당 부여
	}

	~Derived()
	{
		cout << "~Derived" << endl;
		delete[]m_array;			//메모리 지워주기 
	}
};

int main()
{
	//Derived derived(5);	//~Derived  ~Base

	Derived* derived = new Derived(5);
	Base* base = derived;
	delete base;

	return 0;
}