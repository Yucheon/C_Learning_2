#include <iostream>

using namespace std;

class Something
{
public:
	class _init				//클래스 안에 클래스를 만듦
	{
	public:
		_init()
		{
			s_value = 9876;	//Something클래스의 이너클래스인_init의생성자에서 S_value를 초기화
		}
	};

private:
	static int s_value;
	int m_value;
	  
	static _init s_inintializer;	//이너 클래스를 스태틱으로 인스턴스 생성

public:
	Something()
		:m_value(123)
	{
		
	}
	static int getValue()
	{
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value = 1024;
Something::_init Something::s_inintializer;		//이너클래스의 인스턴스를 정의

int main()
{
	cout << Something::getValue() << endl;	//1024

	Something s1;
	Something s2;

	cout << s1.getValue() << endl;			//1024
	//cout << s1.s_value << endl;

	int (Something:: * fptr1)() = &Something::temp;		//함수의 포인터를 선언하고 
														//해당 포인터에 temp함수의 주소를 넣음

	cout << (s2.*fptr1)() << endl;		//인스턴스 s2의 '디'함수포인터를 출력

	int (* fptr2)() = &Something::getValue;

	return 0;
}