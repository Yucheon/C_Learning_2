#include <iostream>

using namespace std;

int main()
{
	int apple = 5;		//이 시점으로 부터 apple을 사용할 수 있다.
	cout << apple << endl;		//5
	{
		cout << apple << endl;	//5
		int apple = 1;
		cout << apple << endl;	//1
	}

	cout << apple << endl;		//5

	return 0;
}