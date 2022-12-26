#include <iostream>
#include <string>		//std string 사용

using namespace std;

int main()
{

	string a("Hello, ");
	string b("world ");
	string hw = a + b;//append;

	hw += "I'm good";

	cout << hw.length() << endl;		//글자의 길이를 출력

	return 0;
}