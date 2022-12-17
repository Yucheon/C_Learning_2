#include <iostream>
#include "My_Constant.h"

using namespace std;

int main()
{
	double radius;
	cin >> radius;
	double circumgerence = 2.0 * radius * constants::pi;
	return 0;
}
