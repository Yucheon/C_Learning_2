#include <iostream>
#include <array>

using namespace std;

void printNumbers(const array<int, 10>&my_array,bool print_even)
{


	for (auto element : my_array)
	{
		if (print_even&&element % 2 == 0)cout << element;
		if (!print_even &&element % 2 == 1)cout << element;
	}
	cout << endl;
}

int main()
{
	std::array<int, 10>my_array = { 0,1,2,3,4,5,6,7,8,9 };
	printNumbers(my_array,true);		//02468
	printNumbers(my_array, false);		//13579
	return 0;
}