#include <iostream>

using namespace std;

int main()
{
	char myString[255];

	//cin >> myString;		//HelloMyFriend ют╥б╫ц
	cin.getline(myString, 255);

	cout << myString;
	return 0;
}