#include <iostream>
#include <typeinfo>
using namespace std;

struct Something
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	double d = 123.0;

	int *ptr_x;
	double *ptr_d;

	cout << sizeof(x) << endl;							//4
	cout << sizeof(d) << endl;							//8
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;	//4 4
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;	//4 4

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;		//15
	cout << sizeof(ptr_s) << endl;			//4

	return 0;
}