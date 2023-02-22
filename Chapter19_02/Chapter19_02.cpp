#include <iostream>
#include <tuple>	//여러개의 데이터의 집합,쌍
using namespace std;

//tuple<int, int> my_func()
auto my_func()
{

	return tuple(123, 456, 789, 1000);	//<int, int, int> 17에서는 이게 없어도 됨
}

int main()
{
	auto [a, b, c, d] = my_func(); //abcd를 선언하면서 받음

	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}