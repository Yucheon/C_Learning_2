#include <iostream>

using namespace std;

int main()
{
	int count(0);
	bool escape_flag = false;
	while (!escape_flag)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;
		if (ch == 'x')
			escape_flag=true;

	}
	return 0;
}