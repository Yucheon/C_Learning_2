#include <iostream>
#include <string>

using namespace std;

struct Employee
{
	short id;		//2 bytes
	int	  age;		//4bytes
	double wage;    //8bytes
};


int main()
{
	Employee emp1;

	cout << sizeof(Employee) << endl;		//16byte

	return 0;
}