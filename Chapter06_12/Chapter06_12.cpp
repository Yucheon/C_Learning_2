#include <iostream>

using namespace std;

int main()
{
	int fixedArray[] = { 1,2,3,4,5 };		//���� ����

	int* array = new int[5] {1, 2, 3, 4, 5};	//���� �ȵ�
	//������ Ÿ�ӿ� �������� �������� ��

	//resizing 
	delete[]array;
	return 0;
}