#include <iostream>

int main()
{
	using namespace std;

	for (int j =1;j<10;++j)
	{
		for (int i = 1; i < 10; ++i)
		{
			cout << j << "X" << i << "=" << j * i << endl;
		}
	}

	return 0;
}