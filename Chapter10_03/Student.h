#pragma once

#include <iostream>
#include<string>

class Student
{
private:
	std::string m_name;		//프라이빗 멤버변스 학생의 이름 선언
	int m_intel;			//학생의 지능정도

public:
	Student(const std::string & name_in = "No Name" , const int & intel_i=0)
		:m_name(name_in), m_intel(intel_i)
	{}

	void setName(const std::string &name_in)
	{
		m_name = name_in;
	}

	void setIntel(const int& intel_i)
	{
		m_intel = intel_i;
	}
	std::string getName()
	{
		return m_name;
	}

	int getIntel()
	{
		return m_intel;
	}

	friend std::ostream& operator<<(std::ostream& out, Student student)
	{
		out << student.m_name << " " << student.m_intel;
		return out;
	}

};