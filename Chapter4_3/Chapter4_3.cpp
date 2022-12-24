#include <iostream>

using namespace std;

namespace a
{
	int value(10);
}

namespace b
{
	int value(20);
}

int main()
{
	{
		using namespace a;
		cout << value << endl;
	}
	{
		using namespace b;
		cout << value << endl;
	}
}