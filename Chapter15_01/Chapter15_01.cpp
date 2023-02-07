#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

int main()
{
	//자동 포인터의 한계

	{
		AutoPtr<Resource> res1(new Resource);	//정리 : int i; int *ptr1(&i), int *ptr2=nullptr
		AutoPtr<Resource> res2;		//메모리를 가지고 있지 않음

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;		//유효한 주소
		cout << res2.m_ptr << endl;		//아무것도 없음

		res2 = res1;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}
	return 0;
}