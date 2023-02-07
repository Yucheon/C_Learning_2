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
		if (m_ptr != nullptr) delete m_ptr;	//소멸자에서 널포인터가 아니면 지워버림 즉 뭔가 남아 있다면 지워버림
	}

	AutoPtr(AutoPtr& a)		//복사 생성자
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;		//a.m_ptr너는 더이상 관여하지 마!
	}

	AutoPtr& operator =(AutoPtr& a)		//복사 assignment
	{
		if (&a == this)					//들어온 것이 자기 자신이면
			return *this;				//아무것도 하지 않음

		delete m_ptr;					//내가 뭔가를 가지고 있다면 지우고
		m_ptr = a.m_ptr;				//지운 곳에 새로운 포인터를 넣음
		a.m_ptr = nullptr;				//원래 소유권을 박탈함
		return *this;
	}
	T& operator*() const { return *m_ptr; }	//디레퍼런싱하는 오퍼레이터 오버로딩
	T* operator->() const { return m_ptr; }	//멤버 슬렉션하는 오퍼레이터 오버로딩
	bool isNull() const { return m_ptr == nullptr; }
};