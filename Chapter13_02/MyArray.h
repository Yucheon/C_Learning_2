#pragma once
#include <assert.h>
#include <iostream>

class MyArray
{
private:
	int m_length;	//배열의 길이
	int* m_data;	//배열포인터

public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length)
	{
		m_data = new int[length];
		m_length = length;
	}

	~MyArray()
	{
		reset();
	}
};
