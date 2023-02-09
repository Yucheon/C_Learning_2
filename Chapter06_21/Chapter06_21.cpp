#include <iostream>
#include <vector>
#include <algorithm>

void sort(std::vector<int> &there)
{
	std::cout << "솔팅하기 전" << std::endl;
	for (auto& element : there)
		std::cout << element;

	std::sort(there.begin(), there.end());

	std::cout << "솔팅한 후" << std::endl;
	for (auto& element : there)
		std::cout << element;
}

int main()
{
	std::vector<int> vec{ 5,1,9,3,6 };

	std::cout << vec.size() << std::endl;

	sort(vec);

	return 0;
}