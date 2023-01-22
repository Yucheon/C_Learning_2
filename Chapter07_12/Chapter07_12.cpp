#include <iostream>

using namespace std;
//0  1  1  2  3  5  8  13  21 
int Fibo(int fibo)
{
	if (fibo == 1)
		return 1;
	if (fibo == 2)
		return 1;
	return Fibo(fibo - 1) + Fibo(fibo - 2);

}
int main()
{
	cout << Fibo(10)<<endl;;		//무한 음의 정수 진행

	return 0;
}