#include <iostream>

using namespace std;

int main()
{
	int* ptr = new int{ 7 };	//int형 포인터 변수 ptr를 선언하고 OS로 부터 메모리를 받아와 7을 대입함

	cout <<"이 int형 포인터의 주소는" << ptr<<"이고," << endl;
	cout << "안에 들어있는 값은" << *ptr << "이다" << endl;

	int length = 5;
	int* array = new int[5] {11,4,5,8,64};		

	int array[5];
	int* num = array;

	cout << num[3] << endl;
	cout << array[3] << endl;


	return 0;
}