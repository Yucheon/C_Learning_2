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
		cout << "I'm Base" << endl;
	}
	friend std::ostream& operator <<(std::ostream& out, const Base& b)
	{
		cout << "This is base output" << endl;
		return out;
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

	void print()
	{
		Base::print();
		cout << "I'm Derived" << endl;
	}
	friend std::ostream& operator <<(std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b) << endl;			//Static_cast로 부모의 입출력연산자 오버로딩를 호출
		cout << "This is Derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	cout << base << endl;		//This is base output

	Derived derived(7);
	cout << derived << endl;	//This is base output
}								//This is Derived output