#include <iostream>

using namespace std;

class Base
{
public :
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_protected;		//protected가능
		//Base::m_private;		//불가능
	}
};

//class GrandChild : protected Derived
//{
//public:
//	GrandChild()
//	{
//		Derived::
//	}
//};
int main()
{
	Derived derived;
	//derived.m_protected = 222;	//외부에서 사용하기 때문에 protected불가능
}