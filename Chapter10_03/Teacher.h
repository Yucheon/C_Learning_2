#pragma once

#include <string>

class Teacher
{
private:
	std::string m_name;		//프라이빗으로 멤버변수 string선언,선생님 이름


public:
	Teacher(const std::string&name_in="No Name")
		:m_name(name_in)
	{}

	void setName(const std::string& name_in)	//선생님 이름 설정
	{
	m_name = name_in;
	}

	std::string getName()		//선생님 이름 가져오기
	{
		return m_name;
	}

	friend std::ostream& operator <<(std::ostream &out, const Teacher & teacher)
	{		//연산자 오버로딩
		out << teacher.m_name;
		return out;
	}

};