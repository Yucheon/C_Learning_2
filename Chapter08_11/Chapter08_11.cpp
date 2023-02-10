#include <iostream>

using namespace std;

class Something
{
	static int s_value;
	int m_value;

public:
	static int S_getValue()		//스태틱 함수에 스태틱 리턴
	{
		return s_value;
	}

	int s_temp()
	{
		return this->s_value;	//멤버 함수에 스태틱 리턴
	}

	//static void m_getValue()
	//{
	//	return m_value;			//스태틱 함수에 멤버 변수 리턴
	//}

	int m_temp()
	{
		return this->m_value;	//멤버 함수에 멤버 변수 리턴
	}
};

int Something::s_value = 5;

int main()
{
	cout << Something::S_getValue() << endl;		//스태틱으로 선언된 함수는 인스턴스를 생성하지 않아도 접근 가능

	Something s1;
	int(Something:: * fptr)() = &Something::s_temp;

	(s1.*fptr)();
	return 0;
}