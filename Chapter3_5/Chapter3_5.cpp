#include <iostream>

using namespace std;

int main()
{

	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << d1 << endl;			//0.001
	cout << d2 << endl;			//0.001

	if (d1 == d2)
		cout << "equal" << endl;

	else
	{
		cout << "not equal" << endl;

		if (d1 > d2)	cout << "d1>d2" << endl;
		else
			cout << "d1<d2"<<endl;
	}

	return 0;
}