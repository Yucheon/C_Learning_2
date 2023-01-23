#include<iostream>
#include <cassert>	//assert.h
#include<array>


int main()
{
	const int x = 5;

	static_assert(x==5,"X should be 5");	//컴파일 타임에 결정되는 경우에만 사용 가능
											//쉼표 뒤에 문구남기기 가능
	return 0;
}