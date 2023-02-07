#include "Timer.h"
#include "AuotPtr.h"
#include "Resource.h"

using namespace std;

template<class T>
void MySwap(T& a, T& b)
{
	//T tmp = a;		//copyº¹»ç
	//a = b;
	//b = tmp;

	T tmp{ std::move(a) };
	a = std::move(b);
	b = std::move (tmp);
}
int main()
{
	{
		vector<string>v;
		string str = "Hello";

		v.push_back(str);

		cout << str << endl;
		cout << v[0] << endl;

		v.push_back(std::move(str));

		cout << str << endl;
		cout << v[0] << " "  << v[1]<< endl;

	}
	return 0;
}