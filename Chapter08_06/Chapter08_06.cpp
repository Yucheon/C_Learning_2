#include <iostream>

using namespace std;

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];	//동적할당으로 맞는 사이즈의 메모리를 가져다 줌
		
		cout << "COnstructor" << endl;
	}

	~IntArray()
	{
		if(m_arr!=nullptr)	//조금 더 안전하게 m_arr이 쓰레기 값이 아닐 때 nullptr을 지울 때 문제가 생기는 경우가 종종 있기 때문에
		delete[] m_arr;		//메모리를 깔끔하게 지우고 사라짐
	}

	int size()
	{
		return m_length;
	}
};

int main()
{
	while (true)
	{
		IntArray my_int_arr(10000);		//my_int_arr가 중괄호 영역을 벗어나서 죽을 때가 되면
	}									//알아서 소멸자를 호출하고

	return 0;
}