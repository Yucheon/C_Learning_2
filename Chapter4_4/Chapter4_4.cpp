#include <iostream>

auto add(int x, int y)
{
	return x + (double)y;
}
int main()
{
	using namespace std;

	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto what = add(3,5);

	return 0;
}