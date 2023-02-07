#pragma once

#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr = nullptr;

public:
	AutoPtr(T* ptr = nullptr)
		:
		m_ptr(ptr)
	{
	}
	~AutoPtr()
	{
		if (m_ptr != nullptr) delete m_ptr;	//�Ҹ��ڿ��� �������Ͱ� �ƴϸ� �������� �� ���� ���� �ִٸ� ��������
	}

	AutoPtr(AutoPtr& a)		//���� ������
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;		//a.m_ptr�ʴ� ���̻� �������� ��!
	}

	AutoPtr& operator =(AutoPtr& a)		//���� assignment
	{
		if (&a == this)					//���� ���� �ڱ� �ڽ��̸�
			return *this;				//�ƹ��͵� ���� ����

		delete m_ptr;					//���� ������ ������ �ִٸ� �����
		m_ptr = a.m_ptr;				//���� ���� ���ο� �����͸� ����
		a.m_ptr = nullptr;				//���� �������� ��Ż��
		return *this;
	}
	T& operator*() const { return *m_ptr; }	//���۷����ϴ� ���۷����� �����ε�
	T* operator->() const { return m_ptr; }	//��� �������ϴ� ���۷����� �����ε�
	bool isNull() const { return m_ptr == nullptr; }
};