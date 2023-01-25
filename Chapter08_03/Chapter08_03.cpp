#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;	//분자
	int m_denominator;	//분모

public:
	Fraction(const int &num_in, const int &den_in=1)	//생성자에 파라미터 넣기, default설정도 가능하다!
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};
int main()
{
	Fraction frac(1,3);

	frac.print();		//멤버변수를 초기화 해주지 않았기 때문에 이상한 값이 출력 된다.

	return 0;
}