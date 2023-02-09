#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v{ 2,4,3,1,8};

	v.resize(3);

	for (auto& e : v)
		std::cout << e<<", ";

	std::cout << std::endl << v.size() << ", " << v.capacity() << std::endl;
							//3						5
	return 0;
}