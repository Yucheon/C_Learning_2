#include <iostream>
#include <iostream>
#include <memory>				//unique_ptr¡§¿«
#include "Resource.h"

auto doSomething()
{
	return std::unique_ptr<Resource>(new Resource(5));
}

int main()
{
	{
		//Resource* res = new Resource(1000000);

		std::unique_ptr<Resource> res( new Resource(1000000));
	}
}