#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;		

	Teacher *teacher;	
	std::vector<Student*> student;		//주소로 넘겨줌

public:
	Lecture(const std::string name_in)
		:m_name(name_in)
	{}

	void assignTeacher(Teacher * const teacher_input)	//주소를 넘겨주고 있기 때문에 Teacher의 const를 제거하고, & -> * (포인터로 변경)
	{
		teacher = teacher_input;
	}
	void registerStudent(Student* const student_input)
	{
		student.push_back(student_input);
	}

	void study()
	{
		std::cout << m_name << "      Study" << std::endl;

		for (auto &element : student)
		{
			element->setIntel(element->getIntel() + 1);
		}
	}

	friend std::ostream& operator <<(std::ostream& out, const Lecture &lecture)
	{
		out << lecture.teacher << std::endl;

		for (auto element : lecture.student)
		{
			out << *element << std::endl;
		}
		return out;
	}
};