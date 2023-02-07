#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

int main()
{
	//�ڵ� �������� �Ѱ�

	{
		AutoPtr<Resource> res1(new Resource);	//���� : int i; int *ptr1(&i), int *ptr2=nullptr
		AutoPtr<Resource> res2;		//�޸𸮸� ������ ���� ����

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;		//��ȿ�� �ּ�
		cout << res2.m_ptr << endl;		//�ƹ��͵� ����

		res2 = res1;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}
	return 0;
}