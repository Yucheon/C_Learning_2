#include <iostream>

using namespace std;

int main()
{

	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(char);

	char* ptr = name;

	while (true)
	{
		for (int i=0; i < 10; ++i)
		{
			cout << *(ptr+i);
		}
		break;
	}

	return 0;
}