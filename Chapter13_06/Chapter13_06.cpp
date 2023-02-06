#include <iostream>

using namespace std;

template<class T, int size>
class StaticArray_BASE		//StaticArry를 BASE로 변경
{
private:
	T m_array[size];

public:
	T* getArray() { return m_array; }
	T& operator[](int index)
	{
		return m_array[index];
	}


	void print()	
	{
		for (int count = 0; count < size; ++count)
			std::cout <<(*this)[count] << ' ';
		std::cout << endl;
	}
};

template<class T, int size>		
class StaticArray : public StaticArray_BASE<T, size>	//StaticArray_BASE를 상속받는 StaticArray클래스를 생성
{
};

template<int size>										//class T가 char인 경우에만 상속을 한번 더 받도록 함
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:													//오버라이딩해줌
	void print()							
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count];
		std::cout << endl;
	}
};

int main()
{
	StaticArray<int, 4>int4;		
	int4[0] = 1;							
	int4[1] = 20;
	int4[2] = 30;
	int4[3] = 40;

	//print(int4);							
	int4.print();		

	StaticArray<char, 14> char14;			
	char14[0] = 'H';
	char14[1] = 'e';

	strcpy_s(char14.getArray(), 14, "Hello, World");

	char14.print();		

	return 0;
}