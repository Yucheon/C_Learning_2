#include <iostream>
#include "Cents.h"
template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << getMax(1, 2) << std::endl;			//2
	std::cout << getMax(31.02,1.0) << std::endl;	//31.02
	std::cout << getMax(1.1f, 1.2f) << std::endl;	//1.2
	std::cout << getMax('a', 'e') << std::endl;		//e

	std::cout << getMax(Cents(3), Cents(1)) << std::endl;

	return 0;
}