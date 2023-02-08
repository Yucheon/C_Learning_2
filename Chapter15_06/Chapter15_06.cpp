#include <iostream>
#include "Resource.h"

int main()
{
	//Resource* res = new Resource(3);
	//res->setAll(1);
	{
		//std::shared_ptr<Resource>ptr1(res);
		auto ptr1 = std::make_shared<Resource>(3);		//위와같이 사용하지는 않고 make_shared를 이용한다.
		ptr1->setAll(1);

		ptr1->print();

		{
			//std::shared_ptr<Resource> ptr2(ptr1);
			//std::shared_ptr<Resource> ptr2(res);		//ptr1입장에서는 자기외에 다른곳에서 주소를 가지고 있다는 것을 알 방도가 없음
			auto ptr2 = ptr1;

			ptr2->setAll(3);
			ptr2->print();

			std::cout << "Going out of the block" << std::endl;
		}

		ptr1->print();

		std::cout << "Going out of the outer block" << std::endl;
	}

	return 0;
}