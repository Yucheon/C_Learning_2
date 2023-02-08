#include <iostream>
#include <memory>				//unique_ptr����
#include "Resource.h"

auto doSomething()
{
	//return std::unique_ptr<Resource>(new Resource(5));		

	return std::make_unique<Resource>(5);		//���� ������ ���, move �ø�ƽ���� ����Ͽ� copy�� ȣ������ �ʱ� ������ ������.
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

		doSomething2(std::move(res1));		//copy�� �ȵǹǷ� move�ø�ƽ�� ���

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl;
		//res1->print();						//�������� �ΰ�
	}

	return 0;
}