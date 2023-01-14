#include<iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
}	//x와 y에 할당된 메모리는 이 지역을 벗어나면 반납됨, 즉 사라진다.

int main()
{
	int x = 1, y = 2;

	foo(6, 7);		//6,7 : arguments(actual parameters)

	foo(x, y + 1);

	return 0;
}