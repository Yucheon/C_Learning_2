#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Student std("Jack");
	std.setName("kim");
	std::cout << std.getName()<<std::endl;

	return 0;
}