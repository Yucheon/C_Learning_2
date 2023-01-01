#include <iostream>

using namespace std;

int main()
{
	cout << "while-loop test" << endl;

	int Outer_count = 1;
	while (Outer_count <5)
	{
		int inner_count = 1;
		while (inner_count< Outer_count)
		{
			cout << inner_count++ << " ";
		}
		cout << endl;
		++Outer_count;
	}


	return 0;
}