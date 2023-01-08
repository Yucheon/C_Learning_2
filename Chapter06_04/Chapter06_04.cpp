#include <iostream>

using namespace std;

void printArray(const int array[],const int lenght)
{
	for (int index = 0; index < lenght; ++index)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	/*			value		index
	3 5 2 1 4		1			3
	1 5 2 3 4       2           2
	1 2 5 3 4       3           3
	1 2 3 5 4       4           4
	1 2 3 4 5      선택정렬 종류
	*/

	const int length = 5;

	int array[length] = { 3,5,2,1,4 };


	for (int i = 0; i < length-1; ++i)
	{
		for (int j = 1; j < length-i; ++j)
		{
			if (array[i] > array[i + j])
			{
				int x = array[i + j];
				array[i + j] = array[i];
				array[i] = x;
			}
		}
	}

	printArray(array, length);

	return 0;
}