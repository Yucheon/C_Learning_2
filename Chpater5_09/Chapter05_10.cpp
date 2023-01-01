#include <iostream>

using namespace std;

int integer()
{
	cout << "Please enter number" << endl;
	int a;
	cin >> a;
	
	return a;
}

char Operator()
{
	cout << "Please enter Operator" << endl;
	char ch;
	cin >> ch;

	return ch;
}

void Prinresult()
{

}

int main()
{
	int x,y;
	x = integer();
	char c=Operator();
	y = integer();

	return 0;
}