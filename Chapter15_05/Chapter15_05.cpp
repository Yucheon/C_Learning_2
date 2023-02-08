#include <iostream>
#include <memory>				//unique_ptr정의
#include "Resource.h"

auto doSomething()
{
	//return std::unique_ptr<Resource>(new Resource(5));		

	return std::make_unique<Resource>(5);		//가장 간단한 방법, move 시멘틱스를 사용하여 copy를 호출하지 않기 때문에 빠르다.
}

void doSomething2(std::unique_ptr<Resource> res)	
{
	res->setAll(10);
}

int main()
{
	{
		auto res1 = std::make_unique<Resource>(5);
		res1->setAll(1);
		res1->print();

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl;

		doSomething2(std::move(res1));		//copy가 안되므로 move시멘틱스 사용

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl;
		//res1->print();						//뺐겼으니 널값
	}

	return 0;
}