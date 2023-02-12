#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;



public:
	void setCents(int a)
	{
		m_cents = a;
	}
	Cents(int a)
	{
		m_cents = a;
	}

	int getCents() const
	{
		return m_cents;
	}

	friend Cents operator + (const Cents& c1, const Cents& c2)
	{
		return Cents(c1.getCents() + c2.getCents());
	}
};

int main()
{
	Cents cent1(30);
	Cents cent2(60);

	//cout << add(cent1, cent2).getCents() << endl;
	cout << (cent1 + cent2+Cents(10)).getCents() << endl;

	return 0;
}