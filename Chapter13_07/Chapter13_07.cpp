#include <iostream>
using namespace std;

template<class T>
class A
{
private:	
	T m_value;	

public:
	A(const T& input)
		:m_value(input)
	{}
	void print()	
	{
		cout << m_value << endl;
	}
};

template<class T>
class A<T*>		//T가 포인터인 경우에만 사용하도록 특수화
{
private:
	T* m_value;	//T*로 변경

public:
	A(T* input)//T*로 변경
		:m_value(input)
	{}
	void print()
	{
		cout << *m_value << endl;//디레퍼런싱
	}
};

int main()
{
	A<int> a_int(123);		
	a_int.print();		

	int temp = 456;			

	A<int*> a_int_ptr(&temp);
	a_int_ptr.print();	

	double temp_d = 3.141592;
	A<double*> a_double_prt(&temp_d);
	a_double_prt.print();

	return 0;
}