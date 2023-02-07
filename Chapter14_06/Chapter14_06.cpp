#include <iostream>
#include <memory>

using namespace std;
class A
{
public:
	~A()
	{
		throw "error";		//소멸자 안에서 throw를 구성
	}						//이는 금기시 되는 코딩
};
int main()
{
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}