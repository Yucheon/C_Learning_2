#include <iostream>
#include <cstdarg>
using namespace std;

double findAverage(int count, ...)	//count: argument�� ����, ...: 
{
	double sum = 0;

	va_list list;		//���ڿ��� ����

	va_start(list, count);	//count�� ...�� ������ ����� �˷���

	for (int arg = 0 ; arg < count; ++arg)
		sum += va_arg(list, int);	//int�� ��ȯ

	va_end(list);		//�� �������� �����ٰ� �˷���

	return sum / count;
}

int main()
{
	cout << findAverage(3,101,2,3,"Hello",'c') << endl;//1
	cout << findAverage(3,1,2,3) << endl;//2
	cout << findAverage(5,1,2,3,4,5) << endl;//3
	cout << findAverage(10,1,2,3,4,5) << endl;//3.01614e+06

	return 0;
}