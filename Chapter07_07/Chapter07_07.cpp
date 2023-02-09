#include <iostream>

void print(unsigned int x) {};
void print(float x) {};

int main()
{
	print((unsigned)'a');
	print(0u);	
	print(3.14f);

	return 0;
}