#include <iostream>
#include <tuple>	//�������� �������� ����,��
using namespace std;

//tuple<int, int> my_func()
auto my_func()
{

	return tuple(123, 456, 789, 1000);	//<int, int, int> 17������ �̰� ��� ��
}

int main()
{
	auto [a, b, c, d] = my_func(); //abcd�� �����ϸ鼭 ����

	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}