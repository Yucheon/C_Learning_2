#include <iostream>
#include<vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	vector<int> container;
	for (int i = 0; i < 10; ++i)
		container.push_back(i);

	vector<int>::const_iterator itr;	//반복자 자체를 변수로 생성
	itr = container.begin();
	while (itr != container.end())
	{
		cout << *itr << " ";	//*itr오버로딩

		++itr;					//++itr오버로딩
	}
	cout << endl;

	return 0;
}
