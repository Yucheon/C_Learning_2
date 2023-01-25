#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year=year_input;
	}

	void setMonth(const int& month_input)	//set만들기
	{
		m_month = month_input;
	}

	int getday()		//get을 만들어 준다.
	{
		return m_day;
	}

	void copyFrom(const Date& original)		//다른 메모리를 사용할 지라도 같은 클래스로 부터 나온 instance라면 멤버에 접근이 가능하다
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};
int main()
{
	Date today;
	//today.m_month = 8;
	//today.m_day = 4;
	//today.m_year = 2025;
	today.setDate(8, 4, 2025);

	Date copy;

	copy.copyFrom(today);
	
	return 0;
}