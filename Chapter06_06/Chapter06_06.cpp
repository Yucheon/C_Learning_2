#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";	//11자리
	char dest[5];					//11자리 보다 메모리를 더 적게 넣게 되면
	strcpy(dest, source);			//런타임 에러 발생!!

	cout << source << endl;
	cout << dest << endl;

	return 0;
}