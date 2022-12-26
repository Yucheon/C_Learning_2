#include <iostream>
#include <typeinfo>

enum Color		//user-defined data types(사용자 정의 데이터 자료형)
{
	COLOR_BLACK=-2,
	COLOR_RED,
	COLOR_BLUE=5,
	COLOR_GREEN=5,
	COLOR_SKYBLUE,
	BLUE,				
};

int main()
{
	using namespace std;

	int color_id = COLOR_RED;		//int정수에 enum할당

	cout << color_id << endl;		//-0

	//Color My_Color = color_id;		//enum형에 int초기화는 불가능

	Color My_Color2 = static_cast<Color>(-2);

	cout << My_Color2 << endl;

	return 0;
}