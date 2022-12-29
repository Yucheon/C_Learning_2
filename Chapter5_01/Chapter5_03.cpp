#include <iostream>

using namespace std;

int main()
{

	int x;
	cin >> x;

	switch (x)

	{
		int a;


	case 0:
	{
		int y = 5;
		y = y + x;
		cout << y << endl;
		break;
	}

	case 1:
	{
		int y = 5;
		y = y - x;
		cout << y << endl;
		break;
	}
	default:
		cout << "Undefined" << endl;

		return 0;
	}
}