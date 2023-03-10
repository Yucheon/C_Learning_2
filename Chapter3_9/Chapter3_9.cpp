#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	//cout << bitset<8>(opt0) << endl;
	//cout << bitset<8>(opt1) << endl;
	//cout << bitset<8>(opt2) << endl;
	//cout << bitset<8>(opt3) << endl;

	//아이템 없음
	unsigned char items_flag = 0;
	cout <<"No item" << bitset<8>(items_flag) << endl;

	//아이템 1 겟
	items_flag |= opt1;
	cout <<"Item0 obtained " << bitset<8>(items_flag) << endl;

	//아이템 3 겟
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	//아이템 3 잃어버림
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	//아이템을 가지고 있는지?
	if (items_flag &= opt0)
		cout << "Item0 has " << bitset<8>(items_flag) << endl;
	else
		cout << "no does't have" << endl;


	return 0;
}