#include <iostream>
#include <cmath>

using namespace std;

typedef int* pint;

void foo(int *ptr)
{
	cout <<*ptr<<" " <<ptr << " " << &ptr << endl;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	cout << " 포인터 변수 ptr의 주소" << &ptr << endl;

	foo(ptr);

	foo(&value);
	//foo(5) 리터럴 값은 넣을 수 없음
	return 0;
}