#include <iostream>
#include <string>

using namespace std;

int main()
{
	//violated assumption, 사용자가 개발자의 의도와는 다른 방식으로 사용

	string hello = "Hello, my name is jack jack";

	while (true)
	{
	int ix;
	cin >> ix;
	if (ix >= 0 && ix <= hello.size() - 1)
	{
		cout << hello[ix] << endl;
		break;
	}
	else
		cout << " Please try again" << endl;
	}
	return 0;
}