#include <iostream>

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 9;					//접근연산자
	person.weight = 30;

	Person& ref = person;		//레퍼런스로 구조체의 변수를 생성
	ref.age = 18;

	Person* ptr = &person;
	ptr->age = 21;
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;

	std::cout << &person << std::endl;
	std::cout << &ref2 << std::endl;

	return 0;
}