#include <iostream>
#include<bitset>

using namespace std;

int main()
{
	const unsigned int red_mask = 0XFF0000;		//플래그는 레드 그린 하나씩
	const unsigned int green_mask = 0X00FF00;
	const unsigned int blue_mask = 0X0000FF;

	cout << std::bitset<32>(red_mask) << endl;		//00000000111111110000000000000000
	cout << std::bitset<32>(green_mask) << endl;	//00000000000000001111111100000000
	cout << std::bitset<32>(blue_mask) << endl;		//00000000000000000000000011111111

	unsigned int pixel_color = 0xDAA520;

	cout << std::bitset<32>(pixel_color) << endl;	//00000000110110101010010100100000

	unsigned char green = (pixel_color & green_mask)>>8;
	unsigned char blue = pixel_color & blue_mask;
	unsigned char red = (pixel_color & red_mask)>>16;

	cout << "blue" << bitset<8>(blue)<<" "<< int(blue)<< endl;			//blue00100000 32
	cout << "green" << bitset<8>(green) << " " << int(green) << endl;	//green10100101 165
	cout << "red" << bitset<8>(red) << " " << int(red) << endl;			//red11011010 218

	return 0;
}