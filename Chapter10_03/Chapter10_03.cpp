//#include <iostream>
//#include <string>
//#include <vector>
#include "Lecture.h"

int main()
{
	Student *std1=new Student("Jack Jack", 0);		//持失切稽 持失1
	Student *std2 = new Student("Dash", 1);		    //持失切稽 持失2
	Student *std3 = new Student("Violet", 2);		    //持失切稽 持失3

	Teacher *teacher1=new Teacher("prof. Hong");		//持失切稽 旬 持失1
	Teacher *teacher2=new Teacher("Prof. Good");		//持失切稽 旬 持失2

	//Compositon Relationship
	Lecture lec1("Introduction to Computer Programing");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);

	{
		std::cout << lec1 << std:: endl;
		std::cout << lec2 << std::endl;

		lec2.study();

		std::cout << lec1 << std::endl;
		std::cout << lec2 << std::endl;
	}

	delete std1;
	delete std1;
	delete std1;

	delete teacher2;
	delete teacher1;
}