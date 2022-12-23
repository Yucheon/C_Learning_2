#include <iostream>

using namespace std;

void doSomething()
{
	static int a = 1;	//스태틱 선언!!!
	++a;

	cout << a << endl;
}

int main()
{
	doSomething();		//2
	doSomething();		//3
	doSomething();		//4
	doSomething();		//5
	doSomething();		//6

	return 0;
}