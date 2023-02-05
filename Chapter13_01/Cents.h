#pragma once

#include <iostream>

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents)
		:m_cents(cents)
	{

	}

	friend bool operator > (const Cents& c1, const Cents& c2)		//부등호 연산자 오버로드
	{
		return (c1.m_cents > c2.m_cents);
	}

	friend std::ostream& operator<<(std::ostream& out, const Cents cents)	//출력연산자 오버로드
	{
		out << cents.m_cents << " cents";
		return out;
	}
};