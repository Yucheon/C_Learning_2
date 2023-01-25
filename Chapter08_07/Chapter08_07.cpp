#include <iostream>

using namespace std;

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this;
	}
	Calc& mult(int value) { m_value *= value; return *this;
	}

	Calc& print()
	{
		cout << m_value << endl;
		return *this;
	}
};

int main()
{
	Calc cal(10);
	cal.add(2).mult(10).sub(5).print();

	return 0;
}