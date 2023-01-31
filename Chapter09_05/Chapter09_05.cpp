#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit=0)
		: m_digit(digit)
	{}

	//prefix	전위형
	Digit& operator ++()
	{
		++m_digit;
		return *this;		//자기자신의 포인터의 디레퍼런스를 리턴 자기 자신을 리턴
	}

	//postfix
	Digit operator++ (int)		//()안에 더미로 아무거나 넣어준다.
	{
		Digit temp(m_digit);
		++(*this);	// == ++m_digit;
		return temp;		//저장한 temp를 넘기고 ++(*this)로 더해준다.
	}

	friend ostream& operator <<(ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};

int main()
{
	Digit d(5);

	cout << ++d << endl;		//6
	cout << d << endl;			//6
		
	cout << d++ << endl;		//6
	cout << d << endl;			//7

	return 0;
}