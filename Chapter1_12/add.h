//#pragma once		//헤더가드 

#ifndef MY_ADD		//MY_ADD가 이미 정의되어 있다면 아래의 함수를 정의하지 말라 include가 이미 되어 있다면 다시 include하지 마라
#define MY_ADD

int add(int a, int b)
{
	return a + b;
}

#endif