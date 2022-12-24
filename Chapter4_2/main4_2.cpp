#include <iostream>
#include "MyConstants.h"

using namespace std;

/*
*	int g_x; // external linkage		초기화를 안하고 정의만 할 경우
*	static int g_x; // internal linkage 다른 cpp파일에서 접근할 수 없다.
*	const int g_x;  // 값을 초기화를 안해주고 있기 때문에 사용 금지
	
	extern int g_z;
	extern const int g_z; //다른 곳 한군데에서만 초기화를 해주어야함

	int g_y(1);
	static int g_y(1);	//외부에서 사용할 수 없는 internal linkage
	const int g_y(1); //같은 파일 안에서만 접근 

	extern int g_w(1); //다른 곳에서 초기화를 해주면 안된다.
	extern const int g_w(1); //
*/
int main()
{

	return 0;
}