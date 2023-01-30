#include "Student.h"
#include "Teacher.h"

int main()
{
	Student std("Jack");
	std.setName("Jack2");
	std::cout << std.getName() << std::endl;

	Teacher teacher1("dr.H");
	teacher1.setName("Dr.k");

	std::cout << teacher1.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.doNothing();
	teacher1.doNothing();


	std.study();
	teacher1.teach();

	Person person;
	person.setName("Mr.Incredible");
	person.getName();

	return 0;
}