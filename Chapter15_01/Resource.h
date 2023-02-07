#pragma once

#include <iostream>

class Resource
{
public:
	int m_data[100];	//int 타입 배열 100개

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