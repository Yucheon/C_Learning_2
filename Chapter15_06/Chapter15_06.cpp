#include <iostream>
#include "Resource.h"

int main()
{
	//Resource* res = new Resource(3);
	//res->setAll(1);
	{
		//std::shared_ptr<Resource>ptr1(res);
		auto ptr1 = std::make_shared<Resource>(3);		//���Ͱ��� ��������� �ʰ� make_shared�� �̿��Ѵ�.
		ptr1->setAll(1);

		ptr1->print();

		{
			//std::shared_ptr<Resource> ptr2(ptr1);
			//std::shared_ptr<Resource> ptr2(res);		//ptr1���忡���� �ڱ�ܿ� �ٸ������� �ּҸ� ������ �ִٴ� ���� �� �浵�� ����
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