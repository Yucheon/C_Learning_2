#include <iostream>

using namespace std;

void doSomething(int& lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int&& ref)
{
	cout << "R-value ref" << endl;
}

int getResult()
{
	return 100 * 100;
}

int main()
{
	int x = 5;		//x는 메모리 공간을 가지며 문장이 끝나면 R-value가 사라지고 x에 복사해 넣는다
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	//R-value references

	//int &&rr1=x;			//Modifiable l-values
	//int &&rr2=cx;			//Non-modifiable l-values
	int&& rr3 = 5;			//R-values

	//const int &&rr4=x;	//Modifiable l-values
	//const int &&rr5=cx;	//Non-modifiable l-values
	const int&& rr6 = 5;	//R--values

	// L/R-value reference parameters
	doSomething(x);			//L-value, L-value레퍼런스를 파라미터로 갖는 함수 호출
	//doSomething(cx);
	doSomething(5);			//R-value, R-value레퍼런스를 파라미터고 갖는 함수
	doSomething(getResult());

	return 0;
} 