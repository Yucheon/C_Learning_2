#include <iostream>
#include <array>
#include <tuple>
using namespace std;

std::tuple<int, double> getTuple()	//사용자 정의 자료형 처럼 됨
{
	int a = 10;						//안에 구조체를 사용할 수도 있음
	double d = 3.14;

	return std::make_tuple(a, d);
}
int main()
{
	std::tuple<int, double>my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;;		//a
	cout<< std::get<1>(my_tp) << endl;;		//d

	return 0;
}