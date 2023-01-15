#include <iostream>

using namespace std;

typedef int my_int;

void print(char *value) {};
void print(int value) {};

int main()
{
	print(0);
	print('a');	//int로 인식 char이 아니라
	return 0;
}