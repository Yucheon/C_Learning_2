#pragma once
#include <assert.h>
#include <iostream>


template<typename T, unsigned int T_SIZE>	//T_SIZE가 컴파일 타임에 결정이 됨
class MyArray
{
private:
	//int m_length;		//m_length를 대체하는 값으로 템플릿의 파라미터로 T_SIZE를 사용함
	T* m_data;	

public:

	MyArray()
	{
		m_data = new T[T_SIZE]; //T_SIZE가 컴파일 타임에 결정되어 있으므로 동적할당할 수 있음
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}
	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};