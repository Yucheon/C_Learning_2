#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int* my_arr = new int[5];

	vector<int>arr = { 1,2,3,4,5 };

	arr.resize(10);

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	delete[] my_arr;

	return 0;
}