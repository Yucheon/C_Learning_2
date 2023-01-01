#include <iostream>

using namespace std;

int main()
{
	int selection;

	do
	{
		cout << "1.add" << endl;
		cout << "2.add" << endl;
		cout << "3.add" << endl;
		cout << "4.add" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);
	
	cout << " you choose" << selection << endl;

	return 0;
}