#include <iostream>
#include <cstdarg>
using namespace std;

double findAverage(int count, ...)	//count: argument의 갯수, ...: 
{
	double sum = 0;

	va_list list;		//문자열로 받음

	va_start(list, count);	//count로 ...의 갯수가 몇개인지 알려줌

	for (int arg = 0 ; arg < count; ++arg)
		sum += va_arg(list, int);	//int로 변환

	va_end(list);		//다 끝났으면 끝났다고 알려줌

	return sum / count;
}

int main()
{
	cout << findAverage(1,1,2,3,"Hello",'c') << endl;//1
	cout << findAverage(3,1,2,3) << endl;//2
	cout << findAverage(5,1,2,3,4,5) << endl;//3
	cout << findAverage(10,1,2,3,4,5) << endl;//3.01614e+06

	return 0;
}