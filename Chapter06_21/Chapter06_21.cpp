#include <iostream>
#include <vector>
#include <algorithm>

void sorting(std::vector<int> h)
{
	std::sort(h.begin(), h.end());

	std::cout << "솔팅한 후 결과는" << std::endl;

	for (auto element : h)
		std::cout << element << ", ";

}
int main()
{
	std::vector<int> vec{ 4,1,7,3,5 };

	std::cout <<"vec의 사이즈는"<< vec.size() << std::endl;

	//vec.resize(2);

	//std::cout << vec.size() << vec.capacity() << std::endl;

	sorting(vec);

	return 0;
}