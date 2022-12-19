#include <iostream>
#include <bitset>		//이진수로 바꿔서 출력해주는 라이브러리

using namespace std;

int main()
{
	unsigned int a = 0b1100;	//이진수1100
	unsigned int b = 0b0110;	//이진수0100

	cout << std::bitset<4>(a & b) << endl;	//bitwise AND, 0100
	cout << std::bitset<4>(a | b) << endl;	//bitwise OR,  1110
	cout << std::bitset<4>(a ^ b) << endl;	//bitwise XOR, 1010


	return 0;
}