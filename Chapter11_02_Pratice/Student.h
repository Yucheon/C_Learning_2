#pragma once

#include "Person.h"

class Student : public Person
{
private:
	int m_intel;

public :
	Student(const std::string& naem_i = "No Name", const int& intel_i = 0)
		:Person(naem_i), m_intel(intel_i)
	{}

	void study()
	{
		std::cout << getName() << " is studying" << std::endl;

	}
	void setIntel(const int& intel_i)
	{
		m_intel = intel_i;
	}

	int getIntel()
	{
		return m_intel;
	}
	friend std::ostream& operator <<(std::ostream& out, const Student& student)
	{
		out << student.getName() << " " << student.m_intel;
		return out;
	}
};