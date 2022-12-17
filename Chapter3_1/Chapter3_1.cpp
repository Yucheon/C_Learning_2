#include <iostream>

using namespace std;

int main()
{
	int x = 4 + 2 * 3;		//사칙연산 중 곱하기와 나누기를 먼저하고
	int y = (4 + 2) * 3;	//곱하기와 나누기 보다 괄호를 먼저 계산한다.

	int z = 3 * 4 / 2;		//우선순위가 같음 Associativity에 따라
							//Lefy-to-right이기 때문에 왼쪽에서 오른쪽으로 계산

	return 0;
}