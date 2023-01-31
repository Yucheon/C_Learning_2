#include <iostream>
#include <cassert>		//assert를 사용하는게 좋음
using namespace std;

class IntList
{
private:
	int m_list[10] = { 1,2,3,5,4,5 };

public:
	int& operator [](const int index)		
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}

	const int& operator [](const int index)const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}
};

int main()
{
	const IntList my_list;
	//my_list[3] = 10;		
	cout << my_list[3] << endl;	//값을 가져오기만 하기때문에 가능
	//my_list.setItem(3, 1);
	//cout << my_list.getItem(3) << endl;
	//my_list.getList()[3] = 1;
	//cout << my_list.getList()[3] << endl;		불편함

	return 0;
}