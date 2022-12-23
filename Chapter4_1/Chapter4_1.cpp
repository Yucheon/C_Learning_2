#include <iostream>

using namespace std;

namespace work1::work11::work111
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}

}

int main()
{
	work1::work11::work111::doSomething();

	return 0;
}