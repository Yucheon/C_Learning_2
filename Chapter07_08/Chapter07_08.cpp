#include <iostream>

using namespace std;

void print(int x=0,int y=20, int z=30)	//기본값 설정
{
	cout << x<<" "<<y<<" "<<z << endl;
}
int main()
{
	print();
	print(100);			//100 20 30
	print(100,200);		//100 200 30
	print(100,200,300);	//100 200 300

	return 0;
}