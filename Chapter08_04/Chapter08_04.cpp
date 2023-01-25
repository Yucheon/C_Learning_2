#include <iostream>

using namespace std;

class B
{
	int B_m;
public:
	B(const int& B_m)
		: B_m{ 1 }
	{

	}

};

class Something
{
private:
	int m_i=100;
	double m_d=100.0;
	char m_c='F';
	int m_arr[5] = {100,200,300,400,500};
	B B_m_S = {1024};

public:
	Something()
		:m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }, m_arr{ 1,2,3,4,5 }, B_m_S{m_i-1}	//Initailizer List
	{
		m_i *= 3;
		m_d *= 3.0;
		m_c += 3;
	}
	void print()
	{
		cout << m_i<<" " << m_d<<" " << m_c << endl;
		for (auto &e : m_arr)
		{
			cout << e << " " ;
		}
		cout << endl;
	}
};


int main()
{
	Something som;

	som.print();

	return 0;
}