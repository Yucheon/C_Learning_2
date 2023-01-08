#include <iostream>

using namespace std;

int main()
{
	//char name[] = "Jack Jack";
	const char* naem = "Jack Jack";
	const char* naem2 = "Jack Jack";

	cout << (uintptr_t)naem << endl;
	cout << (uintptr_t)naem2 << endl;

	return 0;
}