#include <iostream>

using namespace std;

struct Mystruct
{
	int array[5] = { 9,7,5,3,1 };
};

void doSomething(Mystruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}
int main()
{
	Mystruct ms;
	cout << ms.array[0] << endl;;		//9
	cout << sizeof(ms.array) << endl;	//20
		
	doSomething(&ms);					//20

	return 0;
}