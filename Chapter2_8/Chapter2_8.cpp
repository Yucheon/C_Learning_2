#include <iostream>

using namespace std;

int main()
{

	//Decinal : 십진수, 0 1 2 3 4 5 6 7 8 9 10
	//Octal : 팔진수, 0 1 2 3 4 5 6  7 10 11 12 13
	//Hexa : 16진수, 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int x = 012; // 앞에 '0'을 붙이면 팔진수를 의미 
	cout << x << endl;	//따라서 십진수 10이 출력됨

	int y = 0xF; // 앞에 '0x를 붙이면 16진수를 의미
	cout << y << endl;	//따라서 15가 출력

	int z = 0b1010'1110'0100;	//이진수 '0b' 14버전 이후로 컴파일러가 이진수 사이의 ' 를 무시
	cout << z << endl; //2788 출력
}