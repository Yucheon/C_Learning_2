#include <iostream>

using namespace std;

#define NUM_STUDENTS 10000

void doSometing(int students_scores[20])
{
	cout << (int)&students_scores << endl;		//1251736032
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "size in do something" << sizeof(students_scores) << endl;
}
int main()
{
	const int num_students = 20;

	int students_scores[num_students]{7,8,1,5};

	cout << (int)&students_scores << endl;		//1251735952
	cout << (int)students_scores << endl;
	cout << "size in main" << sizeof(students_scores) << endl;
	doSometing(students_scores);		//배열을 함수의 파라미터로 사용

	return 0;
}