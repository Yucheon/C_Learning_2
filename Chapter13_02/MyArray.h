#pragma once
#include <assert.h>
#include <iostream>


template<typename T>
class MyArray
{
private:
	int m_length;		//길이여서 int
	T* m_data;		//int타입의 데이터를 담기위해 포인터로

public:

	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	 MyArray(int length)
	 {
	     m_data = new T[length];
		 m_length = length;
	  }

	  ~MyArray()
	  {
		  reset();
	  }

	  void reset()
	  {
		  delete[] m_data;
		  m_data = nullptr;
		  m_length = 0;
	  }

	  T& operator[](int index)
	  {
		  assert(index >= 0 && index < m_length);
		  return m_data[index];
	  }

	  int getLength()
	  {
		  return m_length;
	  }
	  void print();
};

//void MyArray::print()
//{
//	for (int i = 0; i < m_length; ++i)
//		std::cout << m_data[i] << " ";
//	std::cout << std::endl;
//}

