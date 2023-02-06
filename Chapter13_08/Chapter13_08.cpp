#include <iostream>
using namespace std;

template<class T>
class A	
{
private:
	T m_value;

public:
	A(const T& input)
		:m_value(input)
	{}
	template<typename TT>
	void doSomething()		//이곳에 파라미터가 없는 경우에도
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)m_value << endl;
	}
	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	A<char> a_char('A');
	a_char.print();

	a_char.doSomething<int>();	//이렇게 instanciate이 가능하다.


	return 0;
}