#include <iostream>
#include <array>
#include <algorithm>

void Array_size(std::array<int, 10> &here)
{
	std::cout << here.size() << std::endl;
}

void Array_sorting(std::array<int, 10>& my)
{
	std::cout << "솔팅하기 전" << std::endl;
	for (auto element : my)
		std::cout << element<<", ";

	std::cout << std::endl << "솔팅한 후" << std::endl;

	std::sort(my.begin(), my.end());

	for (auto element : my)
		std::cout << element << ", ";
}

int main()
{
	std::array<int, 10> my_array = { 5,3,9,4,7,8,6,1,2 };

	std::cout << my_array[3] << " " << my_array.at(4) << std::endl;

	Array_size(my_array);

	Array_sorting(my_array);

	return 0;
}