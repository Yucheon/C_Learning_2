#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cent;

public:
	Cents(int input)
		:m_cent(input)
	{
		//m_cent = input;
	}
	int getcents() const
	{
		return m_cent;
	}
};

Cents add(const Cents& a, const Cents& b)
{
	return Cents(a.getcents() + b.getcents());
}

int main()
{
	cout << add(Cents(56) , Cents(4)).getcents() << endl;	//add의 리턴값이 Cents의 오브젝트이므로
															//getcents()를 또 사용할 수 있다.

	return 0;
}