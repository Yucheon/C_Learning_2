#include <iostream>

typedef int* pp;

void foo(const int* const point) 
{
	//std::cout << "�Ķ������ point" << point << "�Ķ������ *point" << *point << std::endl;
	std::cout << "��ü�ּڰ���" << "\t\t\t\t\t\t" << point << std::endl;

	std::cout << "foo�Լ����� �Ķ���ͷ� ���� �ּڰ��� �����ϴ� ������ ������ �ּҴ� " << &point << std::endl;



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