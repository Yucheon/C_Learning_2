#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;


public:
	Cents(int cents=0)
	{
		m_cents = cents;
	}
	int getCents()const
	{
		return m_cents;
	}
	int& getCents()
	{
		return m_cents;  
	}

	 Cents operator + ( const Cents& c2)		//friend�� �����ϰ� this�����ͷ� ��ü
	{
	return Cents(this->getCents() + c2.getCents());
	}
};

//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.getCents() + c2.getCents());
//}
int main()
{
	Cents cents1(6);  
	Cents cents2(8);

	cout << (cents1 + cents2+Cents(6)).getCents() << endl;	//Cents(6)�� �͸�ü
	return 0;
}