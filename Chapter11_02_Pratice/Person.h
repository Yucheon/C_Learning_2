#pragma once

#include <iostream>
#include <string>

class Person
{
private:
	std::string m_name;

public:
	Person(const std::string &name_i="No Name")
		:m_name(name_i)
	{}

	void setName(const std::string &name_i)
	{
		m_name = name_i;
	}

	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " " << "is doing nothing" << std::endl;
	}
};