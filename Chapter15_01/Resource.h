#pragma once

#include <iostream>

class Resource
{
public:
	int m_data[100];	//int Ÿ�� �迭 100��

public:
	Resource()
	{
		std::cout << "Resource Constructed" << std::endl;
	}
	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;
	}
};