#include <iostream>

using namespace std;

class Something
{
	static int s_value;
	int m_value;

public:
	static int S_getValue()		//����ƽ �Լ��� ����ƽ ����
	{
		return s_value;
	}

	int s_temp()
	{
		return this->s_value;	//��� �Լ��� ����ƽ ����
	}

	//static void m_getValue()
	//{
	//	return m_value;			//����ƽ �Լ��� ��� ���� ����
	//}

	int m_temp()
	{
		return this->m_value;	//��� �Լ��� ��� ���� ����
	}
};

int Something::s_value = 5;

int main()
{
	cout << Something::S_getValue() << endl;		//����ƽ���� ����� �Լ��� �ν��Ͻ��� �������� �ʾƵ� ���� ����

	Something s1;
	int(Something:: * fptr)() = &Something::s_temp;

	(s1.*fptr)();
	return 0;
}