#include <iostream>

using namespace std;

void doSomething(const int &x)		//포인터로 넣으면 변수 복사가 일어나지만 참조는 아님!!!!
{
	cout << x << endl;
}

int main()
{
	const int& ref_x = 1+ 5;		 //const 레퍼런스에서는 가능함
	cout << ref_x << endl;			//값 출력도 가능하고
	cout << &ref_x << endl;		//주소도 찍을 수 있음

	int a = 1;	
	doSomething(a);		
	doSomething(5);					//바로 숫자 넣기 가능
	doSomething(a+5);				//가능
	doSomething(6/7);				//가능

	return 0;
}