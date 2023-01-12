#include <iostream>

using namespace std;

int main()
{
	int i = 5;
	float f = 3.1;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c;

	cout << &c << " " << ptr << endl;
	cout << *static_cast<float*>(ptr) << endl;

	return 0;
}