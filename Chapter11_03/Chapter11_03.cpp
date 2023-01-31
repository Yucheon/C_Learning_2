#include <iostream>

using namespace std;

class Mother
{
public :
	int m_i;

	Mother()
		:m_i(1)
	{
		cout << "Mother construction" << endl;
	}
};

class Child :public Mother
{
public:
	double m_d;

public :

	Child()
		:m_d(1.0)
	{
		cout << "Child construction" << endl;
	}
};

int main()
{
	Child c1;		//Mother construction
					//Child construction
	return 0;
}