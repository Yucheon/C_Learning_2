#pragma once

#include <iostream>

class Resource
{
public:
	int* m_data = nullptr;
	unsigned m_length = 0;

public:
	Resource()
	{
		std::cout << "Resource default constructed" << std::endl;
	}
	Resource(unsigned length)
	{
		std::cout << "Resource length Constructed" << std::endl;

		this->m_data = new int[length];
		this->m_length = length;
	}
	Resource(const Resource &res)
	{
		std::cout << "Resource Copy Constructed" << std::endl;

		Resource(res.m_length);						//파라미터로 넣은 객체의 m_length만큼으로 Resource(unsigned length)생성자 실행

		for (unsigned i = 0; i < m_length; ++i)		//딥 카피 깊은 복사
			m_data[i] = res.m_data[i];				//자신의 객체의 m_data에 파라미터로 들어온 객체의 m_data를 복사해서 넣음
	}
	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;

		if (m_data != nullptr) delete[] m_data;
	}


	Resource &operator = (Resource& res)		// '='연산자 오버로딩 함수 (반환값이 Resource, 이고 &는 왜 붙는지 모르겠음 '='를 써주는 것처럼 하나의 약속인가요?)
	{
		std::cout << "Resource copy assignment" << std::endl;

		if (&res == this) return *this;			//파라미터로 들어온 객체와 &operator함수를 실행중인 객체가 같은가?

		if (this->m_data != nullptr) delete[] m_data;	//다르다면 현재 함수를 실행중인 객체의 m_data가 있으면 비워주고

		m_length = res.m_length;						//자신의 m_length에 파라미터로 들어온 객체의 m_length로 채워주고
		m_data = new int[m_length];						//자신의 m_data의 메모리를 m_length만큼 동적할당해준 뒤

		for (unsigned i = 0; i < m_length; ++i)			
			m_data[i] = res.m_data[i];					//자신의 m_data에 파라미터로 들어온 객체의 m_data를 복사해서 넣는다.

		return *this;									//이 함수가 종료되면 나 자신의 객체의 주소를 반환한다.	반환값이 Resource클래스인데 어떻게 포인터로 가능하죠?
	}

	void print()
	{
		for (unsigned i = 0; i < m_length; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}

	void setAll(const int& v)
	{
		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = v;
	}
};

