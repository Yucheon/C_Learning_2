#include <iostream>
#include <vector>
#include <algorithm>

void sorting(std::vector<int> h)
{
	std::sort(h.begin(), h.end());

	std::cout << "������ �� �����" << std::endl;

	for (auto element : h)
		std::cout << element << ", ";

}
int main()
{
	std::vector<int> vec{ 4,1,7,3,5 };

	std::cout <<"vec�� �������"<< vec.size() << std::endl;

	//vec.resize(2);

	//std::cout << vec.size() << vec.capacity() << std::endl;

	sorting(vec);

	return 0;
}