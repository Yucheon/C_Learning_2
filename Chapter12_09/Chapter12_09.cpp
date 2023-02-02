#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived :public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main()
{
	Derived d;		
	Base b;	

	std::vector<std::reference_wrapper<Base>> my_vec;	//my_vec는 Base의 레퍼런스를(reference_wrapper)저장하는 vector가 됨
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec)
		ele.get().print();		//get()함수는 Base의 레퍼런스를 리턴해주는 함수
							
	return 0;	
}