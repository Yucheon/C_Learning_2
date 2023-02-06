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
	void doSomething()		//�̰��� �Ķ���Ͱ� ���� ��쿡��
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

	a_char.doSomething<int>();	//�̷��� instanciate�� �����ϴ�.


	return 0;
}