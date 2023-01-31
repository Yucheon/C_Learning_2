#include "Student.h"
#include "Teacher.h"

int main()
{
	Student std("JAck");	
	std.setName("Kim");
	std.getName();			//Student의 헤더파일에 가면 해당 함수가 없지만 부모클래스에 구현되어 있다.
	std.getIntel();

	Teacher teacher1("Dr.H");
	teacher1.setName("Dr.R");

	std::cout << teacher1.getName() << std::endl;

	std.study();
	teacher1.teach();

	return 0;
}