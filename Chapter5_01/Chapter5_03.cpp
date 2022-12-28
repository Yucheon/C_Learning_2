#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	switch (color)
	{
	case Colors::BLACK:
		cout << "this color is black";
		break;
	case Colors::WHITE:
		cout << "this color is white";
		break;
	case Colors::RED:
		cout << "this color is red";
		break;
	case Colors::GREEN:
		cout << "this color is green";
		break;
	case Colors::BLUE:
		cout << "this color is blue";
		break;
	default:
		cout << "none";
		break;
	}
	cout << endl;
}

int main()
{
	printColorName(Colors::BLACK);

	return 0;
}