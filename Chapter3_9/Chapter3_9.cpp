#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	const unsigned char opt0 = 1 << 0;	//아이템1의 상태를 나타내는 변수
	const unsigned char opt1 = 1 << 1;	//아이템2의 상태를 나타내는 변수
	const unsigned char opt2 = 1 << 2;	//아이템3의 상태를 나타내는 변수
	const unsigned char opt3 = 1 << 3;	//아이템4의 상태를 나타내는 변수

	cout << bitset<8>(opt0) << endl;	//00000001
	cout << bitset<8>(opt1) << endl;	//00000010
	cout << bitset<8>(opt2) << endl;	//00000100
	cout << bitset<8>(opt3) << endl;	//00001000

	unsigned char items_flag = 0;		//아이템이 없는 상태
	cout << "NO item" << bitset<8>(items_flag) << endl;	//

	//item0 on
	items_flag |= opt0;										//아이템1을 얻었다고 나타내기 위한 표현식
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl;	//00000001

	//item3 on
	items_flag |= opt3;										//아이템3을 얻었다고 나타내기 위한 표현식
	cout << "Item3 obtained" << bitset<8>(items_flag) << endl;	//00001001

	//item3 lost
	items_flag &= ~opt3;									//아이템3을 잃어버림
	cout << "Iten3 lost" << bitset<8>(items_flag) << endl;

	//has item1 ?
	if (items_flag & opt1)									//아이템1을 가지고 있는가?
	{
		cout << " item1 has" << endl;
	}
	else
	{
		cout << "no item1 is none" << endl;
	}

	//obtain item 2,3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained" << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))		//아이템3을 가지고 있으면서
															//아이템2를 가지고 있지 않다면
	{
		items_flag ^= opt2;
		items_flag ^= opt1;
	}

	cout << bitset<8>(items_flag) << endl;					//00001011

	return 0;
}