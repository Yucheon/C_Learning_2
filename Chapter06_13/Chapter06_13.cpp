#include <iostream>

using namespace std;

int main()
{
	int value1 = 5;
	const int* ptr = &value1;

	int value2 = 6;
	ptr = &value2;
	cout << *ptr << endl;
	return 0;
}