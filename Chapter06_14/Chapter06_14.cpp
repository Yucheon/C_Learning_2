#include <iostream>

using namespace std;

struct Something			//두번째 구조체
{
	int v1;
	float v2;
};

struct Other		//첫 번째 구조체
{
	Something st;
};

int main()
{
	int value = 5;
	int* const ptr = &value;
	int& ref = value;

	cout <<"ptr안에 담긴 value의 주소 : " << (uintptr_t)ptr << endl;
	cout << "포인터 변수인 ptr의 주소 : " << (uintptr_t)&ptr << endl;
	cout << "참조변수인 ref의 주소 : " << (uintptr_t)&ref << endl;
	cout << "int형 변수 value의 주소 : " << (uintptr_t)&value << endl;


	*ptr = 10;
	ref = 10;		//이 두개는 기능상 같음

	return 0;
}