#include <iostream>

using namespace std;

int main()
{
	//// short circuit evaluation
	//int x = 2;
	//int y = 2;

	//if (x == 1 && y++ == 2)
	//{
	//	//do something
	//}
	//cout << y << endl;

	//&&연산자는 ||연산자 보다 우선순위가 더 높다!

	//bool v1 = true;
	//bool v2 = false;
	//bool v3 = false;

	//bool r1 = v1 || v2 && v3;
	//bool r2 = (v1 || v2) && v3;
	//bool r3 = v1 || (v2 && v3);

	//cout << r1 << endl;		//1
	//cout << r2 << endl;		//0
	//cout << r3 << endl;		//1
	//return 0;

	bool Q1 = (true && true) || false;	//1
	bool Q2 = (false && true) || true;	//1
	bool Q3 = (false && true) || false || true;	//1
	bool Q4 = (14 > 13 || 2 > 1) && (9 > 1);	//1
	bool Q5 = !(2314123 > 2 || 123123 > 2387); //0

	cout << Q1 << endl;
	cout << Q2 << endl;
	cout << Q3 << endl;
	cout << Q4 << endl;
	cout << Q5 << endl;

	return 0;
}