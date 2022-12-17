#include <iostream>

using namespace std;

int main()
{
	int a;
	bool result;

	cout << "a를 입력하세요" << endl;
	cin >> a;


	result=(a % 2 == 0);

	if (result)
	{
		cout << "입력받은 수는 짝수" << endl;
	}
	else
	{
		cout << "입력받은 수는 홀수" << endl;
	}
	return 0;
}