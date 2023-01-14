#include <iostream>
#include <cmath>

using namespace std;

typedef int* pint;

void foo(int *&ptr)		//포인터 변수를 레퍼런스로 받는 방법
{
	cout << ptr<< " "<<&ptr << endl;
}
int main()
{
	int x = 5;
	//int* ptr = &x;
	pint ptr = &x;

	foo(ptr);
	//포인터에 대한 레퍼런스
	
	return 0;
}