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

		Resource(res.m_length);						//�Ķ���ͷ� ���� ��ü�� m_length��ŭ���� Resource(unsigned length)������ ����

		for (unsigned i = 0; i < m_length; ++i)		//�� ī�� ���� ����
			m_data[i] = res.m_data[i];				//�ڽ��� ��ü�� m_data�� �Ķ���ͷ� ���� ��ü�� m_data�� �����ؼ� ����
	}
	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;

		if (m_data != nullptr) delete[] m_data;
	}


	Resource &operator = (Resource& res)		// '='������ �����ε� �Լ� (��ȯ���� Resource, �̰� &�� �� �ٴ��� �𸣰��� '='�� ���ִ� ��ó�� �ϳ��� ����ΰ���?)
	{
		std::cout << "Resource copy assignment" << std::endl;

		if (&res == this) return *this;			//�Ķ���ͷ� ���� ��ü�� &operator�Լ��� �������� ��ü�� ������?

		if (this->m_data != nullptr) delete[] m_data;	//�ٸ��ٸ� ���� �Լ��� �������� ��ü�� m_data�� ������ ����ְ�

		m_length = res.m_length;						//�ڽ��� m_length�� �Ķ���ͷ� ���� ��ü�� m_length�� ä���ְ�
		m_data = new int[m_length];						//�ڽ��� m_data�� �޸𸮸� m_length��ŭ �����Ҵ����� ��

		for (unsigned i = 0; i < m_length; ++i)			
			m_data[i] = res.m_data[i];					//�ڽ��� m_data�� �Ķ���ͷ� ���� ��ü�� m_data�� �����ؼ� �ִ´�.

		return *this;									//�� �Լ��� ����Ǹ� �� �ڽ��� ��ü�� �ּҸ� ��ȯ�Ѵ�.	��ȯ���� ResourceŬ�����ε� ��� �����ͷ� ��������?
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

