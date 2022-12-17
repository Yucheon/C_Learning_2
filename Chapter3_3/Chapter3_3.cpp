#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 1;
	int v = add(x, ++x); //do not use -> 4

	cout << v << endl;		//4

	return 0;
}