#include <iostream>

using namespace std;

int main()
{
	int fixedArray[] = { 1,2,3,4,5 };		//빌드 가능

	int* array = new int[] {1, 2, 3, 4, 5};	//빌드 안됨
	//컴파일 타임에 결정하지 않으려고 함

	delete[]array;
	return 0;
}