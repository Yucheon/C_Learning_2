#include <iostream>

typedef int* pp;

void foo(const int* const point) 
{
	//std::cout << "파라미터의 point" << point << "파라미터의 *point" << *point << std::endl;
	std::cout << "자체주솟값은" << "\t\t\t\t\t\t" << point << std::endl;

	std::cout << "foo함수에서 파라미터로 받은 주솟값을 저장하는 포인터 변수의 주소는 " << &point << std::endl;



}

int main()
{
	int a = 2; 
	int b = 5;

	int* point = &a;

	foo(point);

	std::cout << a << std::endl;

	return 0;
}